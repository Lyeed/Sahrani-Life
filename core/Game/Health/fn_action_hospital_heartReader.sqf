/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_reader", "_bed"];
_reader = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_bed = [_this, 1, objNull, [objNull]] call BIS_fnc_param;

if ((isNull _reader) || (isNull _bed)) exitWith {};

while {((attachedTo player) isEqualTo _bed)} do
{
	if (_reader getVariable ["monitor_on", false]) then
	{
		if (player getVariable ["heart_attack", false]) then
		{
			if ((_reader animationPhase "reader_PulseOff") != 1) then
			{
				[_reader, "heart_alert", 80] call CBA_fnc_globalSay3d;
				_reader animateSource ["reader_PulseOff", 1];
			};
			if ((_reader animationPhase "reader_PulseOn") != 0) then {_reader animateSource ["reader_PulseOn", 0]};
		} else {
			if ((_reader animationPhase "reader_PulseOff") != 0) then {_reader animateSource ["reader_PulseOff", 0]};
			if ((_reader animationPhase "reader_PulseOn") != 1) then {_reader animateSource ["reader_PulseOn", 1]};
			[_reader, "heart_rate", 6] call CBA_fnc_globalSay3d;
		};
	} else {
		if ((_reader animationPhase "reader_PulseOff") != 0) then {_reader animateSource ["reader_PulseOff", 0]};
		if ((_reader animationPhase "reader_PulseOn") != 0) then {_reader animateSource ["reader_PulseOn", 0]};
	};

	uiSleep 1.4;
};

if ((_reader animationPhase "reader_PulseOff") != 0) then {_reader animateSource ["reader_PulseOff", 0]};
if ((_reader animationPhase "reader_PulseOn") != 0) then {_reader animateSource ["reader_PulseOn", 0]};
