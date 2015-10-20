/******************************
****** Backend Variables *****
******************************/
g_minutsPlay = 0;
g_launder = 0;
g_position = [];
g_objPut = ObjNull;
g_killer = ObjNull;
g_trunk_vehicle = Objnull;
g_my_gang = ObjNull;
g_respawn_timer = 2; //Scaled in minutes
g_bank_robber = [];
g_curWep_h = "";
/* ===================[Clothing system]======================= */
g_clothing_filter = 0;
g_clothing_uniform = -1;
g_clothing_purchase = [-1,-1,-1,-1,-1]; //Uniform price (0),Hat Price (1),Glasses Price (2),Vest Price (3),Backpack Price (4)
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
g_bank_fail = false;
g_use_atm = true;
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
g_combatTime = 0;
/* ===================[Trade system]======================= */
g_tradeTarget = ObjNull;
g_tradeList = [];
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
/* ===================[Gangs]======================= */
g_gangPrice = compileFinal "75000";
g_gangUpgradeBase = compileFinal "15000";
g_gangUpgradeMultipler = compileFinal "5";
g_paycheck_period = compileFinal "15";
g_gangRebelWhiteListPrice = compileFinal "250000";
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
/* =================[Radios]=================== */
g_handRadios = compileFinal "
[
	""tf_anprc148jem"",
	""tf_anprc152"",
	""tf_anprc154"",
	""tf_fadak"",
	""tf_pnr1000a"",
	""tf_anprc152_3"",
	""tf_rf7800str"",
	""tf_anprc152_4""
];";
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
g_houses_WEST = [];
g_houses_EAST = [];
g_houses_GUER = [];
g_houses_CIV = [];
g_houses_storages = [];

_missionConfigPatches = missionConfigFile >> "ALYSIA_HOUSE";
for "_i" from 0 to count (_missionConfigPatches) - 1 do 
{
	private["_patchEntry"];
	_patchEntry = _missionConfigPatches select _i;
	if (isClass _patchEntry) then 
	{
		switch (getText(_missionConfigPatches >> str(_patchEntry) >> "side")) do
		{
			case "WEST": {g_houses_WEST pushBack _patchEntry};
			case "EAST": {g_houses_EAST pushBack _patchEntry};
			case "GUER": {g_houses_GUER pushBack _patchEntry};
			case "CIV": {g_houses_CIV pushBack _patchEntry};
		};
	};
};

_missionConfigPatches = missionConfigFile >> "ALYSIA_STORAGE";
for "_i" from 0 to count (_missionConfigPatches) - 1 do 
{
	private["_patchEntry"];
	_patchEntry = _missionConfigPatches select _i;
	if (isClass _patchEntry) then {
		g_houses_storages pushBack str(_patchEntry);
	};
};

g_houses_WEST = compileFinal str(g_houses_WEST);
g_houses_EAST = compileFinal str(g_houses_EAST);
g_houses_GUER = compileFinal str(g_houses_GUER);
g_houses_CIV = compileFinal str(g_houses_CIV);
g_houses_storages = compileFinal str(g_houses_storages);
/* =================[Lasting Objects]=================== */
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
g_sheeps = [];
g_market = [];
"g_market pushBack (configName _x); true" configClasses (missionConfigFile >> "ALYSIA_BOURSE");