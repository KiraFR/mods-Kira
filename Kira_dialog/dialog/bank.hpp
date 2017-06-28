#define ST_CENTER           0x02

class Life_atm_management {
    idd = 2700;
    name= "life_atm_menu";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
			class Background: Life_RscText
			{
				idc = -1;
				x = 0.375;
				y = 0.08;
				w = 0.3375;
				h = 0.88;
				colorBackground[] = {-1,-1,-1,0.7};
			};
			class BarpresentATM: Life_RscText
			{
				idc = -1;
				text = "ATM";
				x = 0.375;
				y = 0.08;
				w = 0.3375;
				h = 0.04;
				colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			};
			class BarPresent: Life_RscText
			{
				idc = -1;
				text = "TRANSFERT";
				x = 0.375;
				y = 0.56;
				w = 0.3375;
				h = 0.04;
				colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			};
		};

	class controls {
		class CashMenu: Life_RscStructuredText
		{
			idc = 2701;
			x = 0.4125;
			y = 0.16;
			w = 0.2625;
			h = 0.2;
		};
		class MoneyEdit: Life_RscEdit
		{
			idc = 2702;
			x = 0.4125;
			y = 0.4;
			w = 0.2625;
			h = 0.04;
		};
		class Deposit: Life_RscText
		{
			idc = -1;
			text = "$STR_ATM_Deposit";
			x = 0.4125;
			y = 0.48;
			w = 0.125;
			h = 0.04;
      onButtonClick = "[] call life_fnc_bankDeposit";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
		class Witdrawn: Life_RscText
		{
			idc = -1;
			text = "$STR_ATM_Withdraw";
			x = 0.5625;
			y = 0.48;
			w = 0.125;
			h = 0.04;
      onButtonClick = "[] call life_fnc_bankWithdraw";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
		class ListAccount: Life_RscListbox
		{
			idc = 2780;
			x = 0.4;
			y = 0.66;
			w = 0.2875;
			h = 0.04;
		};
		class NumAccount: Life_RscEdit
		{
			idc = 2750;
			x = 0.4;
			y = 0.74;
			w = 0.2875;
			h = 0.04;
		};
		class Transfert: Life_RscText
		{
			idc = -1;
			text = "$STR_ATM_Transfer";
			x = 0.4875;
			y = 0.82;
			w = 0.1125;
			h = 0.04;
      onButtonClick = "[] call life_fnc_bankTransfer";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
	};
};
