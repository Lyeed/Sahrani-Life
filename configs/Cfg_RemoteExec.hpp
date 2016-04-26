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
		class AlysiaServer_fnc_keyManagement {allowTargets = SERVER;};
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
		class AlysiaServer_fnc_logDupli {allowTargets = SERVER;};
		class AlysiaServer_fnc_logLaunder {allowTargets = SERVER;};
		class AlysiaServer_fnc_logMoney {allowTargets = SERVER;};
		//- dynamic
		class AlysiaServer_fnc_dynamicMarkers_update {allowTargets = SERVER;};
		class AlysiaServer_fnc_spikeStrip {allowTargets = SERVER;};
		//- housing
		class AlysiaServer_fnc_house_add {allowTargets = SERVER;};
		class AlysiaServer_fnc_house_sell {allowTargets = SERVER;};
		class AlysiaServer_fnc_house_update_storage {allowTargets = SERVER;};
		class AlysiaServer_fnc_house_update_lights {allowTargets = SERVER;};
		class AlysiaServer_fnc_house_tenants_add {allowTargets = SERVER;};
		class AlysiaServer_fnc_house_perquisition {allowTargets = SERVER;};
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
		class AlysiaServer_fnc_company_perquisition {allowTargets = SERVER;};
		//- Border
		class AlysiaServer_fnc_border_alarm_south {allowTargets = SERVER;};
		//- Laboratories
		class AlysiaServer_fnc_laboratory_insert {allowTargets = SERVER;};
		class AlysiaServer_fnc_laboratory_destroy {allowTargets = SERVER;};
		//- C4
		class AlysiaServer_fnc_c4_bomb {allowTargets = SERVER;};
		//- Wipe
		class AlysiaServer_fnc_query_delete_wipe {allowTargets = SERVER;};
		
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
		class AlysiaClient_fnc_item_knife_apply {allowTargets = CLIENT;};
		class AlysiaClient_fnc_welcomeInit {allowTargets = CLIENT;};
		//- Phone
		class AlysiaClient_fnc_phone_message_receive {allowTargets = CLIENT;};
		class AlysiaClient_fnc_phone_call_receive {allowTargets = CLIENT;};
		class AlysiaClient_fnc_phone_call_loop {allowTargets = CLIENT;};
		class AlysiaClient_fnc_phone_call_end {allowTargets = CLIENT;};

		//- INTERACTION MENU
		class AlysiaClient_fnc_interactionMenu_action_trade_receive {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_trade_refuse {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_trade_space {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_search_get {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_search_return {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_ticket_receive {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_license_get {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_license_return {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_license_revoke {allowTargets = CLIENT;};
		class AlysiaClient_fnc_interactionMenu_action_license_give_action {allowTargets = CLIENT;};
		
		class AlysiaClient_fnc_restrain {allowTargets = CLIENT;};
		class AlysiaClient_fnc_sheepProcess {allowTargets = CLIENT;};
		class AlysiaClient_fnc_lightOn {allowTargets = CLIENT;};
		class AlysiaClient_fnc_border_south_missile_effects {allowTargets = CLIENT;};
		
		//- AH
		class AlysiaClient_fnc_auctionHouse_receive_money {allowTargets = CLIENT;};
		class AlysiaClient_fnc_auctionHouse_receive_buy {allowTargets = CLIENT;};
		class AlysiaClient_fnc_auctionHouse_receive_cancel {allowTargets = CLIENT;};
		//- Housing
		class AlysiaClient_fnc_house_menu_owner_action_light_update {allowTargets = CLIENT;};
		class AlysiaClient_fnc_house_menu_action_keys_change_update {allowTargets = CLIENT;};
		//- dynamicMarkers
		class AlysiaClient_fnc_dynamicMarkers_update {allowTargets = CLIENT;};
		//- staff
		class AlysiaClient_fnc_APP_staff_players_returnData {allowTargets = CLIENT;};
		class AlysiaClient_fnc_APP_staff_players_getData {allowTargets = CLIENT;};
		//- Identity
		class AlysiaClient_fnc_identityOpen {allowTargets = CLIENT;};
		// - Company
		class AlysiaClient_fnc_company_member_join {allowTargets = CLIENT;};
		class AlysiaClient_fnc_company_member_propose {allowTargets = CLIENT;};
		class AlysiaClient_fnc_company_member_leave {allowTargets = CLIENT;};
		class AlysiaClient_fnc_company_member_license_receive {allowTargets = CLIENT;};
		// - interactions
		class AlysiaClient_fnc_alcootest_return {allowTargets = CLIENT;};
		class AlysiaClient_fnc_knockedOut {allowTargets = CLIENT;};
		// - missions
		class AlysiaClient_fnc_mission_prevent {allowTargets = CLIENT;};
		// - medical
		class AlysiaClient_fnc_action_hospital_awake {allowTargets = CLIENT;};
		class AlysiaClient_fnc_action_hospital_heartReader {allowTargets = CLIENT;};
		class AlysiaClient_fnc_desease_start {allowTargets = CLIENT;};
		class AlysiaClient_fnc_doctor_get {allowTargets = CLIENT;};
		class AlysiaClient_fnc_doctor_return {allowTargets = CLIENT;};
		
		//- Arma
		class setFuel {allowTargets = EVERYONE;};
		class say3D {allowTargets = CLIENT;};
		class setHitPointDamage {allowTargets = EVERYONE;};
		class setHitIndex {allowTargets = EVERYONE;};
		class lock {allowTargets = EVERYONE;};
		class hintSilent {allowTargets = CLIENT;};
		class systemChat {allowTargets = CLIENT;};
		class BIS_fnc_endMission {allowTargets = CLIENT;};
		class switchMove {allowTargets = CLIENT;};
		class hideObject {allowTargets = EVERYONE;};
		class setVelocity {allowTargets = EVERYONE;};
		class hideObjectGlobal {allowTargets = SERVER;};

		class AlysiaClient_fnc_endGame {allowTargets = CLIENT;};
	};

	class Commands
	{

	};
};

#undef CLIENT
#undef SERVER
#undef EVERYONE
