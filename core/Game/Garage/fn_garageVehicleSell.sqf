/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_index", "_data", "_price", "_action"];

_index = lbValue[2802, (lbCurSel 2802)];
if (_index isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de véhicule"] call AlysiaClient_fnc_error;
};

_data = g_garage_vehicles select _index;
_price = ([_data select 0] call AlysiaClient_fnc_fetchVehInfo) select 19;
_action =
[
	format["Vous êtes sur le point de <t color='#DF0101'>vendre</t> votre véhicule pour <t color='#8cff9b'>%1</t>kn.", [_price] call AlysiaClient_fnc_numberText],
	"Vente",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;
if (_action) then
{
	playSound "buy";
	[true, _price, "Vente garage"] call AlysiaClient_fnc_handleATM;
	g_garage_vehicles deleteAt _index;
	[[nil, nil, (_data select 1), (_data select 2)], false] remoteExec ["AlysiaServer_fnc_vehicleDelete", 2];

	waitUntil
	{
		closeDialog 0;
		!dialog
	};

	[g_garage_vehicles] call AlysiaClient_fnc_garageOpen;
};
