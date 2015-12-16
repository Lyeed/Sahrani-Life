class ALYSIA_REPAIR
{
	class HitFuel
	{
		name = "Réservoir";
		tool = "Alysia_repair_toolbox";
		use = "Alysia_repair_fuel";
		picture = "lyeed_IMG\data\vehicle\repair\parts\fuel_100.paa";
	};

	class HitEngine
	{
		name = "Moteur";
		tool = "Alysia_repair_toolbox";
		use = "Alysia_repair_engine";
		picture = "lyeed_IMG\data\vehicle\repair\parts\engine_100.paa";
	};
	class HitEngine1: HitEngine {};
	class HitEngine2: HitEngine {};
	class HitEngine3: HitEngine {};

	class HitBody
	{
		name = "Carcasse";
		tool = "Alysia_repair_toolbox";
		use = "Alysia_repair_body";
		picture = "lyeed_IMG\data\vehicle\repair\parts\body_100.paa";
	};

	class HitLTrack
	{
		name = "Chenille gauche";
		tool = "Alysia_repair_toolbox";
		use = "Alysia_repair_track";
		picture = "lyeed_IMG\data\vehicle\repair\parts\track_100.paa";
	};
	class HitRTrack: HitLTrack {
		name = "Chenille droite";
	};

	class HitLFWheel
	{
		name = "Roue avant gauche";
		tool = "Alysia_repair_tireLever";
		use = "Alysia_repair_tire";
		picture = "lyeed_IMG\data\vehicle\repair\parts\wheel_100.paa";
	};	
	class HitLBWheel: HitLFWheel {
		name = "Roue arrière gauche";
	};
	class HitLMWheel: HitLFWheel {
		name = "Roue milieu gauche";
	};
	class HitLF2Wheel: HitLFWheel {
		name = "Roue avant gauche 2";
	};
	class HitRFWheel: HitLFWheel {
		name = "Roue avant droite";
	};
	class HitRBWheel: HitLFWheel {
		name = "Roue arrière droite";
	};
	class HitRMWheel: HitLFWheel {
		name = "Roue milieu droite";
	};
	class HitRF2Wheel: HitLFWheel {
		name = "Roue avant droite 2";
	};
	class HitFWheel: HitLFWheel {
		name = "Roue avant";
	};
	class HitBWheel: HitLFWheel {
		name = "Roue arrière";
	};

	class HitGlass1
	{
		name = "Vitre";
		tool = "Alysia_repair_toolbox";
		use = "Alysia_repair_glass";
		picture = "lyeed_IMG\data\vehicle\repair\parts\glass_100.paa";
	};
	class HitGlass2: HitGlass1 {};
	class HitGlass3: HitGlass1 {};
	class HitGlass4: HitGlass1 {};
	class HitGlass5: HitGlass1 {};
	class HitGlass6: HitGlass1 {};
	class HitRGlass: HitGlass1 {};
	class HitLGlass: HitGlass1 {};

	class HitTurret
	{
		name = "Tourelle";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\unknown.paa";
	};

	class HitGun
	{
		name = "Armement";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\gun_100.paa";
	};

	class HitHull
	{
		name = "Coque";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\unknown.paa";
	};

	class HitAvionics
	{
		name = "Avionique";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\unknown.paa";
	};

	class HitHRotor
	{
		name = "Rotor principal";
		tool = "Alysia_repair_toolbox";
		use = "Alysia_repair_rotor";
		picture = "lyeed_IMG\data\vehicle\repair\parts\rotor_100.paa";
	};
	class HitVRotor: HitHRotor {
		name = "Rotor secondaire";
	};

	class HitMissiles
	{
		name = "Missiles";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\unknown.paa";
	};

	class HitWinch
	{
		name = "Treuil";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\winch_100.paa";
	};

	class HitTransmission
	{
		name = "Transmission";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\transmission_100.paa";
	};

	class HitLight
	{
		name = "Phare";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\light_100.paa";
	};

	class HitHydraulics
	{
		name = "Suspenssion";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\hydraulics_100.paa";
	};

	class HitGear
	{
		name = "Trains d'attérrissage";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\unknown.paa";
	};

	class HitHStabilizerL1
	{
		name = "Stabilisateur gauche";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\stabilizer_100.paa";
	};
	class HitHStabilizerR1: HitHStabilizerL1 {
		name = "Stabilisateur droit";
	};
	class HitVStabilizer1: HitHStabilizerL1 {
		name = "Stabilisateur";
	};

	class HitTail
	{
		name = "Queue";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\unknown.paa";
	};

	class HitPitotTube
	{
		name = "Tube de Pitot";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\unknown.paa";
	};

	class HitStaticPort
	{
		name = "Instruments";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\unknown.paa";
	};

	class HitStarter1
	{
		name = "Boite de démarrage";
		tool = "Alysia_repair_toolbox";
		use = "";
		picture = "lyeed_IMG\data\vehicle\repair\parts\starter_100.paa";
	};
	class HitStarter2: HitStarter1 {};
	class HitStarter3: HitStarter1 {};
};
