/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_from", "_hud"];
_from = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

disableSerialization;
switch (side _from) do
{
	case civilian:
	{
		private["_info"];
		_info = [_this, 1, [], [[]]] call BIS_fnc_param;

		if ((_info select 0) isEqualTo "NORTH") then
		{
			15 cutRsc ["RscTitleIdentityCIV_NORTH", "PLAIN"];

			_hud = uiNameSpace getVariable ["RscTitleIdentityCIV_NORTH", displayNull];
			if (isNull _hud) exitWith {};

			(_hud displayCtrl 79001) ctrlSetStructuredText parseText format
			[
				"<t color='#000000' size='1.1' font='EtelkaMonospacePro'>%1</t>",
				(_from getVariable ["realname", (name _from)])
			];

			(_hud displayCtrl 79002) ctrlSetStructuredText parseText format
			[
					"<t font='EtelkaMonospacePro' color='#000000' size='0.7'>"
				+	"<t align='left'>Sexe</t><t align='right'>%1</t><br/>"
				+	"<t align='left'>Date de naissance</t><t align='right'>%2/%3/%4</t><br/>"
				+	"<t align='left'>Origine</t><t align='right'>%5</t></t>",
				(_info select 3),
				(_info select 1) select 0,
				(_info select 1) select 1,
				(_info select 1) select 2,
				getText(missionConfigFile >> "ALYSIA_NATIONALITIES" >> (_info select 2) >> "name")
			];
		} else {
			15 cutRsc ["RscTitleIdentityCIV_SOUTH", "PLAIN"];

			_hud = uiNameSpace getVariable ["RscTitleIdentityCIV_SOUTH", displayNull];
			if (isNull _hud) exitWith {};

			(_hud displayCtrl 79041) ctrlSetStructuredText parseText format
			[
				"<t color='#000000' size='1.1' font='EtelkaMonospacePro'>%1</t>",
				(_from getVariable ["realname", (name _from)])
			];

			(_hud displayCtrl 79042) ctrlSetStructuredText parseText format
			[
					"<t font='EtelkaMonospacePro' color='#000000' size='0.7'>"
				+	"<t align='left'>Sexe</t><t align='right'>%1</t><br/>"
				+	"<t align='left'>Date de naissance</t><t align='right'>%2/%3/%4</t><br/>"
				+	"<t align='left'>Origine</t><t align='right'>%5</t></t>",
				(_info select 3),
				(_info select 1) select 0,
				(_info select 1) select 1,
				(_info select 1) select 2,
				getText(missionConfigFile >> "ALYSIA_NATIONALITIES" >> (_info select 2) >> "name")
			];
		};
	};
	case west:
	{
		15 cutRsc ["RscTitleIdentityWEST", "PLAIN"];

		_hud = uiNameSpace getVariable ["RscTitleIdentityWEST", displayNull];
		if (isNull _hud) exitWith {};

		(_hud displayCtrl 79021) ctrlSetStructuredText parseText format
		[
			"<t color='#000000' size='1' font='EtelkaMonospacePro'>%1</t>",
			(_from getVariable ["realname", (name _from)])
		];

		(_hud displayCtrl 79022) ctrlSetStructuredText parseText format
		[
			"<t size='1.6' color='#FF8000' font='EtelkaMonospacePro' align='center'>%1</t>",
			([side _from, (_from getVariable ["rank", 0])] call AlysiaClient_fnc_rankToStr)
		];
	};
	case east:
	{
		15 cutRsc ["RscTitleIdentityEAST", "PLAIN"];

		_hud = uiNameSpace getVariable ["RscTitleIdentityEAST", displayNull];
		if (isNull _hud) exitWith {};

		(_hud displayCtrl 79011) ctrlSetStructuredText parseText format
		[
			"<t size='1.1' color='#000000' font='EtelkaMonospacePro' align='center'>%1</t>",
			(_from getVariable ["realname", (name _from)])
		];

		(_hud displayCtrl 79012) ctrlSetStructuredText parseText format
		[
			"<t color='#FF8000' size='1.3' font='EtelkaMonospacePro' align='center'>%1</t>",
			([side _from, (_from getVariable ["rank", 0])] call AlysiaClient_fnc_rankToStr)
		];
	};
	case independent:
	{
		15 cutRsc ["RscTitleIdentityGUER", "PLAIN"];

		_hud = uiNameSpace getVariable ["RscTitleIdentityGUER", displayNull];
		if (isNull _hud) exitWith {};

		(_hud displayCtrl 79031) ctrlSetStructuredText parseText format
		[
			"<t size='1.4' color='#000000' font='EtelkaMonospacePro' align='center'>%1</t>",
			(_from getVariable ["realname", (name _from)])
		];

		(_hud displayCtrl 79032) ctrlSetStructuredText parseText format
		[
			"<t size='1.6' color='#FF8000' font='EtelkaMonospacePro' align='center'>%1</t>",
			([side _from, (_from getVariable ["rank", 0])] call AlysiaClient_fnc_rankToStr)
		];
	};
};
