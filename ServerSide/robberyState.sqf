/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_state", false, [false]],
	["_bank", ObjNull, [ObjNull]]
]) exitWith {};

switch (typeOf _bank) do { 
	case "Bank_Sahrani_N" : {bank_rob_N = _state};
	case "Bank_Sahrani_S": {bank_rob_S = _state};
};

if (_state) then
{
	[_bank] spawn TON_fnc_robberyAlarm;
	_bank setVariable ["robbery", ]
};