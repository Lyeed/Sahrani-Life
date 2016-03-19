with missionNamespace do
{
	/******************************
	****** Backend Variables *****
	******************************/
	g_launder = 0;
	g_objPut = ObjNull;
	g_killer = ObjNull;
	g_curWep_h = "";
	/* ===================[inUse/delay variables]======================= */
	g_action_delay = time;
	g_action_inUse = false;
	g_knockout = false;
	g_interrupted = false;
	g_is_alive = false;
	g_connected = false;
	g_yielding = false;
	g_speaking = false;
	g_seatbelt = false;
	g_garage_store = false;
	/* ===================[dog]======================= */
	g_dog = objNull;
	/* ===================[roleplay info]======================= */
	g_choice = "";
	g_firstName = "";
	g_lastName = "";
	g_birth = [];
	g_nationality = "";
	g_sexe = "";
	/* ===================[Staff]==========================*/
	g_staff_god = false;
	g_staff_markers = false;
	g_staff_spec = false;
	g_staff_tp = false;
	g_staff_invisible = false;
	/* ===================[Tablet]==========================*/
	g_apps = [];
	/* ===================[Phone]======================= */
	g_phone_contacts = [];
	g_phone_messages = [];
	g_phone_forfait = "none";
	g_phone_blacklist = [];
	/* ===================[First Person View]======================= */
	g_firstCombatActive = false;
	/* ===================[Weight system]======================= */
	g_maxWeight = 24;// Identifies the max carrying weight (gets adjusted throughout game when wearing different types of clothing).
	g_carryWeight = 0;// Represents the players current inventory weight (MUST START AT 0).
	/* ===================[Money]======================= */
	g_cash = 0;
	g_atm = 0;
	g_atm_from = [];
	/* ===================[Levels]======================= */
	g_WESTLevel = 0;
	g_EASTLevel = 0;
	g_GUERLevel = 0;
	g_CIVLevel = 0;
	/* =================[ViewDistances]=================== */
	tawvd_foot = viewDistance;
	tawvd_car = viewDistance;
	tawvd_air = viewDistance;
	/* ===================[Prison]======================= */
	g_arrest_Prison = "";
	g_arrest_Cellule = 0;
	g_arrest_Time = 0;
	g_arrest_Caution = 0;
	g_arrest_Reason = "";
	g_arrest_Gear = [];
	g_arrest_Escape = false;
	/* ==================[Health/body system]==================== */
	g_hurt_effect = ppEffectCreate ["ColorCorrections", 9999];
	g_hurt_effect ppEffectEnable true;
	g_hurt_effect ppEffectForceInNVG true;
	g_thirst = 100;
	g_hunger = 100;
	g_blood = 4000;
	g_bleed = 0;
	g_alcool = 0;
	g_morphine = 0;
	g_adrenaline = 0;
	g_regen_active = false;
	g_dragingBody = ObjNull;
	/* =================[Plants]=================== */
	g_stations = [];
	{
		g_stations pushBack (configName _x);
	} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_FUEL_STATION"));
	g_stations = compileFinal str(g_stations);
	/* =================[Plants]=================== */
	g_plants = [];
	"g_plants pushBack (configName _x);true" configClasses (missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS");
	g_plants = compileFinal str(g_plants);
	/* =================[Housing]=================== */
	g_houses_list = [];
	"g_houses_list pushBack (configName _x);true" configClasses (missionConfigFile >> "ALYSIA_HOUSES");
	g_houses_list = compileFinal str(g_houses_list);

	g_houses_storages = [];
	"g_houses_storages pushBack (configName _x);true" configClasses (missionConfigFile >> "ALYSIA_STORAGES");
	g_houses_storages = compileFinal str(g_houses_storages);
	/* =================[Dynamic Markers]=================== */
	g_dynamic_markers_discovered = [];
	g_dynamic_markers = [];
	"g_dynamic_markers pushBack (configName _x);true" configClasses (missionConfigFile >> "ALYSIA_DYN_MARKERS");
	/* =================[Items]=================== */
	g_inv_items = [];
	"g_inv_items pushBack(configName _x);true" configClasses (missionConfigFile >> "ALYSIA_ITEMS");

	{
		missionNamespace setVariable[format["inv_%1", _x], 0];
	} forEach g_inv_items;
	/* =================[Sheeps]====================*/
	g_sheeps = [];

	/* =================[Chairs]====================*/
	g_chairs = [];
	
	{
		g_chairs pushBack configName(_x);
	} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_CHAIRS"));

	g_chairs = compileFinal str(g_chairs);
	/* =================[ATM]====================*/
	g_atms = [];

	{
		g_atms pushBack configName(_x);
	} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_ATM"));

	g_atms = compileFinal str(g_atms);
	/* =================[LABO]====================*/
	g_laboratories = [];

	{
		if (!(getText(_x >> "object") in g_laboratories)) then {
			g_laboratories pushBack getText(_x >> "object");
		};
	} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_LABORATORIES"));

	g_laboratories = compileFinal str(g_laboratories);
	/* =================[Dynamic Objects]=================== */
	g_dynamic_objects = [];

	{
		g_dynamic_objects pushBack configName(_x);
	} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_DYN_OBJECTS"));

	g_dynamic_objects = compileFinal str(g_dynamic_objects);
};
