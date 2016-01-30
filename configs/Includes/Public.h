class Public
{
	tag = "public";

	class Init
	{
		file = "core\Inits";
		class init_loops {};
		class init_data {};
		class init_position {};
		class init_actions {};
		class init_buildings {};
		class init_loadout {};
		class init_variables {};
		class init_eventHandlers {};
		class init_keys {};
		class init_triggers {};
		class preInit {
			preInit = 1;
		};
	};

	class Market
	{
		file = "core\Game\Market";
		class market_getPrice {};
		class market_handlePrice {};
		class market_setPrice {};
	};

	class Border
	{
		file = "core\Game\Border";
		class border_south_sounds {};
		class border_south_speaker_destroy {};
		class border_south_speaker_repair {};
		class border_dog_get {};
	};

	class VirtualInventory
	{
		file = "core\Game\VirtualInventory";
		class virtual_menu_exhange_open {};
		class virtual_menu_exhange_update {};
		class virtual_menu_exhange_store {};
		class virtual_menu_exhange_take {};
		class virtual_menu_update {};
		class virtual_menu_action_use {};
		class virtual_menu_action_remove {};
	};

	class Companies
	{
		file = "core\Game\Companies";
		class company_create_open {};
		class company_create_action {};
		class company_create_update {};
		class company_construction_open {};
		class company_construction_update {};
		class company_construction_action {};
		class company_construction_build {};
		class company_info_open {};
	};

	class Tools
	{
		file = "core\Tools";
		class hideAllMarkers {};
		class showAllMarkers {};
		class sitDown {};
		class standUp {};
		class handleTrunk {};
		class itemTrunk {};
		class setHitPointDamage {};
		class hasLicense {};
		class lightOn {};
		class lightBug {};
		class weightGenerate {};
		class posNearFourriere {};
		class strToSide {};
		class errorExit {};
		class getInv {};
		class accType {};
		class calWeightDiff {};
		class camShake {};
		class createMarker {};
		class endGame {};
		class error {};
		class fetchcfgDetails {};
		class fetchVehInfo {};
		class fillUpWithInv {};
		class getGear {};
		class getPlayerFromUID {};
		class handleInv {};
		class handleATM {};
		class handleCash {};
		class holdsterSwitch {};
		class hudSetup {};
		class index {};
		class info {};
		class isNumber {};
		class loadGear {};
		class numberText {};
		class objPut {};
		class packupObjPut {};
		class pushObject {};
		class saveGear {};
		class seizeObjects {};
		class showProgress {};
		class stripDownPlayer {};
		class TextAllowed {};
		class strDate {};
		class strTime {};
		class age {};
		class getRegion {};
		class getLicenses {};
		class getVehAssurancePrice {};
		class getVehBuyPrice {};
		class getVehGaragePrice {};
		class getVehSellPrice {};
		class getVehVirtual {};
		class licenseGetName {};
		class rankToStr {};
		class sideToStr {};
		class itemCount {};
		class itemGetDrop {};
		class itemGetImage {};
		class itemGetName {};
		class itemGetBuyPrice {};
		class itemGetSellPrice {};
		class itemGetWeight {};
	};

	class Items
	{
		file = "core\Game\Items";
		class activateNitro {};
		class applyBaillon {};
		class applyBandeau {};
		class telecommande {};
		class sifflet {};
		class dropItems {};
		class getBaillon {};
		class getBaillonSelf {};
		class getBandeau {};
		class getBandeauSelf {};
		class getOffBaillon {};
		class getOffBandeau {};
		class handleItem {};
		class nitro {};
		class radar {};
		class removeItem {};
		class silence {};
		class spikeStripEffect {};
		class useBaillon {};
		class useBandeau {};
		class useItem {};
		class storageBox {};
		class patch {};
	};

	class Laboratories
	{
		file = "core\Game\Laboratories";
		class labo_deploy {};
		class labo_destroy {};
		class labo_process {};
	};

	class Shops
	{
		file = "core\Game\Shops";
		class steal_vehicle_open {};
		class steal_vehicle_update {};
		class steal_vehicle_action {};
		class shop_clothing_update_list {};
		class shop_clothing_open {};
		class shop_clothing_buy {};
		class shop_clothing_update_clothe {};
		class shop_vehicles_open {};
		class shop_vehicles_buy {};
		class shop_vehicles_update {};
		class shop_virtual_open {};
		class shop_virtual_update {};
		class shop_virtual_add {};
		class shop_virtual_buysell {};
		class shop_virtual_remove {};
		class shop_arma_open {};
		class shop_arma_update {};
		class shop_arma_buy {};
		class shop_dynamicMarkers_open {};
		class shop_dynamicMarkers_update_list {};
		class shop_dynamicMarkers_update_info {};
		class shop_dynamicMarkers_buy {};
	};

	class Skull
	{
		file = "core\Game\Skull";
		class skullMenu_search_open {};
		class skullMenu_search_update {};
		class skullMenu_search_take {};
		class skullMenu_take {};
		class skullMenu_who {};
	};

	class dynamicMarkers
	{
		file = "core\Game\dynamicMarkers";
		class dynamicMarkers_destroy {};
		class dynamicMarkers_update {};
		class dynamicMarkers_reveal {};
	};

	class Garage
	{
		file = "core\Game\Garage";
		class garageGet {};
		class garageOpen {};
		class garageTypeSelect {};
		class garageVehicleAssure {};
		class garageVehicleFind {};
		class garageVehicleGet {};
		class garageVehicleImport {};
		class garageVehicleRefuel {};
		class garageVehicleRenameProcess {};
		class garageVehicleRenameStart {};
		class garageVehicleSelect {};
		class garageVehicleSell {};
		class garageVehicleStore {};
		class garageStoreOpen {};
		class garageStoreUpdate {};
		class garageStoreAction {};
	};

	class Missions
	{
		file = "core\Game\Missions";
		class mission_start {};
	};

	class Vehicles
	{
		file = "core\Game\Vehicles";
		class clearVehicleAmmo {};
		class vehicleMenu_flip {};
		class vehicleMenu_key {};
		class vehicleMenu_owner {};
		class vehicleMenu_refuel {};
		class vehicleMenu_repair_action {};
		class vehicleMenu_repair_fill {};
		class vehicleMenu_repair_open {};
		class vehicleMenu_repair_update {};
		class vehicleMenu_repair_getColor {};
		class vehicleMenu_steal {};
		class vehicleMenu_impound {};
		class vehicleMenu_pullout {};
		class vehicleMenu_siphon {};
		class vehicleMenu_farm_gather {};
		class vehicleMenu_farm_plant {};
		class vehicleMenu_farm_fish {};
		class vehicleMenu_dog {};
	};

	class FuelStations
	{
		file = "core\Game\FuelStations";
		class fuelStation_use_refuel_veh {};
		class fuelStation_refuel_veh_update {};
		class fuelStation_refuel_veh_validate {};
		class fuelStation_price_buy {};
		class fuelStation_price_sell {};
		class fuelRefuel_use_refuel_veh {};
		//class fuelStation_use_refuel_jerry {};
		//class fuelStation_refuel_jerry_update {};
		//class fuelStation_refuel_jerry_validate {};
		//class fuelRefuel_use_refuel_jerry {};
	};

	class Housing
	{
		file = "core\Game\Housing";
		class house_menu_handler {};
		class house_menu_open_buy {};
		class house_menu_action_sell {};
		class house_menu_action_light {};
		class house_menu_action_light_update {};
		class house_menu_action_garage {};
		class house_menu_action_store {};
		class house_menu_action_owner {};
		class house_menu_action_buy {};
		class house_menu_action_storage {};
	};

	class Phone
	{
		file = "core\Game\Phone";
		class phone_numberChange;
		class phone_message_send {};
		class phone_message_receive {};
		class phone_forfait_change {};
		class phone_number_to_name {};
	};

	class Health
	{
		file = "core\Game\Health";
		class bandageUse {};
		class bodyDrag {};
		class bodyDrop {};
		class coma {};
		class handleBleed {};
		class handleBlood {};
		class handleHunger {};
		class handleThirst {};
		class healHospital {};
		class killAction {};
		class killProcess {};
		class massageCardiaque {};
		class morphineApply {};
		class morphineUse {};
	};

	class Gather
	{
		file = "core\Game\Gather";
		class catchTurtle {};
		class pickGather {};
		class plantHarvest {};
		class plantSeed {};
		class plantGrow {};
		class process_action {};
		class process_open {};
		class process_update {};
		class sheepStart {};
		class sheepProcess {};
	};

	class Licenses
	{
		file = "core\Game\Licenses";
		class buyLicense {};
	};

	class Launder
	{
		file = "core\Game\Launder";
		class launder_calc {};
		class launder_action {};
		class launder_open {};
		class launder_receive {};
	};

	class Drugs
	{
		file = "core\Game\Drugs";
		class drugConsume {};
		class saliveProcess {};
		class saliveStart {};
	};

	class Bank
	{
		file = "core\Game\Bank";
		class atmAction {};
		class atmScreen {};
		class robberyStart {};
		class robberyProcess {};
		class robberyTools {};
		class salaryProcess {};
	};

	class AuctionHouse
	{
		file = "core\Game\AuctionHouse";
		class auctionHouse_menu_open {};
		class auctionHouse_menu_filter {};
		class auctionHouse_menu_update {};
		class auctionHouse_getStock {};
		class auctionHouse_getInfo {};
		class auctionHouse_getPlayerData {};
		class auctionHouse_action_buy {};
		class auctionHouse_action_cancel {};
		class auctionHouse_action_sell {};
		class auctionHouse_receive_buy {};
		class auctionHouse_receive_money {};
		class auctionHouse_receive_cancel {};
		class auctionHouse_addItem {};
		class auctionHouse_canAdd {};
	};

	class Prisons
	{
		file = "core\game\Prisons";
		class prisonNearest {};
		class prisonRelease {};
		class prisonPutInJail {};
		class prisonWorkReward {};
		class prisonTimer {};
		class prisonMenu_open {};
		class prisonMenu_use_validate {};
		class prisonModifyMenu_informations_get {};
		class prisonModifyMenu_informations_return {};
		class prisonModifyMenu_open {};
		class prisonModifyMenu_use_validate {};
		class prisonModifyMenu_use_validate_send {};
		class prisonModifyMenu_use_release {};
	};

	class Interactions
	{
		file = "core\Game\Interactions";
		class interactions_create {};
		class interactions_recall {};
		class interactions_player_to_player_basics {};
		class interactions_player_to_player_coma {};
		class interactions_player_to_player_prison {};
		class interactions_player_to_skull {};
		class interactions_player_to_vehicle {};
		class interactions_player_to_house_search {};
		class interactions_player_to_house_owner {};
		class interactions_player_to_station {};
		class interactions_player_to_company {};
		class interactions_player_to_speaker {};
		class interactions_player_to_dog {};
		class interactions_player_to_laboratory {};
	};

	class Actions
	{
		file = "core\Game\Actions";
		class identityOpen {};
		class interactionMenu_action_restrain {};
		class interactionMenu_action_unrestrain {};
		class escort {};
		class stopescort {};
		class showIdentity {};
		class interactionMenu_action_lockpick {};
		class interactionMenu_action_trade_open {};
		class interactionMenu_action_trade_update {};
		class interactionMenu_action_trade_add_inventory {};
		class interactionMenu_action_trade_add_money {};
		class interactionMenu_action_trade_add_key {};
		class interactionMenu_action_trade_remove {};
		class interactionMenu_action_trade_propose {};
		class interactionMenu_action_trade_receive {};
		class interactionMenu_action_trade_refuse {};
		class interactionMenu_action_trade_space {};
		class interactionMenu_action_search {};
		class interactionMenu_action_search_get {};
		class interactionMenu_action_search_return {};
		class interactionMenu_action_ticket {};
		class interactionMenu_action_ticket_send {};
		class interactionMenu_action_ticket_receive {};
		class interactionMenu_action_license {};
		class interactionMenu_action_license_get {};
		class interactionMenu_action_license_return {};
		class interactionMenu_action_license_revoke {};
		class sirene {};
		class eatFood {};
		class knockedOut {};
		class knockoutAction {};
		class pickupItem {};
		class pickupMoney {};
		class restrain {};
		class surrender {};
	};

	class Welcome
	{
		file = "core\Game\Welcome";
		class welcomeInit {};
		class welcomeCameras {};
		class welcomeMenu_Open {};
		class welcomeMenu_Proceed {};
		class welcome_faction {};
	};

	class Tablet
	{
		file = "core\Game\Tablet";
		class tabletOpen {};
		class tabletApp {};
		class tabletAppAnimation {};
		class tabletShow {};
		class APP_main {};
		class APP_solde {};
		class APP_vehicles {};
		class APP_vehicles_update {};
		class APP_settings {};
		class APP_settings_slider {};
		class APP_server {};
		class APP_store {};
		class APP_store_licenses {};
		class APP_store_licenses_Update {};
		class APP_store_licenses_Buy {};
		class APP_store_applications {};
		class APP_store_applications_update {};
		class APP_store_applications_buy {};
		class APP_store_forfait {};
		class APP_store_forfait_update {};
		class APP_store_forfait_buy {};
		class APP_help {};
		class APP_phone {};
		class APP_phone_contacts {};
		class APP_phone_contacts_add {};
		class APP_phone_messages_read {};
		class APP_phone_messages_read_open {};
		class APP_phone_messages_read_delete {};
		class APP_phone_messages_send {};
		class APP_phone_messages_send_action {};
		class APP_phone_messages_receive {};
		class APP_phone_settings {};
		class APP_phone_faction {};
		class APP_phone_faction_send {};
		class APP_phone_change {};
		class APP_phone_blacklist {};
		class APP_phone_blacklist_add {};
		class APP_licenses {};
		class APP_faction {};
		class APP_faction_leader_office {};
		class APP_faction_leader_officeHandler {};
		class APP_faction_leader_office_invite {};
		class APP_faction_leader_office_invitePropose {};
		class APP_faction_leader_office_rankApply {};
		class APP_faction_leader_history {};
		class APP_market {};
		class APP_market_update {};
		class APP_staff {};
		class APP_staff_player_actions_update {};
		class APP_staff_players_actions_update {};
		class APP_staff_players_getData {};
		class APP_staff_players_returnData {};
		class APP_fuel {};
		class APP_fuel_update {};
		class APP_fuel_update_info {};
		class APP_announces_write {};
		class APP_announces_write_action {};
		class APP_announces_show {};
		class APP_announces_show_update {};
	};
};
