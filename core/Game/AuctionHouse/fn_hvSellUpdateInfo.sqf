/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!dialog) exitWith {};

private["_sel"];
_sel = lbCurSel 45703;
if ((_sel == -1) || (lbValue[45703, _sel]) == -1) exitWith {
	ctrlShow [45704, false];
	ctrlShow [45701, false];
	ctrlShow [45702, false];
	ctrlShow [45705, false];
	ctrlShow [45706, false];
};

disableSerialization;

ctrlShow [45704, true];
ctrlShow [45701, true];
ctrlShow [45702, true];
ctrlShow [45705, true];
ctrlShow [45706, true];
ctrlSetText [45704, "1500"];
ctrlSetText [45705, "Description..."];