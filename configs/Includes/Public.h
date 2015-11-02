class Public
{
	tag = "public";

	class Init
	{
		file = "core\Inits";
		class init_fWEST {};
		class init_fCIV {};
		class init_fEAST {};
		class init_fGUER {};
	};

	class Configs
	{
		file = "configs";
		class setupActions {};
		class loadout {};
	};

	class Tools
	{
		file = "core\Tools";
		class strToSide {};
		class errorExit {};
		class getInv {};
		class hasItem {};
		class accType {};
		class actionKeyHandler {};
		class animSync {};
		class broadcast {};
		class calWeightDiff {};
		class camShake {};
		class checkMoney {};
		class corpse {};
		class createMarker {};
		class displayHandler {};
		class endGame {};
		class error {};
		class fetchcfgDetails {};
		class fetchVehInfo {};
		class fillUpWithInv {};
		class getAdn {};
		class getDonatorAugmentationPrice {};
		class getDonatorReductionPrice {};
		class getGear {};
		class getPlayerFromUID {};
		class giveDiff {};
		class handleInv {};
		class handleMoney {};
		class hideIllegalArea {};
		class holdsterSwitch {};
		class hudSetup {};
		class identityChange {};
		class index {};
		class info {};
		class inString {};
		class isNumber {};
		class isUIDActive {};
		class loadGear {};
		class moveIn {};
		class nearUnits {};
		class netSetVar {};
		class numberText {};
		class objPut {};
		class packupObjPut {};
		class parseTextSilent {};
		class playAnimation {};
		class playerCount {};
		class playSound {};
		class progressBar {};
		class pullOutVeh {};
		class pushObject {};
		class saveGear {};
		class seizeObjects {};
		class setFuel {};
		class setMapPosition {};
		class showProgress {};
		class simDisable {};
		class soundTimeCfg {};
		class stripDownPlayer {};
		class TextAllowed {};
		class strDate {};
		class strTime {};
		class age {};
		class getRegion {};
	};

	class Items
	{
		file = "core\Game\Items";
		class activateNitro {};
		class applyBaillon {};
		class applyBandeau {};
		class copOpener {};
		class dropItems {};
		class getBaillon {};
		class getBaillonSelf {};
		class getBandeau {};
		class getBandeauSelf {};
		class getOffBaillon {};
		class getOffBandeau {};
		class handleItem {};
		class jerryRefuel {};
		class lockpick {};
		class nitro {};
		class paintChoosen {};
		class paintWeapon {};
		class radar {};
		class removeItem {};
		class spikeStripEffect {};
		class useBaillon {};
		class useBandeau {};
		class useItem {};
		class storageBox {};
	};

	class LastingObjects
	{
		file = "core\Game\LastingObjects";
		class lastingObjectsCreate {};
		class lastingObjectsDestroy {};
		class lastingObjectsDestroyOwner {};
		class lastingObjectsInspect {};
		class lastingObjectsMenuOpen {};
		class lastingObjectsProcessInspect {};
		class lastingObjectsSabotage {};
	};

	class Shops
	{
		file = "core\Game\Shops";
		class chopShopMenu {};
		class chopShopSelection {};
		class chopShopSell {};
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
		class skullMenu_open {};
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
		class garageVehicleSelect {};
		class garageTypeSelect {};
		class garageVehicleStore {};
		class garageVehicleGet {};
		class garageVehicleFind {};
		class garageVehicleRefuel {};
		class garageVehicleImport {};
		class garageVehicleSell {};
		class garageVehicleAssure {};
		class garageVehicleRenameStart {};
		class garageVehicleRenameProcess {};
	};

	class Vehicles
	{
		file = "core\Game\Vehicles";
		class addVehicle2Chain {};
		class clearVehicleAmmo {};
		class vehicleMenu_flip {};
		class vehicleMenu_inventory_open {};
		class vehicleMenu_inventory_update {};
		class vehicleMenu_inventory_store {};
		class vehicleMenu_inventory_take {};
		class vehicleMenu_key {};
		class vehicleMenu_open {};
		class vehicleMenu_owner {};
		class vehicleMenu_refuel {};
		class vehicleMenu_repair_action {};
		class vehicleMenu_repair_fill {};
		class vehicleMenu_repair_open {};
		class vehicleMenu_repair_update {};
		class vehicleMenu_steal {};
		class vehicleMenu_impound {};
		class vehicleMenu_pullout {};
		class vehicleMenu_putIn {};
	};

	class Housing
	{
		file = "core\Game\Housing";
		class house_menu_handler {};
		class house_menu_open_buy {};
		class house_menu_open_owner {};
		class house_menu_open_search {};
		class house_menu_action_sell {};
		class house_menu_action_light {};
		class house_menu_action_light_update {};
		class house_menu_action_garage {};
		class house_menu_action_store {};
		class house_menu_action_owner {};
		class house_menu_action_buy {};
	};

	class Health
	{
		file = "core\Game\Health";
		class bandageApply {};
		class bandageUse {};
		class bloodBagUse {};
		class bodyDrag {};
		class bodyDrop {};
		class coma {};
		class epinephrineUse {};
		class handleBleed {};
		class handleBlood {};
		class handleHunger {};
		class HandleThirst {};
		class healHospital {};
		class killAction {};
		class killProcess {};
		class massageCardiaque {};
		class medicalMenu {};
		class morphineApply {};
		class morphineUse {};
	};

	class Gather
	{
		file = "core\Game\Gather";
		class catchFish {};
		class catchTurtle {};
		class dropFishingNet {};
		class pickGather {};
		class plantGather {};
		class plantHarvest {};
		class plantSeed {};
		class processAction {};
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
		class launderCalc {};
		class launderExecute {};
		class launderOpen {};
		class launderReceive {};
	};

	class Drugs
	{
		file = "core\Game\Drugs";
		class drugConsume {};
		class questionDealer {};
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
	};

	class AuctionHouse
	{
		file = "core\Game\AuctionHouse";
		class hvBuyAction {};
		class hvBuyOpen {};
		class hvBuyPreOpen {};
		class hvBuySuccess {};
		class hvBuyUpdate {};
		class hvBuyUpdateInfo {};
		class hvSellAction {};
		class hvSellCancel {};
		class hvSellCancelSuccess {};
		class hvSellOpen {};
		class hvSellSuccess {};
		class hvSellUpdate {};
		class hvSellUpdateInfo {};
	};

	class Arrest
	{
		file = "core\game\Arrest";
		class arrestButton {};
		class arrestMenu {};
		class putInJail {};
	};

	class Admin
	{
		file = "core\Game\Admin";
		class adminMenu {};
		class adminQuery {};
		class adminQueryGetInfo {};
		class adminQueryShowInfo {};
		class adminFind {};
		class adminSpec {};
		class adminRemboursementInit {};
		class adminRemboursementProcess {};
		class adminRemboursementGive {};
		class adminGoto {};
		class adminHeal {};
		class adminHealApply {};
		class adminTpHere {};
		class adminInventoryInit {};
		class adminInventoryGet {};
		class adminInventoryShow {};
		class adminGotoSpawn {};
		class adminMarkers {};
		class adminTp {};
		class adminGod {};
		class adminKey {};
		class adminOwner {};
		class adminHvStatus {};
	};

	class Actions
	{
		file = "core\Game\Actions";
		class interactionMenu_open {};
		class interactionMenu_action_restrain {};
		class interactionMenu_action_unrestrain {};
		class interactionMenu_action_escort {};
		class interactionMenu_action_stopescort {};
		class interactionMenu_action_identity {};
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
		class eatFood {};
		class knockedOut {};
		class knockoutAction {};
		class pickupItem {};
		class pickupMoney {};
		class restrain {};
		class surrender {};
	};

	class GETTERS
	{
		file = "configs\GameConfigs\GETTERS";
		class getVehAssurancePrice {};
		class getVehBuyPrice {};
		class getVehGaragePrice {};
		class getVehSellPrice {};
		class getVehVirtual {};
		class lastingObjectsGang {};
		class licenseGetName {};
		class licenseGetPrice {};
		class licenseIsIllegal {};
		class marketGetBuyPrice {};
		class marketGetSellPrice {};
		class nearestHouse {};
		class rankToStr {};
		class sideToStr {};
		class vehicleIsFaction {};
		class itemCount {};
		class itemGetDrop {};
		class itemGetImage {};
		class itemGetName {};
		class itemGetBuyPrice {};
		class itemGetSellPrice {};
		class itemGetWeight {};
		class itemIsIllegal {};
		class itemIsRemovable {};
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
		class APP_settings {};
		class APP_settings_slider {};
		class APP_server {};
		class APP_inventory {};
		class APP_inventory_Update {};
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
	};
};