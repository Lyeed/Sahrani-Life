/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_cop", "_positivMarijuana", "_positivCocaineCoupee", "_positivCocainePure", "_positivMeth"];
_cop = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _cop) exitWith {};
_positivMarijuana = missionNamespace getVariable "CONSUME_marijuana";
_positivCocaineCoupee = missionNamespace getVariable "CONSUME_cocaine_pure";
_positivCocainePure = (missionNamespace getVariable "CONSUME_cocaine_pure");
_positivMeth = (missionNamespace getVariable "CONSUME_meth");

[
	[
		format
		[
				"<img size='10' color='#FFFFFF' image='Alysia_textures\data\DNA.paa'/><br/>"
			+ 	"<t align='left'>Marijuana</t><t align='right'>%1</t><br/>"
			+	"<t align='left'>Cocaïne</t><t align='right'>%2</t><br/>"
			+	"<t align='left'>Meth</t><t align='right'>%3</t>",
			if (_positivMarijuana > 0) then {format["<t color='#ff0028'>Positif</t> (%1g/ml de sang)", ((_positivMarijuana) / 400)]} else {"<t color='#ffd700'>Négatif</t>"}, 
			if (_positivCocaineCoupee > 0 || _positivCocainePure > 0) then {
				format["<t color='#ff0028'>Positif</t> (%1g/ml de sang)", ((_positivCocainePure + _positivCocaineCoupee) / 400)]
			} else {"<t color='#ffd700'>Négatif</t>"}, 
			if (_positivMeth > 0) then {format["<t color='#ff0028'>Positif</t> (%1g/ml de sang)", ((_positivMeth) / 400)]} else {"<t color='#ffd700'>Négatif</t>"},
			if (life_consuming > 0) then {"<t color='#00a8ff'><t size='1.3'>FAUX POSITIF</t></t>"} else {""}
		]
	], "ALYSIA_fnc_parseTextSilent", _cop
] spawn life_fnc_MP;
