with missionNamespace do
{
	/******************************
	****** Backend Variables *****
	******************************/
	g_sheeps = [];
	g_launder = 0;
	g_curWep_h = "";
	g_objPut = ObjNull;
	g_killer = ObjNull;
	g_dog = objNull;
	g_dragingBody = ObjNull;
	/* ===================[inUse/delay variables]======================= */
	g_action_delay = time;
	g_action_inUse = false;
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
	/* =================[Dynamic Markers]=================== */
	g_dynamic_markers_discovered = [];
	g_dynamic_markers = [];
	
	{
		g_dynamic_markers pushBack (configName _x);
	} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_DYN_MARKERS"));
	/* =================[Items]=================== */
	g_inv_items = [];

	{
		_item = configName _x;
		g_inv_items pushBack _item;
		missionNamespace setVariable[format["inv_%1", _item], 0];
	} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_ITEMS"));
};
