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
		class AlysiaServer_fnc_query_insert_inscription {allowTargets = SERVER;};
		class AlysiaServer_fnc_query_update_partial {allowTargets = SERVER;};
		class AlysiaServer_fnc_query_update_usual {allowTargets = SERVER;};
		class AlysiaServer_fnc_query_update_disconnect {allowTargets = SERVER;};
		class AlysiaServer_fnc_query_select_connect {allowTargets = SERVER;};
		//- Vehicle
		class AlysiaServer_fnc_vehicleCreate {allowTargets = SERVER;};
		class AlysiaServer_fnc_vehicleDelete {allowTargets = SERVER;};
		class AlysiaServer_fnc_vehicle_update_fuel {allowTargets = SERVER;};
		class AlysiaServer_fnc_vehicle_update_insurrance {allowTargets = SERVER;};
		class AlysiaServer_fnc_vehicle_update_name {allowTargets = SERVER;};
		class AlysiaServer_fnc_vehicle_update_storePos {allowTargets = SERVER;};
		//- Garage
		class AlysiaServer_fnc_garageVehicles {allowTargets = SERVER;};
		class AlysiaServer_fnc_garageVehicleStore {allowTargets = SERVER;};
		class AlysiaServer_fnc_garageVehicleSpawn {allowTargets = SERVER;};
		//- Factions
		class AlysiaServer_fnc_factionHistoryGet {allowTargets = SERVER;};
		class AlysiaServer_fnc_factionHistoryClean {allowTargets = SERVER;};
		class AlysiaServer_fnc_factionHistoryAdd {allowTargets = SERVER;};
		class AlysiaServer_fnc_factionMemberList {allowTargets = SERVER;};
		class AlysiaServer_fnc_factionMemberModify {allowTargets = SERVER;};
		class AlysiaServer_fnc_factionBankHandle {allowTargets = SERVER;};
		//- Phone
		class AlysiaServer_fnc_phoneMessageHandler {allowTargets = SERVER;};
		//- Log
		class AlysiaServer_fnc_logDeath {allowTargets = SERVER;};
		//- dynamicMarkers
		class AlysiaServer_fnc_dynamicMarkers_update {allowTargets = SERVER;};
		//- housing
		class AlysiaServer_fnc_house_add {allowTargets = SERVER;};
		class AlysiaServer_fnc_house_sell {allowTargets = SERVER;};
		class AlysiaServer_fnc_house_storage_install {allowTargets = SERVER;};
		//- Sheep
		class AlysiaServer_fnc_sheepGenerate {allowTargets = SERVER;};
		//- Bank
		class AlysiaServer_fnc_bank_state {allowTargets = SERVER;};
		//- AH
		class AlysiaServer_fnc_auctionHouse_add {allowTargets = SERVER;};
		class AlysiaServer_fnc_auctionHouse_remove {allowTargets = SERVER;};
		class AlysiaServer_fnc_auctionHouse_tryBuy {allowTargets = SERVER;};
		//- Companies
		class AlysiaServer_fnc_company_insert {allowTargets = SERVER;};
		class AlysiaServer_fnc_company_build {allowTargets = SERVER;};
		//- Border
		class AlysiaServer_fnc_border_alarm_south {allowTargets = SERVER;};
		//- Tablet : announces
		class AlysiaServer_fnc_announces_add {allowTargets = SERVER;};
		//- Laboratories
		class AlysiaServer_fnc_laboratory_insert {allowTargets = SERVER;};
		class AlysiaServer_fnc_laboratory_destroy {allowTargets = SERVER;};
		
		/*
		**		CLIENT FUNCTIONS
		*/
		// - Mission
		class AlysiaDB_fnc_requestReceived {allowTargets = CLIENT;};
		class AlysiaClient_fnc_garageOpen {allowTargets = CLIENT;};
		class AlysiaClient_fnc_leaderMenuBoard {allowTargets = CLIENT;};
		class AlysiaClient_fnc_leaderMenuHistory {allowTargets = CLIENT;};
		class AlysiaClient_fnc_leaderInvitePropose {allowTargets = CLIENT;};
		class AlysiaClient_fnc_info {allowTargets = CLIENT;};
		class AlysiaClient_fnc_phone_message_receive {allowTargets = CLIENT;};
		class AlysiaClient_fnc_item_knife_apply {allowTargets = CLIENT;};
		class AlysiaClient_fnc_welcomeInit {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_trade_receive {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_trade_refuse {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_trade_space {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_search_get {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_search_return {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_ticket_receive {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_license_get {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_license_return {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_license_revoke {allowTargets = CLIENT;};
		
		class AlysiaClient_fnc_endGame {allowTargets = CLIENT;};
		class AlysiaClient_fnc_restrain {allowTargets = CLIENT;};
		class AlysiaClient_fnc_sheepProcess {allowTargets = CLIENT;};
		class AlysiaClient_fnc_lightOn {allowTargets = CLIENT;};
		//- AH
		class AlysiaClient_fnc_auctionHouse_receive_money {allowTargets = CLIENT;};
		class AlysiaClient_fnc_auctionHouse_receive_buy {allowTargets = CLIENT;};
		class AlysiaClient_fnc_auctionHouse_receive_cancel {allowTargets = CLIENT;};
		//- Housing
		class AlysiaClient_fnc_house_menu_owner_action_light_update {allowTargets = CLIENT;};
		//- dynamicMarkers
		class AlysiaClient_fnc_dynamicMarkers_update {allowTargets = CLIENT;};
		//- staff
		class AlysiaClient_fnc_APP_staff_players_returnData {allowTargets = CLIENT;};
		class AlysiaClient_fnc_APP_staff_players_getData {allowTargets = CLIENT;};
		//- Identity
		class AlysiaClient_fnc_identityOpen {allowTargets = CLIENT;};

		//- Arma
		class setFuel {allowTargets = EVERYONE;};
		class say3D {allowTargets = CLIENT;};
		class setHitPointDamage {allowTargets = EVERYONE;};
		class lock {allowTargets = EVERYONE;};
		class hintSilent {allowTargets = CLIENT;};
		class systemChat {allowTargets = CLIENT;};
		class BIS_fnc_endMission {allowTargets = CLIENT;};
		class switchMove {allowTargets = CLIENT;};
	};

	class Commands
	{

	};
};

#undef CLIENT
#undef SERVER
#undef EVERYONE
