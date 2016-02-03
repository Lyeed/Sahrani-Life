/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_value", "_type"];
_value = [_this, 0, 0, [0]] call BIS_fnc_param;
_type = [_this, 1, -1, [-1]] call BIS_fnc_param;

if (_type isEqualTo -1) exitWith {};

switch (_type) do
{
	case 0:
	{
		tawvd_foot = round(_value);
		((findDisplay 7500) displayCtrl 7807) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", tawvd_foot];
		if ((vehicle player) isEqualTo player) then {
			setViewDistance tawvd_foot;
		};
	};

	case 1:
	{
		tawvd_car = round(_value);
		((findDisplay 7500) displayCtrl 7810) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", tawvd_car];
		if ((vehicle player) isKindOf "LandVehicle") then {
			setViewDistance tawvd_car;
		};
	};

	case 2:
	{
		tawvd_air = round(_value);
		((findDisplay 7500) displayCtrl 7813) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", tawvd_air];
		setViewDistance tawvd_air;
		if ((vehicle player) isKindOf "Air") then {
			setViewDistance tawvd_car;
		};
	};

	case 3:
	{
		setObjectViewDistance round(_value);
		((findDisplay 7500) displayCtrl 7816) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (getObjectViewDistance select 0)];
	};

	case 4:
	{
		player setVariable["tf_globalVolume", (_value / 100)];
		((findDisplay 7500) displayCtrl 7821) ctrlSetStructuredText parseText format["<t align='center'>%1%2</t>", round((player getVariable["tf_globalVolume", 1]) * 100), "%"];
	};
};
