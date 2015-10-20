/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_infos", "_display", "_text"];
_infos = [_this, 0, [], [[]]] call BIS_fnc_param;

if ((call life_adminlevel) < 1) exitWith { closeDialog 0; };
if (!dialog) exitWith {};
if ((count _infos) == 0) exitWith { closeDialog 0; };

disableSerialization;
_display = findDisplay 2900;
_text = _display displayCtrl 2903;
_text ctrlSetStructuredText parseText format
[
		"<t align='left'>Sang</t><t align='right'>%1/4000 (-%2)</t><br/>"
	+	"<t align='left'>Coma</t><t align='right'>%3</t><br/>"
	+	"<t align='left'>Cash</t><t align='right' color='#8cff9b'>%4$</t><br/>"
	+	"<t align='left'>Compte</t><t align='right' color='#8cff9b'>%5$</t><br/>"
	+	"<t align='right'>Armée[%6/12] ONU[%7/4] Reb[%8/2] Med[%9/1]</t><br/>"
	+	"<t align='left'>Licences</t><t align='right'>[reb:%10] [reb2:%11] [med:%12]</t><br/>"
	+	"<t align='left'>Arme principale</t><t align='right'>%13</t><br/>"
	+	"<t align='left'>Arme secondaire</t><t align='right'>%14</t><br/>"
	+	"<t align='left'>Veste</t><t align='right'>%15</t><br/>"
	+	"<t align='left'>Uniforme</t><t align='right'>%16</t><br/>",
	(_infos select 0),
	(_infos select 1),
	if (_infos select 2) then {"<t color='#ff8c8c'>Oui</t>"} else {"<t color='#8cff9b'>Non</t>"},
	[(_infos select 3)] call life_fnc_numberText,
	[(_infos select 4)] call life_fnc_numberText,
	(_infos select 5),
	(_infos select 6),
	(_infos select 7),
	(_infos select 8),
	if (_infos select 9) then {"<t color='#8cff9b'>Oui</t>"} else {"<t color='#ff8c8c'>Non</t>"},
	if (_infos select 10) then {"<t color='#8cff9b'>Oui</t>"} else {"<t color='#ff8c8c'>Non</t>"},
	if (_infos select 11) then {"<t color='#8cff9b'>Oui</t>"} else {"<t color='#ff8c8c'>Non</t>"},
	(_infos select 12) select 0,
	(_infos select 12) select 1,
	(_infos select 12) select 2,
	(_infos select 12) select 3
];
