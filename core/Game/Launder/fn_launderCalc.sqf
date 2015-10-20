/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_illegalMoney"];
_illegalMoney = missionNamespace getVariable["life_inv_illegal_money", 0];

switch (true) do
{
	case (_illegalMoney > 0 && _illegalMoney < 1000000): {0.6};
	case (_illegalMoney >= 1000000 && _illegalMoney < 5000000): {0.7};
	case (_illegalMoney >= 5000000 && _illegalMoney < 15000000): {0.8};
	case (_illegalMoney >= 15000000): {0.9};
	default {0};
};