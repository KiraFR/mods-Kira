class DOSTARA_ENTRERPISEACCUEIL {
	idd = 7500;
	name= "Life_EntrerpriseMenuAccueuil";
	movingEnable = false;
	enableSimulation = true;
	//onLoad = "[] spawn life_fnc_EntrerpriseAccueil;";

class controlsBackground {

			class Life_RscText_1000: Life_RscText
			{
				idc = -1;
				x = 0.293773 * safezoneW + safezoneX;
				y = 0.290981 * safezoneH + safezoneY;
				w = 0.448544 * safezoneW;
				h = 0.462042 * safezoneH;
				colorBackground[] = {-1,-1,-1,0.7};
			};
			class Life_RscText_1001: Life_RscText
			{
				idc = -1;
				x = 0.304084 * safezoneW + safezoneX;
				y = 0.312983 * safezoneH + safezoneY;
				w = 0.0928021 * safezoneW;
				h = 0.088008 * safezoneH;
				colorBackground[] = {-1,-1,-1,0.8};
			};
			class Life_RscText_1002: Life_RscText
			{
				idc = -1;
				x = 0.396887 * safezoneW + safezoneX;
				y = 0.312983 * safezoneH + safezoneY;
				w = 0.329963 * safezoneW;
				h = 0.418038 * safezoneH;
				colorBackground[] = {-1,-1,-1,0.8};
			};
			class Life_RscText_1003: Life_RscText
			{
				idc = -1;
				text = "Accueil"; 
				x = 0.326956 * safezoneW + safezoneX;
				y = 0.370215 * safezoneH + safezoneY;
				w = 0.030934 * safezoneW;
				h = 0.022002 * safezoneH;
			};
			class Life_RscButtonMenu_2400: Life_RscButtonMenu
			{
				idc = -1;
				TextureNoShortcut = "\kira_assets\texture\EntrerpiseAccueil.paa";
				x = 0.324707 * safezoneW + safezoneX;
				y = 0.312983 * safezoneH + safezoneY;
				w = 0.0412454 * safezoneW;
				h = 0.055005 * safezoneH;
			};
			class Life_RscText_1004: Life_RscText
			{
				idc = -1;
				x = 0.304084 * safezoneW + safezoneX;
				y = 0.422993 * safezoneH + safezoneY;
				w = 0.0773351 * safezoneW;
				h = 0.088008 * safezoneH;
				colorBackground[] = {-1,-1,-1,0.7};
			};
			class Life_RscText_1005: Life_RscText
			{
				idc = -1;
				x = 0.304084 * safezoneW + safezoneX;
				y = 0.533003 * safezoneH + safezoneY;
				w = 0.0773351 * safezoneW;
				h = 0.088008 * safezoneH;
				colorBackground[] = {-1,-1,-1,0.7};
			};
			class Life_RscText_1006: Life_RscText
			{
				idc = -1;
				x = 0.304084 * safezoneW + safezoneX;
				y = 0.643013 * safezoneH + safezoneY;
				w = 0.0773351 * safezoneW;
				h = 0.088008 * safezoneH;
				colorBackground[] = {-1,-1,-1,0.7};
			};
			class Life_RscText_1007: Life_RscText
			{
				idc = -1;
				text = "Gestion salarié"; 
				x = 0.314396 * safezoneW + safezoneX;
				y = 0.477998 * safezoneH + safezoneY;
				w = 0.0618681 * safezoneW;
				h = 0.022002 * safezoneH;
			};
			class Life_RscButtonMenu_2401: Life_RscButtonMenu
			{
				idc = -1;
				TextureNoShortcut = "\kira_assets\texture\EntrepriseSalariéGest.paa";
				onButtonClick = "createDialog ""DOSTARA_ENTREPRISEGESTIONSALAR"";";
				x = 0.324707 * safezoneW + safezoneX;
				y = 0.422993 * safezoneH + safezoneY;
				w = 0.0412454 * safezoneW;
				h = 0.055005 * safezoneH;
			};
			class Life_RscButtonMenu_2402: Life_RscButtonMenu
			{
				idc = -1;
				TextureNoShortcut = "\kira_assets\texture\EntrepriseParametre.paa";
				onButtonClick = "createDialog ""DOSTARA_GESTENTREPRISE"";";
				x = 0.324707 * safezoneW + safezoneX;
				y = 0.533003 * safezoneH + safezoneY;
				w = 0.0412454 * safezoneW;
				h = 0.055005 * safezoneH;
			};
			class Life_RscButtonMenu_2403: Life_RscButtonMenu
			{
				idc = -1;
				TextureNoShortcut = "\kira_assets\texture\EntrepriseExit.paa";
				onButtonClick = "closeDialog 0;";
				x = 0.324707 * safezoneW + safezoneX;
				y = 0.643013 * safezoneH + safezoneY;
				w = 0.0412454 * safezoneW;
				h = 0.055005 * safezoneH;
			};
			class Life_RscText_1008: Life_RscText
			{
				idc = -1;
				text = "Gestion entreprise"; 
				x = 0.30924 * safezoneW + safezoneX;
				y = 0.599009 * safezoneH + safezoneY;
				w = 0.0721794 * safezoneW;
				h = 0.022002 * safezoneH;
			};
			class Life_RscText_1009: Life_RscText
			{
				idc = -1;
				text = "Quitter"; 
				x = 0.329863 * safezoneW + safezoneX;
				y = 0.698018 * safezoneH + safezoneY;
				w = 0.030934 * safezoneW;
				h = 0.022002 * safezoneH;
			};
};
class controls {
			class NameEntreprise: Life_RscStructuredText
			{
				idc = 7501;
				x = 0.427821 * safezoneW + safezoneX;
				y = 0.323984 * safezoneH + safezoneY;
				w = 0.278406 * safezoneW;
				h = 0.044004 * safezoneH;
			};
			class Capital: Life_RscStructuredText
			{
				idc = 7502;
				x = 0.427821 * safezoneW + safezoneX;
				y = 0.411992 * safezoneH + safezoneY;
				w = 0.170137 * safezoneW;
				h = 0.022002 * safezoneH;
			};
			class SpeEntreprise: Life_RscStructuredText
			{
				idc = 7503;
				x = 0.427821 * safezoneW + safezoneX;
				y = 0.477998 * safezoneH + safezoneY;
				w = 0.170137 * safezoneW;
				h = 0.022002 * safezoneH;
			};
			class NumeroSiren: Life_RscStructuredText
			{
				idc = 7504;
				x = 0.427821 * safezoneW + safezoneX;
				y = 0.544004 * safezoneH + safezoneY;
				w = 0.201071 * safezoneW;
				h = 0.022002 * safezoneH;
			};
		};
	};

