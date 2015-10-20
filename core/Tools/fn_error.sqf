/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_msg", "_sound"];
_msg = [_this, 0, "", [""]] call BIS_fnc_param;
_sound = [_this, 1, "", [""]] call BIS_fnc_param;

if (_msg isEqualTo "") exitWith {};
if (!(_sound isEqualTo "none")) then {
	if (_sound isEqualTo "") then {
		playSound "addItemFailed";
	} else {
		playSound _sound;
	};
};

hintSilent parseText (
		"<br/><t align='center'><img size='4.5' color='#DF0101' image='\A3\ui_f\data\map\Markers\Military\warning_ca.paa'/></t><br/><br/>"
	+ 	format["<t font='TahomaB' size='1.3'>%1</t><br/>", _msg]
	+ 	"<br/><img size='0.6' color='#BDBDBD' image='\A3\ui_f\data\gui\RscCommon\RscProgress\progressbar_ca.paa'/>"
);