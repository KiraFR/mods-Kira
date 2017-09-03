class Life_vehicle_shop {
	idd = 2300;
	name= "life_impound_menu";
	movingEnable = false;
	enableSimulation = true;
	//onLoad = "[] execVM 'core\client\keychain\init.sqf'";
	
	class controlsBackground {
		class Life_RscTitleBackground: Life_RscText
		{
			idc = -1;

			x = 0.634007 * safezoneW + safezoneX;
			y = 0.147878 * safezoneH + safezoneY;
			w = 0.329863 * safezoneW;
			h = 0.0220077 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		class MainBackground: Life_RscText
		{
			idc = -1;
			x = 0.634007 * safezoneW + safezoneX;
			y = 0.172086 * safezoneH + safezoneY;
			w = 0.329863 * safezoneW;
			h = 0.281698 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
	};
	class controls {
		class Title: Life_RscTitle
		{
			idc = 2301;

			x = 0.634007 * safezoneW + safezoneX;
			y = 0.147878 * safezoneH + safezoneY;
			w = 0.329863 * safezoneW;
			h = 0.0220077 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};


		class VehicleList: Life_RscListBox
		{
			idc = 2302;
			onLBSelChanged = "[_this] call life_fnc_vehicleColorList";

			x = 0.639161 * safezoneW + safezoneX;
			y = 0.180889 * safezoneH + safezoneY;
			w = 0.319555 * safezoneW;
			h = 0.220077 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};


		class ColorList: Life_RscCombo
		{
			idc = 2303;

			x = 0.844295 * safezoneW + safezoneX;
			y = 0.422973 * safezoneH + safezoneY;
			w = 0.11339 * safezoneW;
			h = 0.0165057 * safezoneH;
		};


		class CloseButtonKey: Life_RscButtonMenu
		{
			onButtonClick = "closeDialog 0;";

			idc = 1005;
			x = 0.634007 * safezoneW + safezoneX;
			y = 0.455985 * safezoneH + safezoneY;
			w = 0.0644264 * safezoneW;
			h = 0.0220077 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};


		class GetCarGarage: Life_RscButtonMenu
		{
			onButtonClick = "[] spawn life_fnc_vehicleShopBuySave";

			idc = 1006;
			x = 0.793784 * safezoneW + safezoneX;
			y = 0.455985 * safezoneH + safezoneY;
			w = 0.103082 * safezoneW;
			h = 0.0220077 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
	};
};