//Deuxieme partie

class DOSTARA_ENTREPRISEGESTIONSALAR {
	idd = 7500;
	name= "Life_EntrepriseMenuSalar";
	movingEnable = false;
	enableSimulation = true;
	//onLoad = "[] spawn life_fnc_EntrerpriseSalarié;";

class controlsBackground {

				class Life_RscText_1000: Life_RscText
				{
					idc = -1;
					x = 0.293773 * safezoneW + safezoneX;
					y = 0.290981 * safezoneH + safezoneY;
					w = 0.448544 * safezoneW;
					h = 0.462042 * safezoneH;
					colorBackground[] = {-1,-1,-1,0.7};
				};
				class Life_RscText_1001: Life_RscText
				{
					idc = -1;
					x = 0.304084 * safezoneW + safezoneX;
					y = 0.312983 * safezoneH + safezoneY;
					w = 0.0773351 * safezoneW;
					h = 0.088008 * safezoneH;
					colorBackground[] = {-1,-1,-1,0.8};
				};
				class Life_RscText_1002: Life_RscText
				{
					idc = -1;
					x = 0.396887 * safezoneW + safezoneX;
					y = 0.312983 * safezoneH + safezoneY;
					w = 0.329963 * safezoneW;
					h = 0.418038 * safezoneH;
					colorBackground[] = {-1,-1,-1,0.8};
				};
				class Life_RscText_1003: Life_RscText
				{
					idc = -1;
					text = "Accueil"; 
					x = 0.326956 * safezoneW + safezoneX;
					y = 0.370215 * safezoneH + safezoneY;
					w = 0.030934 * safezoneW;
					h = 0.022002 * safezoneH;
				};
				class Life_RscButtonMenu_2400: Life_RscButtonMenu
				{
					idc = -1;
					onButtonClick = "createDialog ""DOSTARA_ENTRERPISEACCUEIL"";";
					TextureNoShortcut = "\kira_assets\texture\EntrerpiseAccueil.paa";
					x = 0.324707 * safezoneW + safezoneX;
					y = 0.312983 * safezoneH + safezoneY;
					w = 0.0412454 * safezoneW;
					h = 0.055005 * safezoneH;
				};
				class Life_RscText_1004: Life_RscText
				{
					idc = -1;
					x = 0.304084 * safezoneW + safezoneX;
					y = 0.422993 * safezoneH + safezoneY;
					w = 0.0928021 * safezoneW;
					h = 0.088008 * safezoneH;
					colorBackground[] = {-1,-1,-1,0.7};
				};
				class Life_RscText_1005: Life_RscText
				{
					idc = -1;
					x = 0.304084 * safezoneW + safezoneX;
					y = 0.533003 * safezoneH + safezoneY;
					w = 0.0773351 * safezoneW;
					h = 0.088008 * safezoneH;
					colorBackground[] = {-1,-1,-1,0.7};
				};
				class Life_RscText_1006: Life_RscText
				{
					idc = -1;
					x = 0.304084 * safezoneW + safezoneX;
					y = 0.643013 * safezoneH + safezoneY;
					w = 0.0773351 * safezoneW;
					h = 0.088008 * safezoneH;
					colorBackground[] = {-1,-1,-1,0.7};
				};
				class Life_RscText_1007: Life_RscText
				{
					idc = -1;
					text = "Gestion salariÃ©"; 
					x = 0.314396 * safezoneW + safezoneX;
					y = 0.477998 * safezoneH + safezoneY;
					w = 0.0618681 * safezoneW;
					h = 0.022002 * safezoneH;
				};
				class Life_RscButtonMenu_2401: Life_RscButtonMenu
				{
					idc = -1;
					TextureNoShortcut = "\kira_assets\texture\EntrepriseSalariéGest.paa";
					x = 0.324707 * safezoneW + safezoneX;
					y = 0.422993 * safezoneH + safezoneY;
					w = 0.0412454 * safezoneW;
					h = 0.055005 * safezoneH;
				};
				class Life_RscButtonMenu_2402: Life_RscButtonMenu
				{
					idc = -1;
					TextureNoShortcut = "\kira_assets\texture\EntrepriseParametre.paa";
					onButtonClick = "createDialog ""DOSTARA_GESTENTREPRISE"";";
					x = 0.324707 * safezoneW + safezoneX;
					y = 0.533003 * safezoneH + safezoneY;
					w = 0.0412454 * safezoneW;
					h = 0.055005 * safezoneH;
				};
				class Life_RscButtonMenu_2403: Life_RscButtonMenu
				{
					idc = -1;
					TextureNoShortcut = "\kira_assets\texture\EntrepriseExit.paa";
					onButtonClick = "closeDialog 0;";
					x = 0.324707 * safezoneW + safezoneX;
					y = 0.643013 * safezoneH + safezoneY;
					w = 0.0412454 * safezoneW;
					h = 0.055005 * safezoneH;
				};
				class Life_RscText_1008: Life_RscText
				{
					idc = -1;
					text = "Gestion entreprise"; 
					x = 0.30924 * safezoneW + safezoneX;
					y = 0.599009 * safezoneH + safezoneY;
					w = 0.0721794 * safezoneW;
					h = 0.022002 * safezoneH;
				};
				class Life_RscText_1009: Life_RscText
				{
					idc = -1;
					text = "Quitter"; 
					x = 0.329863 * safezoneW + safezoneX;
					y = 0.698018 * safezoneH + safezoneY;
					w = 0.030934 * safezoneW;
					h = 0.022002 * safezoneH;
				};
			};
class controls {
				class NameDonner: Life_RscStructuredText
				{
					idc = 7501;
					x = 0.427821 * safezoneW + safezoneX;
					y = 0.334985 * safezoneH + safezoneY;
					w = 0.278406 * safezoneW;
					h = 0.033003 * safezoneH;
				};
				class List_Emplyer: Life_RscListbox
				{
					idc = 7502;
					x = 0.427821 * safezoneW + safezoneX;
					y = 0.38999 * safezoneH + safezoneY;
					w = 0.15467 * safezoneW;
					h = 0.319029 * safezoneH;
				};
				class AjoutSal: Life_RscButtonMenu
				{
					idc = 7503;
					onButtonClick = "createDialog ""DOSTARA_ENTRERPISEADDSALARIE"";"
					x = 0.587646 * safezoneW + safezoneX;
					y = 0.38999 * safezoneH + safezoneY;
					w = 0.0206227 * safezoneW;
					h = 0.033003 * safezoneH;
				};
				class SupprSal: Life_RscButtonMenu
				{
					idc = 7503;
					x = 0.587646 * safezoneW + safezoneX;
					y = 0.433994 * safezoneH + safezoneY;
					w = 0.0206227 * safezoneW;
					h = 0.033003 * safezoneH;
				};
			};
		};

