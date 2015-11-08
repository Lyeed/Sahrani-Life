/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_unit", "_damage", "_source", "_projectile", "_part"];
_unit = _this select 0;
_part = _this select 1;
_damage = _this select 2;
_source = _this select 3;
_projectile = _this select 4;

systemChat format["<DEBUG:DAMAGE> Amount : %1 | Part : %2 | Source : %3", _damage, _part, _source];
if (g_connected) then
{
	if (_damage > 0) then
	{
		_damage = (_damage * 120) * 2;
		
		[(_damage * -1)] call public_fnc_handleBlood;
		[(_damage / 10)] call public_fnc_handleBleed;
	};
};

0;