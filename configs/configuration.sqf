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
	/* ===================[roleplay info]======================= */
	g_choice = "";
	g_firstName = "";
	g_lastName = "";
	g_birth = [];
	g_nationality = "";
	g_sexe = "";
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
	g_maxWeight = 24; // Identifies the max carrying weight (gets adjusted throughout game when wearing different types of clothing).
	g_carryWeight = 0; // Represents the players current inventory weight (MUST START AT 0).
	/* ===================[Money]======================= */
	g_cash = 0;
	g_atm = 0;
	g_atm_from = [];
	g_paycheck = 0;
	g_paycheck_period = compileFinal "15";
	/* ===================[Levels]======================= */
	g_WESTLevel = 0;
	g_EASTLevel = 0;
	g_GUERLevel = 0;
	g_CIVLevel = 0;
	//--------------
	g_adminlevel = 0;
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
	g_regen_active = false;
	//--------------
	g_dragingBody = ObjNull;
	/* =================[Drugs]=================== */
	g_drugs_patched = 0; // time before anti-addiction patch effect disappears (scale in seconds)
	g_drugs_consuming = 0; // time before all drugs effects and after effects stop (scale in seconds)
	g_drugs = [];

	"g_drugs pushBack (configName _x); true" configClasses (missionConfigFile >> "ALYSIA_DRUG");

	{
		missionNamespace setVariable [format["drug_stats_%1", _x], 0];
		missionNamespace setVariable [format["drug_consume_%1", _x], 0];
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
	/* =================[Sheeps]====================*/
	g_sheeps = [];

	/* =================[Chairs]====================*/
	g_chairs = [];

	{
		g_chairs pushBack configName(_x);
	} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_CHAIRS"));

	g_chairs = compileFinal str(g_chairs);
};
