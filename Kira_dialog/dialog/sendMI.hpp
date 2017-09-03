class DOSTARA_GIVE {
	idd = 9000;
	name= "DOSTARA_GIVE";
	movingEnable = false;
	enableSimulation = true;
	onUnLoad = "KIRA_toSend = nil;KIRA_typeSend = nil;";

	class controlsBackground {
		class Background : life_RscText
		{
			idc = -1;
			text = "";
			x = 0.275;
			y = 0.34;
			w = 0.3875;
			h = 0.16;
			colorBackground[] = {0,0,0,0.7};
		};
	};
	class controls {
		class title : Life_RscStructuredText{
			idc = 9001;
			text = "Envoyer ";
			x = 0.275;
			y = 0.296;
			w = 0.3875;
			h = 0.04;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",1};
		};

		class ListItem: Life_RscCombo{
			idc = 9002;
			x = 0.3125;
			y = 0.38;
			w = 0.3125;
			h = 0.04;
		};

		class editItem: Life_RscEdit{
			idc = 9005;
			text = "";
			x = 0.3125;
			y = 0.46;
			w = 0.3125;
			h = 0.04;
			colorBackground[] = {0,0,0,0.7};
		};

		class EditMoney: Life_RscEdit{
			idc = 9003;
			text = "";
			x = 0.3125;
			y = 0.42;
			w = 0.3125;
			h = 0.04;
		};

		class send : life_RscButtonMenu{
			idc = 9004;
			text = "Envoyer";
			x = 0.275;
			y = 0.504;
			w = 0.127524;
			h = 0.0466277;
			colorText[] = {0,0,0,1};
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			onButtonClick = "[] call KIRA_fnc_sendMoneyItem";
		};
	};
};