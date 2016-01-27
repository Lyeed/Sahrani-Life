/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_res"];
_res = [];

{
	_license = configName _x;
	if ([_license] call public_fnc_hasLicense) then {
		_res pushBack _license;
	};
} foreach ("true" configClasses (missionConfigFile >> "ALYSIA_LICENSES"));

_res;
