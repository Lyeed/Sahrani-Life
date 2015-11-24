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
		class TON_fnc_vehicleDelete {allowTargets = SERVER;};
		class TON_fnc_vehicle_update_fuel {allowTargets = SERVER;};
		class TON_fnc_vehicle_update_insurrance {allowTargets = SERVER;};
		class TON_fnc_vehicle_update_name {allowTargets = SERVER;};
		class TON_fnc_vehicle_update_storePos {allowTargets = SERVER;};
		//- Garage
		class TON_fnc_garageVehicles {allowTargets = SERVER;};
		class TON_fnc_garageVehicleStore {allowTargets = SERVER;};
		class TON_fnc_garageVehicleSpawn {allowTargets = SERVER;};
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
		//- dynamicMarkers
		class TON_fnc_dynamicMarkers_update {allowTargets = SERVER;};
		//- housing
		class TON_fnc_house_add {allowTargets = SERVER;};
		class TON_fnc_house_sell {allowTargets = SERVER;};
		class TON_fnc_house_storage_handler {allowTargets = SERVER;};
		class TON_fnc_house_storage_install {allowTargets = SERVER;};
		//- Sheep
		class TON_fnc_sheepGenerate {allowTargets = SERVER;};
		//- Bank
		class TON_fnc_bank_state {allowTargets = SERVER;};

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
		class public_fnc_phone_message_receive {allowTargets = CLIENT;};
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
		class public_fnc_dynamicMarkers_update {allowTargets = CLIENT;};
		class public_fnc_house_menu_owner_action_light_update {allowTargets = CLIENT;};
		class public_fnc_endGame {allowTargets = CLIENT;};
		class public_fnc_restrain {allowTargets = CLIENT;};
		class public_fnc_sheepProcess {allowTargets = CLIENT;};
		class public_fnc_lightOn {allowTargets = CLIENT;};

		//- Arma
		class setFuel {allowTargets = EVERYONE;};
		class say3D {allowTargets = CLIENT;};
		class setHitPointDamage {allowTargets = EVERYONE;};
		class lock {allowTargets = EVERYONE;};
		class hintSilent {allowTargets = CLIENT;};
		class systemChat {allowTargets = CLIENT;};
		class BIS_fnc_endMission {allowTargets = CLIENT;};
	};

	class Commands
	{

	};
};

#undef CLIENT
#undef SERVER
#undef EVERYONE