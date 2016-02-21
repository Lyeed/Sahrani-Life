/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_ring"];

_ring = profileNamespace getVariable ["ALYSIA_phone_recv", "message_rcv_1"];
if (((call g_donator) isEqualTo 0) && !(_ring in ["message_rcv_1", "message_rcv_2"])) then
{
	_ring = "message_rcv_1";
	profileNamespace setVariable ["ALYSIA_phone_recv", "message_rcv_1"];
	saveProfileNamespace;
};

message_rcv_1;
