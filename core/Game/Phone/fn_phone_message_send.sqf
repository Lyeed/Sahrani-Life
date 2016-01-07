/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_bad", "_from", "_sent", "_price", "_error", "_msg", "_to", "_hide"];
_msg = [_this, 0, "", [""]] call BIS_fnc_param;
_to = [_this, 1, [], [[]]] call BIS_fnc_param;
_hide = [_this, 2, false, [false]] call BIS_fnc_param;

if ((time - g_action_delay) < 2) exitWith {[0, "Veuillez ralentir dans vos actions"]};
if (_msg isEqualTo "") exitWith {[0, "Vous ne pouvez pas envoyer de message vide"]};

_bad = [_msg, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123456789-éè?!,.ù_ "] call public_fnc_TextAllowed;
if (_bad != "") exitWith {[0, format["Vous utilisez un caractère interdit dans votre message (%1)", _bad]]};
if (([_msg] call CBA_fnc_strLen) > 100) exitWith {[0, "Votre message ne doit pas dépasser 100 caractères"]};
if (_to isEqualTo []) exitWith {[0, "Vous n'avez pas entré de destinataire"]};
if ((count _to) > 5) exitWith {[0, "Vous ne pouvez pas envoyer de message à plus de cinq numéros"]};

g_action_delay = time;
_price = getNumber(missionConfigFile >> "ALYSIA_FORFAITS" >> g_phone_forfait >> "sms_price");
_error = "";
_sent = 0;

if (_hide) then {
	_from = "Numéro Masqué";
} else {
	_from = player getVariable ["number", ""];
};

{
	private["_number"];
	_number = [_x] call CBA_fnc_trim;
	switch (_number) do
	{
		case "GUER":
		{
			if ((independent countSide allPlayers) isEqualTo 0) then
			{
				_error = _error + format
				[
					"<t align='left'>Numéro</t><t align='right'>[%2]</t><br/>Aucune membre de <t color='#FF4000'>%1</t> n'est disponible<br/><t align='center'>----------</t><br/>",
					getText(missionConfigFile >> "ALYSIA_FACTIONS" >> "GUER" >> "name"), _number
				];
			} else {
				_sent = _sent + 1;
				[_msg, _from] remoteExecCall ["public_fnc_phone_message_receive", independent];
			};
		};

		case "WEST":
		{
			if ((west countSide allPlayers) isEqualTo 0) then
			{
				_error = _error + format
				[
					"<t align='left'>Numéro</t><t align='right'>[%2]</t><br/>Aucune membre de <t color='#FF4000'>%1</t> n'est disponible<br/><t align='center'>----------</t><br/>",
					getText(missionConfigFile >> "ALYSIA_FACTIONS" >> "WEST" >> "name"), _number
				];
			} else {
				_sent = _sent + 1;
				[_msg, _from] remoteExecCall ["public_fnc_phone_message_receive", west];
			};
		};

		case "EAST":
		{
			if ((east countSide allPlayers) isEqualTo 0) then
			{
				_error = _error + format
				[
					"<t align='left'>Numéro</t><t align='right'>[%2]</t><br/>Aucune membre de <t color='#FF4000'>%1</t> n'est disponible<br/><t align='center'>----------</t><br/>",
					getText(missionConfigFile >> "ALYSIA_FACTIONS" >> "EAST" >> "name"), _number
				];
			} else {
				_sent = _sent + 1;
				[_msg, _from] remoteExecCall ["public_fnc_phone_message_receive", east];
			};
		};

		default
		{
			if ([_number] call public_fnc_isNumber) then
			{
				if (([_number] call CBA_fnc_strLen) isEqualTo 6) then
				{
					if (_number != (player getVariable ["number", ""])) then
					{
						if (_number in (missionNamespace getVariable ["gServer_phone_numbers", []])) then
						{
							if (g_atm >= _price) then
							{
								if (!(_number in g_phone_blacklist)) then
								{
									private["_target"];
									_target = objNull;
									{
										if ((_x getVariable ["number", "-1"]) isEqualTo _number) exitWith {
											_target = _x;
										};
									} forEach (allPlayers);
									if (isNull _target) then {
										[_msg, _from, _number] remoteExecCall ["TON_fnc_phoneMessageHandler", 2];
									} else {
										[_msg, _from] remoteExecCall ["public_fnc_phone_message_receive", _target];
									};
									[false, _price, "SMS"] call public_fnc_handleATM;
									_sent = _sent + 1;
								} else {
									_error = _error + format["<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Vous ne pouvez pas envoyer de message aux numéros que vous avez bloqués<br/><t align='center'>----------</t><br/>", _number];
								};
							} else {
								_error = _error + format["<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Vous n'avez pas assez d'argent pour envoyer le SMS<br/><t align='center'>----------</t><br/>", _number];
							};
						} else {
							_error = _error + format["<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Le numéro demandé n'est pas attribué<br/><t align='center'>----------</t><br/>", _number];
						};
					} else {
						_error = _error + format["<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Vous ne pouvez pas vous envoyer de message à vous même<br/><t align='center'>----------</t><br/>", _number];
					};
				} else {
					_error = _error + format["<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Un numéro de téléphone doit être composé de six chiffres<br/><t align='center'>----------</t><br/>", _number];
				};
			} else {
				_error = _error + format["<t align='left'>Numéro</t><t align='right'>[%1]</t><br/>Le numéro de téléphone entré n'est pas valide<br/><t align='center'>----------</t><br/>", _number];
			};
		};
	};
} forEach (_to);

if (_sent != count(_to)) exitWith {
	[_sent, format["<t align='center'><t color='#DF3A01'>Erreurs SMS</t><br/>Certains messages n'ont pas pu être envoyés (%2)</t><br/><br/>%1", _error, (count(_to) - _sent)]];
};

[_sent, ""];