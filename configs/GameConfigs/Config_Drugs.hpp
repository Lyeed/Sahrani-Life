class ALYSIA_DRUG 
{
	class heroinpS
	{
		duration = 7;
		sound = "heroin";
		effect_init =
		"\
			g_drugs_heroinpS_chromAberration = ppEffectCreate[""chromAberration"", 5003];\
			g_drugs_heroinpS_radialBlur = ppEffectCreate[""radialBlur"", 5003];\
		";
		effect_loop =
		"\
			g_hunger = 100;\
			g_thirst = 100;\
			g_drugs_heroinpS_chromAberration ppEffectAdjust [random 10, random 4, true];\
			g_drugs_heroinpS_chromAberration ppEffectCommit 0;\
			g_drugs_heroinpS_radialBlur ppEffectAdjust [random 0.04, random 1.2, random 1.3, random 0.4];\
			g_drugs_heroinpS_radialBlur ppEffectCommit 0;\
		";
		effect_end =
		"\
			ppEffectDestroy [g_drugs_heroinpS_chromAberration, g_drugs_heroinpS_radialBlur];\
		";
	};

	class methp
	{
		duration = 12;
		sound = "";
		effect_init =
		"\
			[6] call AlysiaClient_fnc_camShake;\
			g_drugs_methp_chromAberration = ppEffectCreate[""chromAberration"", 5004];\
			g_drugs_methp_colorCorrections = ppEffectCreate[""colorCorrections"", 5004];\
		";		
		effect_loop =
		"\
			g_bleed = 0;\
			g_drugs_methp_chromAberration ppEffectAdjust [_value, _value, true];\
			g_drugs_methp_chromAberration ppEffectCommit 0;\
			g_drugs_methp_colorCorrections ppEffectAdjust [1, 1, 0, [0.0, (_value / 100), 0.0, 0.0], [random 0.8, random 1.5, (_value / 100), random 0.7],  [0.199, 0.587, random 15, 0.0]];\
			g_drugs_methp_colorCorrections ppEffectCommit 0;\
		";
		effect_end =
		"\
			ppEffectDestroy [g_drugs_methp_chromAberration, g_drugs_methp_colorCorrections];\
			[-6] call AlysiaClient_fnc_camShake;\
		";
	};

	class cocainep
	{
		duration = 10;
		sound = "snif";
		effect_init =
		"\
			g_drugs_cocainep_chromAberration = ppEffectCreate[""chromAberration"", 5002];\
			g_drugs_cocainep_colorCorrections = ppEffectCreate[""colorCorrections"", 5002];\
			g_drugs_cocainep_radialBlur = ppEffectCreate[""radialBlur"", 5002];\
		";
		effect_loop = "\
			player setFatigue 0;\
			g_drugs_cocainep_colorCorrections ppEffectAdjust [1, 1.9, -0.002, [0.0, 0.0, 0.0, 0.0], [random 1.0, random 1.0, random 1.4, random 1.6],  [0.199, 10, 0.114, 0.0]];\
			g_drugs_cocainep_colorCorrections ppEffectCommit 0;\
			g_drugs_cocainep_radialBlur ppEffectAdjust  [random 1.2, random 0.3, random 0.02, random 0.03];\
			g_drugs_cocainep_radialBlur ppEffectCommit 0;\
			g_drugs_cocainep_chromAberration ppEffectAdjust [0.1, 0.01, true];\
			g_drugs_cocainep_chromAberration ppEffectCommit 0;\
		";
		effect_end = "\
			ppEffectDestroy [g_drugs_cocainep_chromAberration, g_drugs_cocainep_colorCorrections, g_drugs_cocainep_radialBlur];\
		";
	};

	class cocainepc
	{
		sound = "snif";
		duration = 7;
		effect_init = "\
			g_drugs_cocainepc_chromAberration = ppEffectCreate[""chromAberration"", 5001];\
			g_drugs_cocainepc_colorCorrections = ppEffectCreate[""colorCorrections"", 5001];\
			g_drugs_cocainepc_radialBlur = ppEffectCreate[""radialBlur"", 5001];\
		";
		effect_loop = "\
			player setFatigue 0;\
			g_drugs_cocainepc_colorCorrections ppEffectAdjust [1, 0.9, -0.002, [0.0, 0.0, 0.0, 0.0], [random 1.0, random 1.0, random 0.4, random 0.6],  [0.199, 10, 0.114, 0.0]];\
			g_drugs_cocainepc_colorCorrections ppEffectCommit 0;\
			g_drugs_cocainepc_radialBlur ppEffectAdjust  [random 0.02, random 0.03, random 0.02, random 0.03];\
			g_drugs_cocainepc_radialBlur ppEffectCommit 0;\
			g_drugs_cocainepc_chromAberration ppEffectAdjust [0.1, 0.01, true];\
			g_drugs_cocainepc_chromAberration ppEffectCommit 0;\
		";
		effect_end = "\
			ppEffectDestroy [g_drugs_cocainepc_chromAberration, g_drugs_cocainepc_colorCorrections, g_drugs_cocainepc_radialBlur];\
		";
	};

	class marijuana
	{
		sound = "briquet";
		duration = 2;
		effect_init = "\
			[] spawn\
			{\
				[player, ""briquet"", 10] call CBA_fnc_globalSay3d;\
				sleep 2;\
				[[player, ""bob"", 10] call CBA_fnc_globalSay3d;\
				_smoke = ""SmokeShell"" createVehicle (position player);\
				if ((vehicle player) != player) then {\
					_smoke attachTo [(vehicle player), [-0.6, -1, 0]];\
				} else {\
					_smoke attachTo [player, [0, -0.1, 1.5]];\
				};\
				sleep 4;\
				if (missionNamespace getVariable ""STATS_marijuana"" < 7) then {\
					[[player, ""coughing"", 10] call CBA_fnc_globalSay3d;\
				};\
				sleep 30;\
				deleteVehicle _smoke;\
			};\
			g_drugs_marijuana_colorCorrections = ppEffectCreate[""colorCorrections"", 5000];\
			[3] call AlysiaClient_fnc_camShake;\
		";
		effect_loop = "\
			g_drugs_marijuana_colorCorrections ppEffectAdjust [1, 0.9, -0.002, [0.0, 0.0, 0.0, 0.0], [1.0, 0.6, 0.4, 0.6],  [random 4.5, random 0.7, random 0.7, 0.0]];\
		 	g_drugs_marijuana_colorCorrections ppEffectCommit 0;\
			player setFatigue ((getFatigue player) + 0.02);\
		";
		effect_end = "\
			ppEffectDestroy g_drugs_marijuana_colorCorrections;\
			[-3] call AlysiaClient_fnc_camShake;\
		";
	};
};
