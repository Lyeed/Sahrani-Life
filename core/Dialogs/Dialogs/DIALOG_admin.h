class DIALOG_ADMIN_NAME : default_base_dialog
{
	idd = DIALOG_ADMIN_IDD;
	name = #DIALOG_ADMIN_NAME;
	onLoad = "[] spawn public_fnc_adminMenu;";

	class controlsBackground
	{
		class Life_RscTitleBackground : life_RscHeader
		{
			text = "";

			x = 0.1;
			y = 0.2;
			w = 0.8;
		};
		
		class MainBackground : life_RscBackground
		{
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.8;
			h = 0.7 - (22 / 250);
		};
		
		class Title : life_RscHeader
		{
			text = "Menu Administration";
			
			x = 0.1;
			y = 0.2;
			w = 0.8;
		};
		
		class PlayersHeader : life_RscHeader
		{
			text = "Joueurs présents";

			x = 0.11;
			y = 0.26;
			w = 0.3;
		};
		
		class InfoHeader : life_RscHeader
		{
			idc = 2901;
			text = "Informations";

			x = 0.42;
			y = 0.26;
			w = 0.45;
		};

		class CloseBtn : life_RscButtonClose
		{
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.9 - (1 / 25);
		};

		class SpecBtn : life_RscButtonMenu_transparent 
		{
			text = "Spec";
			onButtonClick = "[] call public_fnc_adminSpec;";
			
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.9 - (1 / 25);
		};

		class FindBtn : life_RscButtonMenu_transparent 
		{
			text = "Où ça ?";
			onButtonClick = "[] spawn public_fnc_adminFind;";
			
			x = 0.26 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.9 - (1 / 25);
		};

		class RembrouserBtn : life_RscButtonMenu_transparent 
		{
			idc = 2910;
			text = "Rembours";
			onButtonClick = "[] spawn public_fnc_adminRemboursementInit;";
			
			x = 0.42 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.9 - (1 / 25);
		};

		class InventoryBtn : life_RscButtonMenu_transparent 
		{						
			text = "Inventaire";
			onButtonClick = "[] call public_fnc_adminInventoryInit;";
			
			x = 0.58 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.9 - (1 / 25);
		};

		class TpHereBtn : life_RscButtonMenu_transparent 
		{
			idc = 2911;
			text = "Viens ici";
			onButtonClick = "[] call public_fnc_adminTpHere;";
			
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.905;
		};

		class GotoBtn : life_RscButtonMenu_transparent 
		{
			idc = 2912;
			text = "Aller sur";
			onButtonClick = "[] call public_fnc_adminGoto;";

			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.905;
		};

		class spawnBtn : life_RscButtonMenu_transparent 
		{
			text = "TP Spawn";
			onButtonClick = "[] call public_fnc_adminGotoSpawn;";
			
			x = 0.26 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.905;
		};

		class HealBtn : life_RscButtonMenu_transparent 
		{
			idc = 2913;
			text = "Rétablir";
			onButtonClick = "[] call public_fnc_adminHeal;";
			
			x = 0.42 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.905;
		};

		class MarkersBtn : life_RscButtonMenu_transparent 
		{
			idc = 2914;
			text = "Markers";
			onButtonClick = "[] call public_fnc_adminMarkers;";
			
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.15;
		};

		class TpBtn : life_RscButtonMenu_transparent 
		{
			idc = 2915;
			text = "Téléport";
			onButtonClick = "[] call public_fnc_adminTp;";
			
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.15;
		};

		class GodBtn : life_RscButtonMenu_transparent 
		{
			idc = 2916;
			text = "God";
			onButtonClick = "[] call public_fnc_adminGod;";
			
			x = 0.26 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.15;
		};

		class KeyBtn : life_RscButtonMenu_transparent 
		{
			idc = 2917;
			text = "Clés";
			onButtonClick = "[] call public_fnc_adminKey;";
			
			x = 0.42 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));	
			y = 0.15;
		};

		class OwnerBtn : life_RscButtonMenu_transparent 
		{
			text = "Proprio";
			onButtonClick = "[] call public_fnc_adminOwner;";
			
			x = 0.58 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.15;
		};

		class LockUnlockHVBtn : life_RscButtonMenu_transparent 
		{
			text = "LOCK HV";
			onButtonClick = "[] call public_fnc_adminHvStatus;";
			
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));	
			y = 0.10;
		};
	};

	class controls
	{
		class PlayersList : Life_RscListBox
		{
			idc = 2902;
			sizeEx = 0.04;
			onLBSelChanged = "[_this] spawn public_fnc_adminQuery";
			
			x = 0.11;	y = 0.302;
			w = 0.3;	h = 0.52;
		};
		
		class InfoList : Life_RscStructuredText
		{
			idc = 2903;
			text = "";
			sizeEx = 0.029;
						
			x = 0.42;	y = 0.3;
			w = 0.45;	h = 0.52;
		};
	};
};

class DIALOG_ADMIN_REMBOURSEMENT_NAME : default_base_dialog
{
	idd = DIALOG_ADMIN_REMBOURSEMENT_IDD;
	name = #DIALOG_ADMIN_REMBOURSEMENT_NAME;

	class controlsBackground 
	{
		class Life_RscTitleBackground : life_RscHeader 
		{
			text = "Remboursement";

			x = 0.3;
			y = 0.2;
			w = 0.47;
		};
		
		class MainBackground : life_RscBackground 
		{
			x = 0.3;
			y = 0.2 + (11 / 250);
			w = 0.47;
			h = 0.3 - (22 / 250);
		};
	};
	
	class controls 
	{
		class Title : Life_RscTitle 
		{
			idc = 2951;
			text = "";
			colorBackground[] = 
			{
				0,
				0,
				0,
				0
			};
			
			x = 0.3;	y = 0.2;
			w = 0.6;	h = (1 / 25);
		};
		
		class moneyEdit : RscEdit 
		{
			idc = 2952;
			text = "0";
			sizeEx = 0.030;
			
			x = 0.40;	y = 0.30;
			w = 0.25;	h = 0.03;
		};

		class adminRembourse: life_RscButtonMenu_colored 
		{
			text = "Envoyer";
			onButtonClick = "[] call public_fnc_adminRemboursementProcess;";
			
			x = 0.45;
			y = 0.35;
		};
	};
};