with missionNamespace do
{
	/******************************
	****** Backend Variables *****
	******************************/
	g_launder = 0;
	g_position = [];
	g_objPut = ObjNull;
	g_killer = ObjNull;
	g_curWep_h = "";
	/* ===================[inUse/delay variables]======================= */
	g_firstSpawn = true;
	g_session_completed = false;
	g_action_delay = time;
	g_respawned = false;
	g_net_dropped = false;
	g_hit_explosive = false;
	g_action_inUse = false;
	g_is_processing = false;
	g_action_cancel = false;
	g_action_gathering = false;
	g_storeTrunk = false;
	g_garage_store = false;
	g_net_dropped = false;
	g_hit_explosive = false;
	g_knockout = false;
	g_interrupted = false;
	g_is_alive = false;
	g_connected = false;
	g_yielding = false;
	/* ===================[roleplay info]======================= */
	g_choice = "";
	g_firstName = "";
	g_lastName = "";
	g_birth = "";
	g_nationality = "";
	g_sexe = "";
	/* ===================[Tablet]==========================*/
	g_apps = [];
	/* ===================[Phone]======================= */
	g_phone_contacts = [];
	g_phone_number = "";
	g_phone_messages = [];
	g_phone_forfait = "none";
	g_phone_blacklist = [];

	g_phone_forfaits = [];
	"g_phone_forfaits pushBack(configName _x); true" configClasses (missionConfigFile >> "ALYSIA_FORFAITS");
	/* ===================[First Person View]======================= */
	g_firstCombatActive = false;
	/* ===================[Weight system]======================= */
	g_maxWeight = 24; // Identifies the max carrying weight (gets adjusted throughout game when wearing different types of clothing).
	g_maxWeightT = 24; // Static variable representing the players max carrying weight on start.
	g_carryWeight = 0; // Represents the players current inventory weight (MUST START AT 0).
	/* ===================[Money]======================= */
	g_cash = 0;
	g_atm = 0;
	g_paycheck = 0;
	/* ===================[Levels]======================= */
	g_WESTLevel = 0;
	g_EASTLevel = 0;
	g_GUERLevel = 0;
	g_REBLevel = 0;
	//--------------
	g_adminlevel = 0;
	/* =================[ViewDistances]=================== */
	tawvd_foot = viewDistance;
	tawvd_car = viewDistance;
	tawvd_air = viewDistance;
	/* ===================[Prison]======================= */
	g_arrestReason = "";
	g_arrestMinuts = 0;
	g_arrestEscape = false;
	g_arrested = false;
	/* ================[Objects containers]================== */
	g_vehicles = [];
	/* ==================[Health/body system]==================== */
	g_hurt_effect = ppEffectCreate ["ColorCorrections", 9999];
	g_hurt_effect ppEffectEnable true;
	//--------------
	g_thirst = 100;
	g_hunger = 100;
	//--------------
	g_blood = 4000;
	g_bleed = 0;
	g_morphine = 0;
	//--------------
	g_coma = false;
	g_comaTime = 0;
	//--------------
	g_regen_active = false;
	//--------------
	g_dragingBody = ObjNull;
	/* =================[Drugs]=================== */
	g_drugs_patched = 0; // time before anti-addiction patch effect disappears (scale in seconds)
	g_drugs_consuming = 0; // time before all drugs effects and after effects stop (scale in seconds)
	g_drugs = [];

	"g_drugs pushBack (configName _x); true" configClasses (missionConfigFile >> "ALYSIA_DRUG");

	{
		missionNamespace setVariable[format["drug_stats_%1", _x], 0];
		missionNamespace setVariable[format["drug_consume_%1", _x], 0];
	} forEach (g_drugs);
	/* =================[Plants]=================== */
	g_plants = [];
	"g_plants pushBack (configName _x); true" configClasses (missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS");
	g_plants = compileFinal str(g_plants);
	/* =================[Housing]=================== */
	g_houses = [];

	g_houses_list = [];
	"g_houses_list pushBack (configName _x); true" configClasses (missionConfigFile >> "ALYSIA_HOUSES");
	g_houses_list = compileFinal str(g_houses_list);

	g_houses_storages = [];
	"g_houses_storages pushBack (configName _x); true" configClasses (missionConfigFile >> "ALYSIA_STORAGES");
	g_houses_storages = compileFinal str(g_houses_storages);

	/* =================[Dynamic Markers]=================== */
	g_dynamic_markers = [];
	"g_dynamic_markers pushBack (configName _x); true" configClasses (missionConfigFile >> "ALYSIA_DYN_MARKERS");
	/* =================[Lasting Objects]===================
	g_lastingObjects = [];
	g_lastingObjects_Buildings = [];
	g_lastingObjects_Process = [];
	g_lastingObjects_Items = [];

	_missionConfigPatches = missionConfigFile >> "ALYSIA_LASTING_OBJECTS";
	for "_i" from 0 to count (_missionConfigPatches) - 1 do 
	{
		private["_patchEntry"];
		_patchEntry = _missionConfigPatches select _i;
		if (isClass _patchEntry) then 
		{
			g_lastingObjects_Buildings pushBack str(_patchEntry);
			g_lastingObjects_Process pushBack (_missionConfigPatches >> str(_patchEntry) >> "process");
			g_lastingObjects_Items pushBack (_missionConfigPatches >> str(_patchEntry) >> "item");
		};
	};

	g_lastingObjects_Buildings = compileFinal str(g_lastingObjects_Buildings);
	g_lastingObjects_Process = compileFinal str(g_lastingObjects_Process);
	g_lastingObjects_Items = compileFinal str(g_lastingObjects_Items);
	 */
	/* =================[Items]=================== */
	g_inv_items = [];
	"g_inv_items pushBack(configName _x); true" configClasses (missionConfigFile >> "ALYSIA_ITEMS");

	{
		missionNamespace setVariable[format["inv_%1", _x], 0];
	} forEach (g_inv_items);
	/* =================[Licenses]=================== */
	g_licenses = [];
	"g_licenses pushBack(configName _x); true" configClasses (missionConfigFile >> "ALYSIA_LICENSES");

	{
		missionNamespace setVariable[format["license_%1", _x], false];
	} forEach (g_licenses);
	/* =================[Market]=================== */
	g_market = [];
	"g_market pushBack (configName _x); true" configClasses (missionConfigFile >> "ALYSIA_BOURSE");
	/* =================[Sheeps]====================*/
	g_sheeps = [];
};