#define EVERYONE 0
#define CLIENT   1
#define SERVER   2

class CfgRemoteExec
{
	class Functions
	{
		mode = 2;
		jip = 0;

		/*
		**			SERVER FUNCTIONS
		*/

		//- Player Mysql
		class TON_fnc_query_insert_inscription {allowTargets = SERVER;};
		class TON_fnc_query_update_partial {allowTargets = SERVER;};
		class TON_fnc_query_update_usual {allowTargets = SERVER;};
		class TON_fnc_query_update_disconnect {allowTargets = SERVER;};
		class TON_fnc_query_select_connect {allowTargets = SERVER;};
		//- Vehicle
		class TON_fnc_vehicleCreate {allowTargets = SERVER;};
		//- Garage
		class TON_fnc_garageVehicles {allowTargets = SERVER;};
		class TON_fnc_garageVehicleStore {allowTargets = SERVER;};
		class TON_fnc_garageVehicleSpawn {allowTargets = SERVER;};
		class TON_fnc_garageVehicleRename {allowTargets = SERVER;};
		class TON_fnc_garageVehicleRefuel {allowTargets = SERVER;};
		class TON_fnc_garageVehicleImport {allowTargets = SERVER;};
		class TON_fnc_garageVehicleAssure {allowTargets = SERVER;};
		//- Factions
		class TON_fnc_factionHistoryGet {allowTargets = SERVER;};
		class TON_fnc_factionHistoryClean {allowTargets = SERVER;};
		class TON_fnc_factionHistoryAdd {allowTargets = SERVER;};
		class TON_fnc_factionMemberList {allowTargets = SERVER;};
		class TON_fnc_factionMemberModify {allowTargets = SERVER;};
		//- Phone
		class TON_fnc_phoneMessageHandler {allowTargets = SERVER;};
		//- Log
		class TON_fnc_logDeath {allowTargets = SERVER;};

		/*
		**		CLIENT FUNCTIONS
		*/
		// - Mission
		class MySQL_fnc_requestReceived {allowTargets = CLIENT;};
		class public_fnc_garageOpen {allowTargets = CLIENT;};
		class public_fnc_leaderMenuBoard {allowTargets = CLIENT;};
		class public_fnc_leaderMenuHistory {allowTargets = CLIENT;};
		class public_fnc_leaderInvitePropose {allowTargets = CLIENT;};
		class public_fnc_info {allowTargets = CLIENT;};
		class public_fnc_APP_phone_messages_receive {allowTargets = CLIENT;};
		class public_fnc_playSound {allowTargets = CLIENT;};
		class public_fnc_killAction {allowTargets = CLIENT;};
		class public_fnc_playAnimation {allowTargets = CLIENT;};
		class public_fnc_welcomeInit {allowTargets = CLIENT;};
		class public_fnc_interactionMenu_action_trade_receive {allowTargets = CLIENT;};
		class public_fnc_interactionMenu_action_trade_refuse {allowTargets = CLIENT;};
		class public_fnc_interactionMenu_action_trade_space {allowTargets = CLIENT;};
		class public_fnc_interactionMenu_action_search_get {allowTargets = CLIENT;};
		class public_fnc_interactionMenu_action_search_return {allowTargets = CLIENT;};
		class public_fnc_interactionMenu_action_ticket_receive {allowTargets = CLIENT;};
		class public_fnc_interactionMenu_action_license_get {allowTargets = CLIENT;};
		class public_fnc_interactionMenu_action_license_return {allowTargets = CLIENT;};
		class public_fnc_interactionMenu_action_license_revoke {allowTargets = CLIENT;};

		//- Arma
		class setFuel {allowTargets = EVERYONE;};
		class say3D {allowTargets = CLIENT;};
		class setHitPointDamage {allowTargets = EVERYONE;};
		class lock {allowTargets = EVERYONE;};
		class hintSilent {allowTargets = CLIENT;};
	};

	class Commands
	{

	};
};

#undef CLIENT
#undef SERVER
#undef EVERYONE