//DeuxiemePariteAddSalarié

class DOSTARA_ENTRERPISEADDSALARIE {
	idd = 7500;
	name= "Life_EntrepriseMenuAddSalar";
	movingEnable = false;
	enableSimulation = true;
	//onLoad = "[] spawn life_fnc_EntrerpriseAddSalarié;";

class controlsBackground {

		class Life_RscText_1000: Life_RscText
		{
			idc = -1;
			x = 0.293773 * safezoneW + safezoneX;
			y = 0.290981 * safezoneH + safezoneY;
			w = 0.448544 * safezoneW;
			h = 0.462042 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class Life_RscText_1001: Life_RscText
		{
			idc = -1;
			x = 0.304084 * safezoneW + safezoneX;
			y = 0.312983 * safezoneH + safezoneY;
			w = 0.0773351 * safezoneW;
			h = 0.088008 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.8};
		};
		class Life_RscText_1002: Life_RscText
		{
			idc = -1;
			x = 0.396887 * safezoneW + safezoneX;
			y = 0.312983 * safezoneH + safezoneY;
			w = 0.329963 * safezoneW;
			h = 0.418038 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.8};
		};
		class Life_RscText_1003: Life_RscText
		{
			idc = -1;
			text = "Accueil"; 
			x = 0.326956 * safezoneW + safezoneX;
			y = 0.370215 * safezoneH + safezoneY;
			w = 0.030934 * safezoneW;
			h = 0.022002 * safezoneH;
		};
		class Life_RscButtonMenu_2400: Life_RscButtonMenu
		{
			idc = -1;
			onButtonClick = "createDialog ""DOSTARA_ENTRERPISEACCUEIL"";";
			TextureNoShortcut = "\kira_assets\texture\EntrerpiseAccueil.paa";
			x = 0.324707 * safezoneW + safezoneX;
			y = 0.312983 * safezoneH + safezoneY;
			w = 0.0412454 * safezoneW;
			h = 0.055005 * safezoneH;
		};
		class Life_RscText_1004: Life_RscText
		{
			idc = -1;
			x = 0.304084 * safezoneW + safezoneX;
			y = 0.422993 * safezoneH + safezoneY;
			w = 0.0928021 * safezoneW;
			h = 0.088008 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class Life_RscText_1005: Life_RscText
		{
			idc = -1;
			x = 0.304084 * safezoneW + safezoneX;
			y = 0.533003 * safezoneH + safezoneY;
			w = 0.0773351 * safezoneW;
			h = 0.088008 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class Life_RscText_1006: Life_RscText
		{
			idc = -1;
			x = 0.304084 * safezoneW + safezoneX;
			y = 0.643013 * safezoneH + safezoneY;
			w = 0.0773351 * safezoneW;
			h = 0.088008 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class Life_RscText_1007: Life_RscText
		{
			idc = -1;
			text = "Gestion salariÃ©"; 
			x = 0.314396 * safezoneW + safezoneX;
			y = 0.477998 * safezoneH + safezoneY;
			w = 0.0618681 * safezoneW;
			h = 0.022002 * safezoneH;
		};
		class Life_RscButtonMenu_2401: Life_RscButtonMenu
		{
			idc = -1;
			TextureNoShortcut = "\kira_assets\texture\EntrepriseSalariéGest.paa";
			onButtonClick = "createDialog ""DOSTARA_ENTREPRISEGESTIONSALAR"";";
			x = 0.324707 * safezoneW + safezoneX;
			y = 0.422993 * safezoneH + safezoneY;
			w = 0.0412454 * safezoneW;
			h = 0.055005 * safezoneH;
		};
		class Life_RscButtonMenu_2402: Life_RscButtonMenu
		{
			idc = -1;
			TextureNoShortcut = "\kira_assets\texture\EntrepriseSalariéGest.paa";
			onButtonClick = "createDialog ""DOSTARA_GESTENTREPRISE"";";
			x = 0.324707 * safezoneW + safezoneX;
			y = 0.533003 * safezoneH + safezoneY;
			w = 0.0412454 * safezoneW;
			h = 0.055005 * safezoneH;
		};
		class Life_RscButtonMenu_2403: Life_RscButtonMenu
		{
			idc = -1;
			TextureNoShortcut = "\kira_assets\texture\EntrepriseExit.paa";
			onButtonClick = "closeDialog 0;";
			x = 0.324707 * safezoneW + safezoneX;
			y = 0.643013 * safezoneH + safezoneY;
			w = 0.0412454 * safezoneW;
			h = 0.055005 * safezoneH;
		};
		class Life_RscText_1008: Life_RscText
		{
			idc = -1;
			text = "Gestion entreprise"; 
			x = 0.30924 * safezoneW + safezoneX;
			y = 0.599009 * safezoneH + safezoneY;
			w = 0.0721794 * safezoneW;
			h = 0.022002 * safezoneH;
		};
		class Life_RscText_1009: Life_RscText
		{
			idc = -1;
			text = "Quitter"; 
			x = 0.329863 * safezoneW + safezoneX;
			y = 0.698018 * safezoneH + safezoneY;
			w = 0.030934 * safezoneW;
			h = 0.022002 * safezoneH;
		};
	};
class controls {
		class Life_RscStructuredText_1100: Life_RscStructuredText
		{
			idc = 7501;
			x = 0.427821 * safezoneW + safezoneX;
			y = 0.334985 * safezoneH + safezoneY;
			w = 0.278406 * safezoneW;
			h = 0.033003 * safezoneH;
		};
		class Life_RscCombo_2100: Life_RscCombo
		{
			idc = 7502;
			x = 0.427821 * safezoneW + safezoneX;
			y = 0.400991 * safezoneH + safezoneY;
			w = 0.175293 * safezoneW;
			h = 0.022002 * safezoneH;
		};
		class Life_RscCheckbox_2800: Life_RscCheckbox
		{
			idc = 7503;
			x = 0.427821 * safezoneW + safezoneX;
			y = 0.455996 * safezoneH + safezoneY;
			w = 0.0206227 * safezoneW;
			h = 0.033003 * safezoneH;
		};
		class Life_RscCheckbox_2801: Life_RscCheckbox
		{
			idc = 7504;
			x = 0.427821 * safezoneW + safezoneX;
			y = 0.511001 * safezoneH + safezoneY;
			w = 0.0206227 * safezoneW;
			h = 0.033003 * safezoneH;
		};
		class Life_RscCheckbox_2802: Life_RscCheckbox
		{
			idc = 7505;
			x = 0.427821 * safezoneW + safezoneX;
			y = 0.566006 * safezoneH + safezoneY;
			w = 0.0206227 * safezoneW;
			h = 0.033003 * safezoneH;
		};
		class Life_RscCheckbox_2803: Life_RscCheckbox
		{
			idc = 7506;
			x = 0.427821 * safezoneW + safezoneX;
			y = 0.621011 * safezoneH + safezoneY;
			w = 0.0206227 * safezoneW;
			h = 0.033003 * safezoneH;
		};
		class Life_RscText_1010: Life_RscText
		{
			idc = 7507;
			text = "Option 1"; 
			x = 0.455692 * safezoneW + safezoneX;
			y = 0.461429 * safezoneH + safezoneY;
			w = 0.103113 * safezoneW;
			h = 0.022002 * safezoneH;
		};
		class Life_RscText_1011: Life_RscText
		{
			idc = 7508;
			text = "Option 2"; 
			x = 0.456118 * safezoneW + safezoneX;
			y = 0.514206 * safezoneH + safezoneY;
			w = 0.103113 * safezoneW;
			h = 0.022002 * safezoneH;
		};
		class Life_RscText_1012: Life_RscText
		{
			idc = 7509;
			text = "Option 3"; 
			x = 0.454297 * safezoneW + safezoneX;
			y = 0.570325 * safezoneH + safezoneY;
			w = 0.103113 * safezoneW;
			h = 0.022002 * safezoneH;
		};
		class Life_RscText_1013: Life_RscText
		{
			idc = 7510;
			text = "Option 4"; 
			x = 0.454995 * safezoneW + safezoneX;
			y = 0.626444 * safezoneH + safezoneY;
			w = 0.103113 * safezoneW;
			h = 0.022002 * safezoneH;
		};
		class Valid: Life_RscButtonMenu
		{
			idc = 7511;
			x = 0.664982 * safezoneW + safezoneX;
			y = 0.643013 * safezoneH + safezoneY;
			w = 0.0412454 * safezoneW;
			h = 0.055005 * safezoneH;
		};
	};
};

// troisieme partie

class DOSTARA_GESTENTREPRISE {
	idd = 7500;
	name= "Life_EntrepriseMenuGestEntreprise";
	movingEnable = false;
	enableSimulation = true;
	//onLoad = "[] spawn life_fnc_EntrepriseGestion;";

class controlsBackground {

