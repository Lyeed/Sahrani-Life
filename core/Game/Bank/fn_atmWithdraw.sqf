/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_value"];

if ((time - g_action_delay) < 2) exitWith {
	["Veuillez ralentir dans vos actions"] call public_fnc_error;
};

_value = ctrlText 2702;
if ([_value] call public_fnc_isNumber) then
{
	_value = parseNumber(_value);
	if (_value < 999999) then
	{
		if (_value < 0) then
		{
			if (_value <= g_atm) then 
			{
				g_action_delay = time;
				g_cash = g_cash + _value;
				g_atmcash = g_atmcash - _value;
				[] call public_fnc_atmMenuUpdate;
			} else {
				["Vous n'avez pas autant dans votre compte en banque"] call public_fnc_error;
			};	
		} else {
			["Vous ne pouvez pas retirer une somme d'argent négative ou égale à zéro"] call public_fnc_error;
		};
	} else {
		[format["Vous ne pouvez pas retirer plus de <t color='#8cff9b'>%1</t> en une fois", ([999999] call public_fnc_numberText)]] call public_fnc_error;
	};
} else {
	["La somme entrée n'est pas un nombre valide"] call public_fnc_error;
};

