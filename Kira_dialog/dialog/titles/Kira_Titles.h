class DOSTARA_GPSSTUCK
{
	idd = 4780;
	enableSimulation = true;
	onUnLoad = "gpsclose = nil";
	duration = 999999999;
	fadeOut = 0;
	fadeIn = 0;

	class controlsBackground
	{
		class fondEcran : life_RscPicture{
			idc = 4106;
			colorBackground[] = {0,0,0,0.7};
			text = "";
			x = safeZoneX+0.01; y = safeZoneY+0.049;
			w = 0.38; h = 0.98;
		};

		class fondOpa : Life_RscText{
			colorBackground[] = {1,1,1,0.4};
			text = "";
			idc = -1;
			x = safeZoneX+0.01; y = safeZoneY+0.049;
			w = 0.38; h = 0.98;
		};
		class MainBackground : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack-App.paa";
			x = safeZoneX;
			y = safeZoneY;
			w = 0.4;
			h = 1.1;
		};
	};
	class controls {
		class iconGPS : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			text = "\kira_assets\texture\gps.paa";
			x = safeZoneX+0.025;
			y = safeZoneY + 0.128;
			w = 0.035;
			h = 0.05;
		};

		class textIcon: Life_RscText{
			idc = -1;
			text = "GPS";
			colorBackground[] = {0,0,0,0};
			x = safeZoneX+ 0.06;
			y = safeZoneY + 0.128;
			sizeEx = (1/25);
			w = 0.4;
			h = (1/25);
		};
		class gps : Life_RscMapControl
		{
			idc = 4781;
			type = 101;
			style = 48;
			moveOnEdges = 0;
			x = (safeZoneX + 0.025); y = (safeZoneY + 0.18);
			w = 0.348; h = 0.831;
			onDraw = "_this call KIRA_fnc_loopPosGpsStuck";
		};
		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4553],[4101,4103,4105,4554]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "";
			x = safeZoneX + 0.05;
			y = safeZoneY + 1.025;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4553],[4101,4103,4105,4554]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "";
			x = safeZoneX + (0.38/2) - 0.02;
			y = safeZoneY + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\PowerNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4553],[4101,4103,4105,4554]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "";
			x = safeZoneX + 0.38 - (0.38/4);
			y = safeZoneY + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};
	};
};

class DOSTARA_FONT
{
	idd = -1;
	movingEnabled = true;
	enableSimulation = true;
	duration = 999999999999999;
	fadeIn = 2;
	fadeOut = 2;

	class controlsBackground
	{
		class background: life_RscText
		{
			idc = -1;
			text = "";
			x = 0.0999996;
			y = 0.120001;
			w = 0.775001;
			h = 0.72;
			colorBackground[] = {0,0,0,0.7};
			moving = 1;
		};
	};
};


class DOSTARA_Notification {
	name = "DOSTARA_Notification";
	idd = 6300;
	movingEnable = true;
	enableSimulation = true;
	duration = 2;
    onLoad = "uiNamespace setVariable ['DOSTARA_Notification',_this select 0];nbNotif = nbNotif + 1;";
	class controlsBackground {
		class Notification: Life_RscStructuredText
		{
			idc = 6301;
			x = (0.82049 * safezoneW + safezoneX) + (0.180922 * safezoneW);
			y = 0.147899 * safezoneH + safezoneY;
			w = 0.180922 * safezoneW;
			h = 0.0440126 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
	};
};