			class Life_RscText_1000: Life_RscText
			{
				idc = -1;
				x = 0.293773 * safezoneW + safezoneX;
				y = 0.290981 * safezoneH + safezoneY;
				w = 0.448544 * safezoneW;
				h = 0.462042 * safezoneH;
				colorBackground[] = {-1,-1,-1,0.7};
			};
			class Life_RscText_1001: Life_RscText
			{
				idc = -1;
				x = 0.304084 * safezoneW + safezoneX;
				y = 0.312983 * safezoneH + safezoneY;
				w = 0.0773351 * safezoneW;
				h = 0.088008 * safezoneH;
				colorBackground[] = {-1,-1,-1,0.8};
			};
			class Life_RscText_1002: Life_RscText
			{
				idc = -1;
				x = 0.396887 * safezoneW + safezoneX;
				y = 0.312983 * safezoneH + safezoneY;
				w = 0.329963 * safezoneW;
				h = 0.418038 * safezoneH;
				colorBackground[] = {-1,-1,-1,0.8};
			};
			class Life_RscText_1003: Life_RscText
			{
				idc = -1;
				text = "Accueil"; 
				x = 0.326956 * safezoneW + safezoneX;
				y = 0.370215 * safezoneH + safezoneY;
				w = 0.030934 * safezoneW;
				h = 0.022002 * safezoneH;
			};
			class Life_RscButtonMenu_2400: Life_RscButtonMenu
			{
				idc = -1;
				x = 0.324707 * safezoneW + safezoneX;
				y = 0.312983 * safezoneH + safezoneY;
				w = 0.0412454 * safezoneW;
				h = 0.055005 * safezoneH;
			};
			class Life_RscText_1004: Life_RscText
			{
				idc = -1;
				x = 0.304084 * safezoneW + safezoneX;
				y = 0.422993 * safezoneH + safezoneY;
				w = 0.0773351 * safezoneW;
				h = 0.088008 * safezoneH;
				colorBackground[] = {-1,-1,-1,0.7};
			};
			class Life_RscText_1005: Life_RscText
			{
				idc = -1;
				x = 0.304084 * safezoneW + safezoneX;
				y = 0.533003 * safezoneH + safezoneY;
				w = 0.0928021 * safezoneW;
				h = 0.088008 * safezoneH;
				colorBackground[] = {-1,-1,-1,0.7};
			};
			class Life_RscText_1006: Life_RscText
			{
				idc = -1;
				x = 0.304084 * safezoneW + safezoneX;
				y = 0.643013 * safezoneH + safezoneY;
				w = 0.0773351 * safezoneW;
				h = 0.088008 * safezoneH;
				colorBackground[] = {-1,-1,-1,0.7};
			};
			class Life_RscText_1007: Life_RscText
			{
				idc = -1;
				text = "Gestion salariÃ©"; 
				x = 0.314396 * safezoneW + safezoneX;
				y = 0.477998 * safezoneH + safezoneY;
				w = 0.0618681 * safezoneW;
				h = 0.022002 * safezoneH;
			};
			class Life_RscButtonMenu_2401: Life_RscButtonMenu
			{
				idc = -1;
				x = 0.324707 * safezoneW + safezoneX;
				y = 0.422993 * safezoneH + safezoneY;
				w = 0.0412454 * safezoneW;
				h = 0.055005 * safezoneH;
			};
			class Life_RscButtonMenu_2402: Life_RscButtonMenu
			{
				idc = -1;
				x = 0.324707 * safezoneW + safezoneX;
				y = 0.533003 * safezoneH + safezoneY;
				w = 0.0412454 * safezoneW;
				h = 0.055005 * safezoneH;
			};
			class Life_RscButtonMenu_2403: Life_RscButtonMenu
			{
				idc = -1;
				x = 0.324707 * safezoneW + safezoneX;
				y = 0.643013 * safezoneH + safezoneY;
				w = 0.0412454 * safezoneW;
				h = 0.055005 * safezoneH;
			};
			class Life_RscText_1008: Life_RscText
			{
				idc = -1;
				text = "Gestion entreprise"; 
				x = 0.30924 * safezoneW + safezoneX;
				y = 0.599009 * safezoneH + safezoneY;
				w = 0.0721794 * safezoneW;
				h = 0.022002 * safezoneH;
			};
			class Life_RscText_1009: Life_RscText
			{
				idc = -1;
				text = "Quitter"; 
				x = 0.329863 * safezoneW + safezoneX;
				y = 0.698018 * safezoneH + safezoneY;
				w = 0.030934 * safezoneW;
				h = 0.022002 * safezoneH;
			};
		};
class controls {
			class Life_RscStructuredText_1100: Life_RscStructuredText
			{
				idc = 7501;
				x = 0.422665 * safezoneW + safezoneX;
				y = 0.334985 * safezoneH + safezoneY;
				w = 0.283562 * safezoneW;
				h = 0.044004 * safezoneH;
			};
			class Life_RscText_1010: Life_RscText
			{
				idc = 7502;
				text = "Compte entreprise  :"; 
				x = 0.422665 * safezoneW + safezoneX;
				y = 0.433994 * safezoneH + safezoneY;
				w = 0.0773351 * safezoneW;
				h = 0.022002 * safezoneH;
			};
			class RscEdit_1400: Life_RscEdit
			{
				idc = 7503;
				x = 0.505156 * safezoneW + safezoneX;
				y = 0.433994 * safezoneH + safezoneY;
				w = 0.134048 * safezoneW;
				h = 0.022002 * safezoneH;
			};
			class RscButton_1600: Life_RscButtonMenu
			{
				idc = 7504;
				x = 0.670137 * safezoneW + safezoneX;
				y = 0.654014 * safezoneH + safezoneY;
				w = 0.0412454 * safezoneW;
				h = 0.055005 * safezoneH;
			};
		};
	};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
