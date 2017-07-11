#define COLOR_HALF_BLACK {0,0,0,0.7}
#define ST_PICTURE 48
#define CT_BUTTON 1
#define xtel 0
#define ytel 0
#define xPapier 0
#define yPapier -0.2
#define CT_LISTBOX 5
#define CT_BUTTON 1
#define ST_CENTER 0x02
#define CT_EDIT 2
#define CT_STATIC 0
#define CT_COMBO 4
#define ST_MULTI 16
#define CT_CONTROLS_GROUP 15
#define xDecale 0.19

class CfgPatches
{
	class Kira_dialog
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"Kira_assets","Kira_Font","a3_characters_f","a3_characters_f_beta","a3_characters_f_epa","a3_characters_f_epb","a3_characters_f_epc","a3_characters_f_gamma","a3_data_f","a3_weapons_f","a3_weapons_f_beta","a3_weapons_f_bootcamp","a3_weapons_f_epa","a3_weapons_f_epb","a3_weapons_f_epc","a3_weapons_f_gamma","a3_rocks_f","a3_anims_f","a3_weapons_f_mark","a3_map_altis_scenes","a3_map_vr_scenes","a3_map_stratis_scenes","a3_ui_f","a3_3den"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};
#include "dialog\commons\common.hpp"
#include "dialog\commons\kiraCommon.hpp"
class RscTitles
{
	#include "dialog\titles\progress.hpp"
	#include "dialog\titles\hud_nameTags.h"
	#include "dialog\titles\Kira_Titles.h"
};
class Attributes;
class RscStandardDisplay;
class RscProgress;
class RscStructuredText;
class RscPicture;
class RscButton;
class RscShortcutButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscVignette;
class RscDisplayGetReady;
class RscActiveText;
class RscListBox;
class RscListNBox;
class RscCombo;
class RscXListBox;
class RscHTML;
class RscPictureKeepAspect;
class RscActivePicture;
class RscMapControl;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscFrame;
class RscTitle;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class RscControlsGroup;
class RscTextCheckbox;
class RscDisplayInventory_DLCTemplate;
class RscEdit;
class RscCheckBox;
class RscIGProgress;
class RscHitZones;
class RscVehicleToggles;
class RscIGUIText;
class RscIGUIValue;
class RscOpticsValue;
class RscOpticsText;
class Scrollbar;
class RscIGUIShortcutButton;
class RscActivePictureKeepAspect;
class RscTree;
class RscXSliderH;
class RscObject;
class ctrlMenu;
class ctrlStaticPicture;
class RscButtonMenuSteam;
class RscButtonTextOnly;
class RscPictureButton: RscActivePicture
{

	class controls 
	{

		class DlcBg 
		{
			idc = 101;
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayInventory\InventoryStripe_ca.paa";
			color[] = {
					1, 1, 1, 1
			};
			x = 0;
			y = 0;
			w = "1.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class DlcIcon 
		{
			idc = 100;
			text = "";
			color[] = {
					1, 1, 1, 1
			};
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class RscDisplayInventory 
{
	scriptName = "RscDisplayInventory";
	//name="RscDisplayInventory";
	//uiNamespace setVariable ['RscDisplayInventory',_this select 0];
	scriptPath = "IGUI";
	onLoad = "[""onLoad"",_this,""RscDisplayInventory"",'IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');call life_fnc_openMenuI;";
	onUnload = "[""onUnload"",_this,""RscDisplayInventory"",'IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
	idd = 602;
	enableSimulation = 1;
	class Colors 
	{
		dragValidBgr[] = {
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.500000
		};
		dragInvalidBgr[] = {
				"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", 0.500000
		};
		dragValidBar[] = {
				"(profilenamespace getvariable ['IGUI_WARNING_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_G',0.5])", "(profilenamespace getvariable ['IGUI_WARNING_RGB_B',0.0])", 0.500000
		};
		dragInvalidBar[] = {
				"(profilenamespace getvariable ['IGUI_ERROR_RGB_R',0.8])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_G',0.0])", "(profilenamespace getvariable ['IGUI_ERROR_RGB_B',0.0])", 0.500000
		};
		progressBar[] = {
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 1
		};
		progressBarBgr[] = {
				"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", 0.750000
		};
		highlight[] = {
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])", "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])", 0.500000
		};
	};

	class controlsBackground {
		class foodHIcon : life_RscPicture 
		{
			idc = 23540;
			text = "\kira_assets\hud\faim.paa";
			x = "safeZoneX+safeZoneW-0.215"; y = "safeZoneY+safeZoneH-0.637";
			w = 0.05; h = 0.06;
			colorBackground[] = COLOR_HALF_BLACK;
		};
			
		class waterHIcon : life_RscPicture 
		{
			idc = 23545;
			text = "\kira_assets\hud\soif.paa";
			x = "safeZoneX+safeZoneW-0.215"; y = "safeZoneY+safeZoneH-0.576";
			w = 0.05; h = 0.06;
			colorBackground[] = COLOR_HALF_BLACK;
		};
			
		class healthHIcon : life_RscPicture
		{
			idc = 23550;
			text = "\kira_assets\hud\vie.paa";
			x = "safeZoneX+safeZoneW-0.215"; y = "safeZoneY+safeZoneH-0.513";
			w = 0.05; h = 0.06;
			colorBackground[] = COLOR_HALF_BLACK;
		};

		class moneyHIcon : life_RscPicture
		{
			idc = 23555;
			text = "\kira_assets\hud\argent.paa";
			x = "safeZoneX+safeZoneW-0.215"; y = "safeZoneY+safeZoneH-0.450";
			w = 0.05; h = 0.06;
			colorBackground[] = COLOR_HALF_BLACK;
		};
		class backgroundVirtual: RscText{
			idc = -1;
			text = "";
			x = xDecale-0.5625;
			y = -0.1;
			w = 0.3;
			h = 1.08;
			colorBackground[] = {0,0,0,0.7};
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * GUI_GRID_H";
		};
	};

	class controls 
	{

		delete Background;
		delete Title;
		delete ButtonOK;
		delete ButtonCancel;
		class CA_ContainerBackground : RscText
		{
			idc = 1001;
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "23 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {
					0.050000, 0.050000, 0.050000, 0.700000
			};
		};

		class CA_PlayerBackground : RscText
		{
			idc = 1002;
			x = "14.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "24.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "22 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {
					0.050000, 0.050000, 0.050000, 0.700000
			};
		};

		class TitleBackground : RscText
		{
			idc = 1020;
			x = "14.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "24.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {
					0.100000, 0.100000, 0.100000, 1
			};
		};

		class PlayersName : RscText
		{
			idc = 111;
			text = "$STR_DIARY_PLAYER_NAME";
			x = "15.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "19.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class RankBackground : RscText
		{
			idc = 1014;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "0.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {
					1, 1, 1, 0.200000
			};
		};

		class RankPicture : RscPicture
		{
			idc = 1203;
			text = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "0.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class ButtonBack : RscActiveText
		{
			idc = 2;
			style = 48;
			color[] = {
					1, 1, 1, 0.700000
			};
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					1, 1, 1, 0.700000
			};
			colorActive[] = {
					1, 1, 1, 1
			};
			tooltip = "$STR_DISP_CLOSE";
		};

		class BackgroundSlotPrimary : RscPicture
		{
			idc = 1242;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotPrimaryMuzzle : BackgroundSlotPrimary
		{
			idc = 1243;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotPrimaryUnderBarrel : BackgroundSlotPrimary
		{
			idc = 1200;
			x = "28.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotPrimaryFlashlight : BackgroundSlotPrimary
		{
			idc = 1244;
			x = "30.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotPrimaryOptics : BackgroundSlotPrimary
		{
			idc = 1245;
			x = "32.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotPrimaryMagazineGL : BackgroundSlotPrimary
		{
			idc = 1267;
			x = "34.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotPrimaryMagazine : BackgroundSlotPrimary
		{
			idc = 1246;
			x = "36.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotSecondary : BackgroundSlotPrimary
		{
			idc = 1247;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotSecondaryMuzzle : BackgroundSlotPrimary
		{
			idc = 1248;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotSecondaryUnderBarrel : BackgroundSlotPrimary
		{
			idc = 1266;
			x = "29 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotSecondaryFlashlight : BackgroundSlotPrimary
		{
			idc = 1249;
			x = "31.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotSecondaryOptics : BackgroundSlotPrimary
		{
			idc = 1250;
			x = "33.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotSecondaryMagazine : BackgroundSlotPrimary
		{
			idc = 1251;
			x = "36.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotHandgun : BackgroundSlotPrimary
		{
			idc = 1252;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "17 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotHandgunMuzzle : BackgroundSlotPrimary
		{
			idc = 1253;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotHandgunUnderBarrel : BackgroundSlotPrimary
		{
			idc = 1268;
			x = "29 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotHandgunFlashlight : BackgroundSlotPrimary
		{
			idc = 1254;
			x = "31.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotHandgunOptics : BackgroundSlotPrimary
		{
			idc = 1255;
			x = "33.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotHandgunMagazine : BackgroundSlotPrimary
		{
			idc = 1256;
			x = "36.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotHeadgear : BackgroundSlotPrimary
		{
			idc = 1257;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotGoggles : BackgroundSlotPrimary
		{
			idc = 1258;
			x = "29.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotHMD : BackgroundSlotPrimary
		{
			idc = 1259;
			x = "32.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotBinoculars : BackgroundSlotPrimary
		{
			idc = 1260;
			x = "35.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotMap : BackgroundSlotPrimary
		{
			idc = 1261;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotGPS : BackgroundSlotPrimary
		{
			idc = 1262;
			x = "17.32 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotCompass : BackgroundSlotPrimary
		{
			idc = 1263;
			x = "21.76 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotRadio : BackgroundSlotPrimary
		{
			idc = 1264;
			x = "19.54 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackgroundSlotWatch : BackgroundSlotPrimary
		{
			idc = 1265;
			x = "23.98 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class ExternalContainerBackground : RscPicture
		{
			colorText[] = {
					1, 1, 1, 0.100000
			};
			idc = 1240;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "18.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class PlayerContainerBackground : ExternalContainerBackground
		{
			idc = 1241;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "14 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class GroundTab : RscActiveText
		{
			idc = 6321;
			colorBackgroundSelected[] = {
					1, 1, 1, 1
			};
			colorFocused[] = {
					1, 1, 1, 0
			};
			soundDoubleClick[] = {
					"", 0.100000, 1
			};
			color[] = {
					1, 1, 1, 1
			};
			colorBackground[] = {
					0, 0, 0, 1
			};
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class SoldierTab : GroundTab
		{
			idc = 6401;
			x = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class GroundContainer : RscListBox
		{

			class DLCTemplate : RscDisplayInventory_DLCTemplate
			{

				class Controls ;
			};
			idc = 632;
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx2 = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			rowHeight = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			canDrag = 1;
			colorText[] = {
					1, 1, 1, 1
			};
			colorBackground[] = {
					0, 0, 0, 0
			};
			itemBackground[] = {
					1, 1, 1, 0.100000
			};
			itemSpacing = 0.001000;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "18.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class SoldierContainer : GroundContainer
		{
			idc = 640;
		};

		class GroundFilter : RscCombo
		{
			idc = 6554;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class GroundLoad : RscProgress
		{
			idc = 6307;
			Texture = "";
			TextureExt = "";
			colorBar[] = {
					0.900000, 0.900000, 0.900000, 0.900000
			};
			colorExtBar[] = {
					1, 1, 1, 1
			};
			colorFrame[] = {
					1, 1, 1, 1
			};
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "22.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class SlotPrimary : GroundTab
		{

			class DLCTemplate : RscDisplayInventory_DLCTemplate
			{

				class Controls ;
			};
			idc = 610;
			style = "0x30 + 0x800";
			color[] = {
					1, 1, 1, 1
			};
			colorBackground[] = {
					1, 1, 1, 0.100000
			};
			colorBackgroundSelected[] = {
					1, 1, 1, 0.100000
			};
			colorFocused[] = {
					0, 0, 0, 0
			};
			canDrag = 1;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotPrimaryMuzzle : SlotPrimary
		{
			idc = 620;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotPrimaryUnderBarrel : SlotPrimary
		{
			idc = 641;
			x = "28.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotPrimaryFlashlight : SlotPrimary
		{
			idc = 622;
			x = "30.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotPrimaryOptics : SlotPrimary
		{
			idc = 621;
			x = "32.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotPrimaryMagazineGL : SlotPrimary
		{
			idc = 644;
			x = "34.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotPrimaryMagazine : SlotPrimary
		{
			idc = 623;
			x = "36.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotSecondary : SlotPrimary
		{
			idc = 611;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "11.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotSecondaryMuzzle : SlotPrimary
		{
			idc = 624;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotSecondaryUnderBarrel : SlotPrimary
		{
			idc = 642;
			x = "29 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.59 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotSecondaryFlashlight : SlotPrimary
		{
			idc = 626;
			x = "31.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotSecondaryOptics : SlotPrimary
		{
			idc = 625;
			x = "33.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotSecondaryMagazine : SlotPrimary
		{
			idc = 627;
			x = "36.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotHandgun : SlotPrimary
		{
			idc = 612;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "17 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotHandgunMuzzle : SlotPrimary
		{
			idc = 628;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotHandgunUnderBarrel : SlotPrimary
		{
			idc = 643;
			x = "29 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotHandgunFlashlight : SlotPrimary
		{
			idc = 630;
			x = "31.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotHandgunOptics : SlotPrimary
		{
			idc = 629;
			x = "33.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotHandgunMagazine : SlotPrimary
		{
			idc = 631;
			x = "36.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotHeadgear : SlotPrimary
		{
			idc = 6240;
			x = "26.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotGoggles : SlotPrimary
		{
			idc = 6216;
			x = "29.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotHMD : SlotPrimary
		{
			idc = 6217;
			x = "32.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotBinoculars : SlotPrimary
		{
			idc = 6238;
			x = "35.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotMap : SlotPrimary
		{
			idc = 6211;
			x = "15.16 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotGPS : SlotPrimary
		{
			idc = 6215;
			x = "17.38 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotCompass : SlotPrimary
		{
			idc = 6212;
			x = "21.82 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotRadio : SlotPrimary
		{
			idc = 6214;
			x = "19.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class SlotWatch : SlotPrimary
		{
			idc = 6213;
			x = "24.04 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "20.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class UniformTab : GroundTab
		{
			idc = 6332;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {
					1, 1, 1, 0.500000
			};
		};

		class UniformSlot : SlotPrimary
		{
			idc = 6331;
			x = "15.35 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class UniformLoad : GroundLoad
		{
			idc = 6304;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class UniformContainer : GroundContainer
		{
			idc = 633;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "14 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class VestTab : UniformTab
		{
			idc = 6382;
			x = "18.85 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class VestSlot : SlotPrimary
		{
			idc = 6381;
			x = "19.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class VestLoad : GroundLoad
		{
			idc = 6305;
			x = "18.85 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class VestContainer : UniformContainer
		{
			idc = 638;
		};

		class BackpackTab : UniformTab
		{
			idc = 6192;
			x = "22.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackpackSlot : SlotPrimary
		{
			idc = 6191;
			x = "22.85 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {
					0, 0, 0, 0.500000
			};
		};

		class BackpackLoad : GroundLoad
		{
			idc = 6306;
			x = "22.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class BackpackContainer : UniformContainer
		{
			idc = 619;
		};

		class TotalLoad : GroundLoad
		{
			idc = 6308;
			x = "15.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "22.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "23.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class ContainerMarker : GroundTab
		{
			idc = 6325;
			x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "24 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class GroundMarker : ContainerMarker
		{
			idc = 6385;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "24 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class SoldierMarker : ContainerMarker
		{
			idc = 6405;
			x = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "24 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class licenceStruct: Life_RscStructuredText
		{
			idc = 2014;
			x = xDecale-0.55;
			y = -0.02;
			w = 0.275;
			h = 0.22;
			sizeEx = 0.04;
			colorBackground[] = {0,0,0,0.7};
		};
		class licenseHeader: RscText
		{
			idc = -1;

			text = "Licences";
			x = xDecale-0.55;
			y = -0.08;
			w = 0.275;
			h = 0.04;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
		class moneySHeader: RscText
		{
			idc = -1;

			text = "Argent";
			x = xDecale-0.55;
			y = 0.76;
			w = 0.275;
			h = 0.04;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
		class moneyEdit: RscEdit
		{
			idc = 2018;
			text = "1";
			x = xDecale-0.55;
			y = 0.82;
			w = 0.275;
			h = 0.03;
			colorBackground[] = {0,0,0,0.7};
		};
		class moneyDrop: RscButtonMenu
		{
			idc = 2001;
			onButtonClick = "[] call life_fnc_giveMoney";

			text = "Donner";
			x = xDecale-0.55;
			y = 0.9;
			w = 0.13;
			h = 0.036;
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
		class itemList: RscListBox
		{
			idc = 2005;
			x = xDecale-0.55;
			y = 0.26;
			w = 0.275;
			h = 0.3;
			colorBackground[] = {0,0,0,0.7};
		};
		class itemEdit: RscEdit
		{
			idc = 2010;
			text = "1";
			x = xDecale-0.55;
			y = 0.568;
			w = 0.275;
			h = 0.03;
			colorBackground[] = {0,0,0,0.7};
		};
		class DropButton: RscButtonMenu
		{
			idc = -1;
			onButtonClick = "[] call life_fnc_giveItem;";

			text = "Donner";
			x = xDecale-0.405;
			y = 0.64;
			w = 0.13125;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
		class UseButton: RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_useItem;";
			idc = -1;

			text = "Utiliser";
			x = xDecale-0.5475;
			y = 0.64;
			w = 0.13125;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
		class RemoveButton: RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_removeItem;";
			idc = -1;

			text = "Supprimer";
			x = xDecale-0.55;
			y = 0.688;
			w = 0.13125;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
		class NearPlayers: RscCombo
		{
			idc = 2022;
			x = xDecale-0.55;
			y = 0.86;
			w = 0.275;
			h = 0.03;
			colorBackground[] = {0,0,0,0.7};
		};
		class iNearPlayers: RscCombo
		{
			idc = 2023;

			x = xDecale-0.55;
			y = 0.604;
			w = 0.275;
			h = 0.03;
			colorBackground[] = {0,0,0,0.7};
		};
		class titlevir: RscText
		{
			idc = 2009;
			text = "Items";
			x = xDecale-0.55;
			y = 0.22;
			w = 0.275;
			h = 0.04;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
		class foodtext
		{
			type=0;
			idc=23500;
			style=0;
			x="safeZoneX+safeZoneW-0.15";
			y="safeZoneY+safeZoneH-0.637";
			w=0.3;
			h=0.05;
			sizeEx=0.03;
			size=1;
			font="OrbitronLight";
			colorBackground[] = COLOR_HALF_BLACK;
			colorText[] = { 1 , 1 , 1 , 1 };
			shadow=true;
			text="";
		};
			
		class watertext
		{
			type=0;
			idc=23510;
			style=0;
			x="safeZoneX+safeZoneW-0.15";
			y="safeZoneY+safeZoneH-0.576";
			w=0.3;
			h=0.05;
			sizeEx=0.03;
			size=1;
			font="OrbitronLight";
			colorBackground[] = COLOR_HALF_BLACK;
			colorText[] = { 1 , 1 , 1 , 1 };
			shadow=true;
			text="";
		};
			
		class healthtext
		{
			type=0;
			idc=23515;
			style=0;
			x="safeZoneX+safeZoneW-0.15";
			y="safeZoneY+safeZoneH-0.513";
			w=0.3;
			h=0.05;
			sizeEx=0.03;
			size=1;
			font="OrbitronLight";
			colorBackground[] = COLOR_HALF_BLACK;
			colorText[] = { 1 , 1 , 1 , 1 };
			shadow=true;
			text="";
		};

		class moneytext
		{
			type=0;
			idc=23520;
			style=0;
			x="safeZoneX+safeZoneW-0.15";
			y="safeZoneY+safeZoneH-0.445";
			w=0.3;
			h=0.05;
			sizeEx=0.03;
			size=1;
			font="OrbitronLight";
			colorBackground[] = COLOR_HALF_BLACK;
			colorText[] = { 1 , 1 , 1 , 1 };
			shadow=true;
			text="";
		};
	};
};

class DOSTARA_GENERAL
{
	idd = 4050;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "";
	onUnLoad = "thisBackground = nil;thisAnonyme = nil;";
	
	class controlsBackground
	{	
		class fondEcran : life_RscPicture
		{
			idc = 4106;
			colorBackground[] = {0,0,0,0.7};
			text = "";
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class fondOpa : Life_RscText
		{
			colorBackground[] = {1,1,1,0.4};
			text = "";
			idc = -1;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class MainBackground : life_RscPicture
		{
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack.paa";
			moving = 1;
			idc = -1;
			x = xtel; y = ytel;
			w = 0.4; h = 1.1;
		};
	};
	class controls{
		
		class MessageMouse : Life_RscButtonKiraMenu06x06 {
			idc = 4107;
			TextureNoShortcut = "\kira_assets\texture\MessageNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4106,4108,4110,4112,4114,4116,4118,4120],[4101,4103,4105,4107,4109,4111,4113,4115,4117,4119,4121]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "createDialog ""DOSTARA_MESSAGE"";";
			x = xtel + 0.055; y = ytel + 0.22;
			text = "GPS";
			w = "0.06";
			h = "0.08";
		};

		class textMessageMouse: Life_RscText{
			idc = 4197;
			text = "Messages";
			type = CT_STATIC;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			color[] = {0,0,0,0.7};
			x = xtel + 0.055 - 0.025;
			y = ytel + 0.3;
			w = 0.11; h = (1/25);
		};
		
		class InternetMouse : Life_RscButtonKiraMenu06x06 {
			idc = 4109;
			TextureNoShortcut = "\kira_assets\texture\InternetNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4106,4108,4110,4112,4114,4116,4118,4120],[4101,4103,4105,4107,4109,4111,4113,4115,4117,4119,4121]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "call KIRA_fnc_initAdsPage";
			x = xtel + (0.38/2) - 0.015;
			y = ytel + 0.22;
			text = "GPS";
			w = "0.06";
			h = "0.08";
		};

		class textInternetMouse: Life_RscText{
			idc = -1;
			text = "Internet";
			type = CT_STATIC;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			color[] = {0,0,0,0.7};
			x = xtel + (0.38/2) - 0.032;
			y = ytel + 0.3;
			w = 0.1; h = (1/25);
		};
		
		class contactMouse : Life_RscButtonKiraMenu06x06 {
			idc = 4111;
			TextureNoShortcut = "\kira_assets\texture\contactNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4106,4108,4110,4112,4114,4116,4118,4120],[4101,4103,4105,4107,4109,4111,4113,4115,4117,4119,4121]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "createDialog ""DOSTARA_REPERTOIRE"";";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 0.22;
			text = "GPS";
			w = "0.06";
			h = "0.08";
		};

		class textContactMouse: Life_RscText{
			idc = -1;
			text = "Contact";
			type = CT_STATIC;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			color[] = {0,0,0,0.7};
			x = xtel + 0.38 - (0.38/4) - 0.02;
			y = ytel + 0.3;
			w = 0.1; h = (1/25);
		};
		
		class bankMouse : Life_RscButtonKiraMenu06x06 {
			idc = 4113;
			TextureNoShortcut = "\kira_assets\texture\bankNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4106,4108,4110,4112,4114,4116,4118,4120],[4101,4103,4105,4107,4109,4111,4113,4115,4117,4119,4121]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "createDialog ""DOSTARA_BANK"";";
			x = xtel + 0.055; y = ytel + 0.36;
			text = "GPS";
			w = "0.06";
			h = "0.08";
		};

		class textBankMouse: Life_RscText{
			idc = -1;
			text = "Banques";
			type = CT_STATIC;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			color[] = {0,0,0,0.7};
			x = xtel + 0.055 - 0.025;
			y = ytel + 0.44;
			w = 0.11; h = (1/25);
		};
		
		class gpsMouse : Life_RscButtonKiraMenu06x06 {
			idc = 4115;
			TextureNoShortcut = "\kira_assets\texture\gpsNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4106,4108,4110,4112,4114,4116,4118,4120],[4101,4103,4105,4107,4109,4111,4113,4115,4117,4119,4121]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "createDialog ""DOSTARA_GPSNOSTUCK"";";
			x = xtel + (0.38/2) - 0.016;
			y = ytel + 0.36;
			text = "GPS";
			w = "0.06";
			h = "0.08";
		};

		class textGpsMouse: Life_RscText{
			idc = -1;
			text = "GPS";
			type = CT_STATIC;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			color[] = {0,0,0,0.7};
			x = xtel + (0.38/2) - 0.016;
			y = ytel + 0.44;
			w = 0.1; h = (1/25);
		};
		
		class marketMouse : Life_RscButtonKiraMenu06x06 {
			idc = 4117;
			TextureNoShortcut = "\kira_assets\texture\marketNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4106,4108,4110,4112,4114,4116,4118,4120],[4101,4103,4105,4107,4109,4111,4113,4115,4117,4119,4121]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "createDialog ""DOSTARA_BOURSE"";";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 0.36;
			text = "GPS";
			w = "0.06";
			h = "0.08";
		};

		class textMarketMouse: Life_RscText{
			idc = -1;
			text = "Bourse";
			type = CT_STATIC;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			color[] = {0,0,0,0.7};
			x = xtel + 0.38 - (0.38/4) - 0.015;
			y = ytel + 0.44;
			w = 0.1; h = (1/25);
		};

		
		class settingMouse : Life_RscButtonKiraMenu06x06 {
			idc = 4119;
			TextureNoShortcut = "\kira_assets\texture\settingNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4106,4108,4110,4112,4114,4116,4118,4120],[4101,4103,4105,4107,4109,4111,4113,4115,4117,4119,4121]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "createDialog ""DOSTARA_PARAMETRE"";";
			x = xtel + 0.055;
			y = ytel + 0.48;
			text = "GPS";
			w = "0.06";
			h = "0.08";
		};

		class textsettingMouse: Life_RscText{
			idc = -1;
			text = "Parametre";
			type = CT_STATIC;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			color[] = {0,0,0,0.7};
			x = xtel + 0.055 - 0.025;
			y = ytel + 0.56;
			w = 0.11; h = (1/25);
		};

		class clefsMouse : Life_RscButtonKiraMenu06x06 {
        	idc = 4119;
        	TextureNoShortcut = "\kira_assets\texture\CarClefs.paa";
        	//onMouseExit = "[[4100,4102,4104,4106,4108,4110,4112,4114,4116,4118,4120],[4101,4103,4105,4107,4109,4111,4113,4115,4117,4119,4121]] call KIRA_fnc_hideAllCtrl;";
        	onButtonClick = "createDialog ""Life_key_management"";";
        	x = xtel + (0.38/2) - 0.016;
        	y = ytel + 0.48;
        	text = "Clefs";
        	w = "0.06";
        	h = "0.08";
        };

        class textclefsMouse: Life_RscText{
        	idc = -1;
        	text = "Clefs";
        	type = CT_STATIC;
        	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
        	color[] = {0,0,0,0.7};
        	x = xtel + (0.38/2) - 0.016;
        	y = ytel + 0.56;
        	w = 0.11; h = (1/25);
        };
        class ReglageVueMouse : Life_RscButtonKiraMenu06x06 {
            idc = 4119;
            TextureNoShortcut = "\kira_assets\texture\ReglaVue.paa";
             //onMouseExit = "[[4100,4102,4104,4106,4108,4110,4112,4114,4116,4118,4120],[4101,4103,4105,4107,4109,4111,4113,4115,4117,4119,4121]] call KIRA_fnc_hideAllCtrl;";
             onButtonClick = "createDialog ""SettingsMenu"";";
             x = xtel + 0.38 - (0.38/4);
             y = ytel + 0.48;
             text = "Clefs";
             w = "0.06";
             h = "0.08";
        };

         class textReglageVueMouse: Life_RscText{
             idc = -1;
             text = "Réglages";
             type = CT_STATIC;
             sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
             color[] = {0,0,0,0.7};
             x = xtel + 0.38 - (0.38/4) - 0.015;
             y = ytel + 0.56;
             w = 0.11; h = (1/25);
         };
		/*class SoundBoardMouse : Life_RscButtonKiraMenu06x06 {
			idc = 4121;
			TextureNoShortcut = "\kira_assets\texture\soundboardNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4106,4108,4110,4112,4114,4116,4118,4120],[4101,4103,4105,4107,4109,4111,4113,4115,4117,4119,4121]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "createDialog ""DOSTARA_SOUNDBOARD"";";
			x = xtel + (0.38/2) - 0.016;
			y = ytel + 0.48;
			text = "GPS";
			w = "0.06";
			h = "0.08";
		};

		class textSoundBoard: Life_RscText{
			idc = -1;
			text = "SoundBoard";
			type = CT_STATIC;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			color[] = {0,0,0,0.7};
			x = xtel + (0.38/2) - 0.025;
			y = ytel + 0.56;
			w = 0.11; h = (1/25);
		};*/

		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4106,4108,4110,4112,4114,4116,4118,4120],[4101,4103,4105,4107,4109,4111,4113,4115,4117,4119,4121]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "CloseDialog 0";
			x = xtel + 0.05;
			y = ytel + 1.025;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4106,4108,4110,4112,4114,4116,4118,4120],[4101,4103,4105,4107,4109,4111,4113,4115,4117,4119,4121]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "CloseDialog 0;[] spawn KIRA_fnc_initSmart;";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 1.022;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\PowerNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4106,4108,4110,4112,4114,4116,4118,4120],[4101,4103,4105,4107,4109,4111,4113,4115,4117,4119,4121]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "[] spawn KIRA_fnc_powerOFF";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 1.022;
			text = "return";
			w = "0.05";
			h = "0.07";
		};
	};
};

class DOSTARA_MESSAGE
{
	idd = 4150;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] spawn KIRA_fnc_initMsg";
	
	class controlsBackground
	{	
		class fondEcran : life_RscPicture
		{
			colorBackground[] = {0,0,0,0.7};
			text = "";
			idc = 4106;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};
		class fondOpa : Life_RscText
		{
			colorBackground[] = {0,0,0,0.4};
			text = "";
			idc = -1;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class MainBackground : life_RscPicture{
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack-app.paa";
			idc = -1;
			x = xtel; y = ytel;
			w = 0.4; h = 1.1;
			moving = 1;
		};
	};
	class controls {

		class iconMessage : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			text = "\kira_assets\texture\messageIcon.paa";
			x = xtel+0.025;
			y = ytel + 0.128;
			w = 0.035;
			h = 0.05;
		};

		class textIcon: Life_RscText{
			idc = 4155;
			text = "";
			colorBackground[] = {0,0,0,0};
			x = xtel+ 0.06;
			y = ytel + 0.128;
			sizeEx = (1/25);
			w = 0.4;
			h = (1/25);
		};

		class contacts: Life_RscListNBox {
			idc = 4901;
			type = CT_LISTBOX;
			style = ST_CENTER;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			onLBSelChanged = "call KIRA_fnc_selectConv";
			x = (xtel + 0.025); y = (ytel + 0.18);
			w = 0.348; h = 0.75;
			colorBackground[] = {0,0,0,0.7};
		};
		
		class addConv : Life_RscButtonKiraMenu06x06 {
			idc = -1;
			TextureNoShortcut = "\kira_assets\texture\ico_add.paa";
			onButtonClick = "createDialog ""DOSTARA_ADDCONV"";";
			x = xtel + 0.05;
			y = ytel + 0.93;
			text = "return";
			w = "0.06";
			h = "0.08";
		};
		class removeConv : Life_RscButtonKiraMenu06x06 {
			idc = 4154;
			TextureNoShortcut = "\kira_assets\texture\ico_del.paa";
			onButtonClick = "call KIRA_fnc_removeConv";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 0.93;
			text = "return";
			w = "0.06";
			h = "0.08";
		};
		//bouton open
		class openNoMouse : Life_RscButtonKiraMenu03x03 {
			idc = 4152;
			TextureNoShortcut = "\kira_assets\texture\openNoMouse.paa";
			//onMouseEnter = "[4152,[4152,4100,4102,4104],[4153,4101,4103,4105]] spawn KIRA_fnc_hideCtrl;";
			onMouseEnter = "ctrlshow[4153,true];ctrlshow[4152,false]";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "Banque";
			w = "0.03";
			h = "0.05";
		};
		class openMouse : Life_RscButtonKiraMenu03x03 {
			idc = 4153;
			TextureNoShortcut = "\kira_assets\texture\openMouse.paa";
			//onMouseExit = "[[4152,4100,4102,4104],[4153,4101,4103,4105]] call KIRA_fnc_hideAllCtrl";
			onMouseExit = "ctrlshow[4153,false];ctrlshow[4152,true]";
			onButtonClick = "createDialog ""DOSTARA_CONVERSATION"";";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "Banque";
			w = "0.03";
			h = "0.05";
		};


		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			//onMouseExit = "[[4152,4100,4102,4104],[4153,4101,4103,4105]] call KIRA_fnc_hideAllCtrl";
			onButtonClick = "CloseDialog 0";
			x = xtel + 0.05;
			y = ytel + 1.025;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			//onMouseExit = "[[4152,4100,4102,4104],[4153,4101,4103,4105]] call KIRA_fnc_hideAllCtrl";
			onButtonClick = "CloseDialog 0;[] spawn KIRA_fnc_initSmart;";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 1.022;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\PowerNoMouse.paa";
			//onMouseExit = "[[4152,4100,4102,4104],[4153,4101,4103,4105]] call KIRA_fnc_hideAllCtrl";
			onButtonClick = "[] spawn KIRA_fnc_powerOFF";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 1.022;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

	};
};

class DOSTARA_AJOUTCONT
{
	idd = 4250;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] spawn KIRA_fnc_initAddCont";
	onUnload = "";

	class controlsBackground
	{
		class fondEcran : life_RscPicture{
			idc = 4106;
			colorBackground[] = {0,0,0,0.7};
			text = "";
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class fondOpa : Life_RscText{
			colorBackground[] = {1,1,1,0.4};
			text = "";
			idc = -1;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class textName: Life_RscText{
			idc = -1;
			text = "Nom";
			type = CT_STATIC;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.7};
			x = xtel; y = (ytel + (0.355 - (1/25) - 0.01));
			w = 0.4; h = (1/25);
			moving = 1;
		};

		class textNum: Life_RscText{
			idc = -1;
			text = "Numero";
			type = CT_STATIC;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.7};
			x = xtel; y = (ytel + (0.555 - (1/25) - 0.01));
			w = 0.4; h = (1/25);
		};

		class textColor: Life_RscText{
			idc = -1;
			text = "Couleur";
			type = CT_STATIC;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.7};
			x = xtel; y = (ytel + (0.755 - (1/25) - 0.01));
			w = 0.4; h = (1/25);
		};

		class MainBackground : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack-App.paa";
			x = xtel;
			y = ytel;
			w = 0.4;
			h = 1.1;
			moving = 1;
		};
	};
	class controls {

		class iconContact : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			text = "\kira_assets\texture\contact.paa";
			x = xtel+0.025;
			y = ytel + 0.128;
			w = 0.035;
			h = 0.05;
		};

		class textIcon: Life_RscText{
			idc = -1;
			text = "Ajouter un contact";
			colorBackground[] = {0,0,0,0};
			x = xtel+ 0.06;
			y = ytel + 0.128;
			sizeEx = (1/25);
			w = 0.4;
			h = (1/25);
		};
		class editName: Life_RscEdit{
			idc = 4251;
			text = "";
			type = CT_EDIT;
			x = ((0.38 - (0.38 * 0.8)) / 2)+0.01; y = (ytel + 0.355);
			w = (0.38 * 0.8); h = (1/25);
		};

		class editNum: Life_RscEdit{
			idc = 4252;
			text = "";
			type = CT_EDIT;
			x = ((0.38 - (0.38 * 0.8)) / 2)+0.01; y = (ytel + 0.555);
			w = (0.38 * 0.8); h = (1/25);
		};

		class lbColor: Life_RscCombo{
			idc = 4254;
			text = "";
			type = CT_COMBO;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.7};
			x = ((0.38 - (0.38 * 0.8)) / 2)+0.01; y = (ytel + 0.755);
			w = (0.38 * 0.8); h = (1/25);
		};

		//bouton save
		class saveNoMouse : Life_RscButtonKiraMenu03x03 {
			idc = 4255;
			TextureNoShortcut = "\kira_assets\texture\saveNoMouse.paa";
			//onMouseEnter = "[4255,[4100,4102,4104,4255],[4101,4103,4105,4256]] spawn KIRA_fnc_hideCtrl;";
			onMouseEnter = "ctrlshow[4256,true];ctrlshow[4255,false];";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "Banque";
			w = "0.03";
			h = "0.05";
		};
		class saveMouse : Life_RscButtonKiraMenu03x03 {
			idc = 4256;
			TextureNoShortcut = "\kira_assets\texture\saveMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4255],[4101,4103,4105,4256]] call KIRA_fnc_hideAllCtrl;";
			onMouseExit = "ctrlshow[4255,true];ctrlshow[4256,false];";
			onButtonClick = "call KIRA_fnc_saveContact";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "Banque";
			w = "0.03";
			h = "0.05";
		};

		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4255],[4101,4103,4105,4256]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "CloseDialog 0";
			x = xtel + 0.05;
			y = ytel + 1.025;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4255],[4101,4103,4105,4256]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "CloseDialog 0;[] spawn KIRA_fnc_initSmart;";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 1.022;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\powerNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4255],[4101,4103,4105,4256]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "[] spawn KIRA_fnc_powerOFF";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 1.022;
			text = "return";
			w = "0.05";
			h = "0.07";
		};
	};
};

class DOSTARA_REPERTOIRE
{
	idd = 4450;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] spawn KIRA_fnc_initRepertoire";
	
	class controlsBackground
	{	
		class fondEcran : life_RscPicture
		{
			colorBackground[] = {0,0,0,0.7};
			text = "";
			idc = 4106;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};
		class fondOpa : Life_RscText
		{
			colorBackground[] = {0,0,0,0.4};
			text = "";
			idc = -1;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class MainBackground : life_RscPicture{
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack-app.paa";
			idc = -1;
			x = xtel; y = ytel;
			w = 0.4; h = 1.1;
			moving = 1;
		};
	};
	class controls {

		class iconMessage : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			text = "\kira_assets\texture\messageIcon.paa";
			x = xtel+0.025;
			y = ytel + 0.128;
			w = 0.035;
			h = 0.05;
		};

		class textIcon: Life_RscText{
			idc = -1;
			text = "Mon repertoire";
			colorBackground[] = {0,0,0,0};
			x = xtel+ 0.06;
			y = ytel + 0.128;
			sizeEx = (1/25);
			w = 0.4;
			h = (1/25);
		};

		class contacts: Life_RscListNBox {
			idc = 4451;
			type = CT_LISTBOX;
			style = ST_CENTER;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			onLBSelChanged = "call KIRA_fnc_selectContact";
			x = (xtel + 0.025); y = (ytel + 0.18);
			w = 0.348; h = 0.75;
			colorBackground[] = {0,0,0,0.7};
		};
		
		class addConv : Life_RscButtonKiraMenu06x06 {
			idc = -1;
			TextureNoShortcut = "\kira_assets\texture\ico_add.paa";
			onButtonClick = "createDialog ""DOSTARA_AJOUTCONT"";";
			x = xtel + 0.05;
			y = ytel + 0.93;
			text = "";
			w = "0.06";
			h = "0.08";
		};
		class removeConv : Life_RscButtonKiraMenu06x06 {
			idc = 4454;
			TextureNoShortcut = "\kira_assets\texture\ico_del.paa";
			onButtonClick = "call KIRA_fnc_removeContact";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 0.93;
			text = "";
			w = "0.06";
			h = "0.08";
		};

		class editConv : Life_RscButtonKiraMenu06x06 {
			idc = 4455;
			TextureNoShortcut = "\kira_assets\texture\ico_edit.paa";
			onButtonClick = "createDialog ""DOSTARA_EditCONT"";";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 0.93;
			text = "";
			w = "0.06";
			h = "0.08";
		};

		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104],[4101,4103,4105]] call KIRA_fnc_hideAllCtrl";
			onButtonClick = "CloseDialog 0";
			x = xtel + 0.05;
			y = ytel + 1.025;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104],[4101,4103,4105]] call KIRA_fnc_hideAllCtrl";
			onButtonClick = "CloseDialog 0;[] spawn KIRA_fnc_initSmart;";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\PowerNoMouse.paa";
			////onMouseExit = "[[4100,4102,4104],[4101,4103,4105]] call KIRA_fnc_hideAllCtrl";
			onButtonClick = "[] spawn KIRA_fnc_powerOFF";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};
	};
};

class DOSTARA_EditCONT
{
	idd = 4550;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] spawn KIRA_fnc_initEditCont";
	onUnload = "";

	class controlsBackground
	{
		class fondEcran : life_RscPicture{
			idc = 4106;
			colorBackground[] = {0,0,0,0.7};
			text = "";
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class fondOpa : Life_RscText{
			colorBackground[] = {1,1,1,0.4};
			text = "";
			idc = -1;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class textName: Life_RscText{
			idc = -1;
			text = "Nom";
			type = CT_STATIC;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.7};
			x = xtel; y = (ytel + (0.355 - (1/25) - 0.01));
			w = 0.4; h = (1/25);
		};

		class textNum: Life_RscText{
			idc = -1;
			text = "Numero";
			type = CT_STATIC;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.7};
			x = xtel; y = (ytel + (0.555 - (1/25) - 0.01));
			w = 0.4; h = (1/25);
		};

		class textColor: Life_RscText{
			idc = -1;
			text = "Couleur";
			type = CT_STATIC;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.7};
			x = xtel; y = (ytel + (0.755 - (1/25) - 0.01));
			w = 0.4; h = (1/25);
		};

		class MainBackground : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack-App.paa";
			x = xtel;
			y = ytel;
			w = 0.4;
			h = 1.1;
			moving = 1;
		};
	};
	class controls {

		class iconContact : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			text = "\kira_assets\texture\contact.paa";
			x = xtel+0.025;
			y = ytel + 0.128;
			w = 0.035;
			h = 0.05;
		};

		class textIcon: Life_RscText{
			idc = -1;
			text = "Modifier un contact";
			colorBackground[] = {0,0,0,0};
			x = xtel+ 0.06;
			y = ytel + 0.128;
			sizeEx = (1/25);
			w = 0.4;
			h = (1/25);
		};
		class editName: Life_RscEdit{
			idc = 4551;
			text = "";
			type = CT_EDIT;
			x = ((0.38 - (0.38 * 0.8)) / 2)+0.01; y = (ytel + 0.355);
			w = (0.38 * 0.8); h = (1/25);
		};

		class editNum: Life_RscStructuredText{
			idc = 4555;
			text = "";
			colorBackground[] = {0,0,0,1};
			x = ((0.38 - (0.38 * 0.8)) / 2)+0.01; y = (ytel + 0.555);
			w = (0.38 * 0.8); h = (1/25);
		};

		class lbColor: Life_RscCombo{
			idc = 4552;
			text = "";
			type = CT_COMBO;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.5};
			x = ((0.38 - (0.38 * 0.8)) / 2)+0.01; y = (ytel + 0.755);
			w = (0.38 * 0.8); h = (1/25);
		};

		//bouton save
		class saveNoMouse : Life_RscButtonKiraMenu03x03 {
			idc = 4553;
			TextureNoShortcut = "\kira_assets\texture\saveNoMouse.paa";
			//onMouseEnter = "[4553,[4100,4102,4104,4553],[4101,4103,4105,4554]] spawn KIRA_fnc_hideCtrl;";
			onMouseEnter = "ctrlshow[4554,true];ctrlshow[4553,false];";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "";
			w = "0.03";
			h = "0.05";
		};
		class saveMouse : Life_RscButtonKiraMenu03x03 {
			idc = 4554;
			TextureNoShortcut = "\kira_assets\texture\saveMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4553],[4101,4103,4105,4554]] call KIRA_fnc_hideAllCtrl;";
			onMouseExit = "ctrlshow[4553,true];ctrlshow[4554,false];";
			onButtonClick = "call KIRA_fnc_editContact";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "";
			w = "0.03";
			h = "0.05";
		};

		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104],[4101,4103,4105]] call KIRA_fnc_hideAllCtrl";
			onButtonClick = "CloseDialog 0";
			x = xtel + 0.05;
			y = ytel + 1.025;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104],[4101,4103,4105]] call KIRA_fnc_hideAllCtrl";
			onButtonClick = "CloseDialog 0;[] spawn KIRA_fnc_initSmart;";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\PowerNoMouse.paa";
			////onMouseExit = "[[4100,4102,4104],[4101,4103,4105]] call KIRA_fnc_hideAllCtrl";
			onButtonClick = "[] spawn KIRA_fnc_powerOFF";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};
	};
};

class DOSTARA_PARAMETRE
{
	idd = 4650;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] spawn KIRA_fnc_initSetting";
	onUnload = "thisBackground = nil";

	class controlsBackground
	{
		class fondEcran : life_RscPicture{
			idc = 4106;
			colorBackground[] = {0,0,0,0.7};
			text = "";
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class fondOpa : Life_RscText{
			colorBackground[] = {1,1,1,0.4};
			text = "";
			idc = -1;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class TextBG: Life_RscText{
			idc = -1;
			text = "Choisir Fond Ecran";
			type = CT_STATIC;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.7};
			x = xtel; y = (ytel + (0.355 - (1/25) - 0.01));
			w = 0.4; h = (1/25);
		};
		class TextAnonymous: Life_RscText{
			idc = -1;
			text = "Activer mode anonyme ?";
			type = CT_STATIC;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.7};
			x = xtel; y = (ytel + (0.555 - (1/25) - 0.01));
			w = 0.4; h = (1/25);
		};

		class textColor: Life_RscText{
			idc = -1;
			text = "Compte par Defaut";
			type = CT_STATIC;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.7};
			x = xtel; y = (ytel + (0.755 - (1/25) - 0.01));
			w = 0.4; h = (1/25);
		};
		class MainBackground : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack-App.paa";
			x = xtel;
			y = ytel;
			w = 0.4;
			h = 1.1;
			moving = 1;
		};
	};
	class controls {

		class iconContact : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			text = "\kira_assets\texture\contact.paa";
			x = xtel+0.025;
			y = ytel + 0.128;
			w = 0.035;
			h = 0.05;
		};

		class textIcon: Life_RscText{
			idc = -1;
			text = "Parametre";
			colorBackground[] = {0,0,0,0};
			x = xtel+ 0.06;
			y = ytel + 0.128;
			sizeEx = (1/25);
			w = 0.4;
			h = (1/25);
		};

		class lbAno: Life_RscCombo{
			idc = 4655;
			text = "";
			type = CT_COMBO;
			style = ST_CENTER;
			onLBSelChanged = "call KIRA_fnc_anonymeChange";
			x = ((0.38 - (0.38 * 0.8)) / 2)+0.01; y = (ytel + 0.555);
			w = (0.38 * 0.8); h = (1/25);
		};
		class lbBG: Life_RscCombo{
			idc = 4652;
			text = "";
			type = CT_COMBO;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.5};
			onLBSelChanged = "call KIRA_fnc_previewBG";
			x = ((0.38 - (0.38 * 0.8)) / 2)+0.01; y = (ytel + 0.355);
			w = (0.38 * 0.8); h = (1/25);
		};
		class lbBankAccounts: Life_RscCombo{
			idc = 4656;
			text = "";
			type = CT_COMBO;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.7};
			x = ((0.38 - (0.38 * 0.8)) / 2)+0.01; y = (ytel + 0.755);
			w = (0.38 * 0.8); h = (1/25);
		};
		//bouton save
		class saveNoMouse : Life_RscButtonKiraMenu03x03 {
			idc = 4653;
			TextureNoShortcut = "\kira_assets\texture\saveNoMouse.paa";
			//onMouseEnter = "[4553,[4100,4102,4104,4553],[4101,4103,4105,4554]] spawn KIRA_fnc_hideCtrl;";
			onMouseEnter = "ctrlshow[4554,true];ctrlshow[4553,false];";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "";
			w = "0.03";
			h = "0.05";
		};
		class saveMouse : Life_RscButtonKiraMenu03x03 {
			idc = 4654;
			TextureNoShortcut = "\kira_assets\texture\saveMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4553],[4101,4103,4105,4554]] call KIRA_fnc_hideAllCtrl;";
			onMouseExit = "ctrlshow[4553,true];ctrlshow[4554,false];";
			onButtonClick = "[] call KIRA_fnc_saveSettings";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "";
			w = "0.03";
			h = "0.05";
		};

		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4553],[4101,4103,4105,4554]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "CloseDialog 0";
			x = xtel + 0.05;
			y = ytel + 1.025;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4553],[4101,4103,4105,4554]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "CloseDialog 0;[] spawn KIRA_fnc_initSmart;";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\PowerNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4553],[4101,4103,4105,4554]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "[] spawn KIRA_fnc_powerOFF";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};
	};
};

class DOSTARA_GPSNOSTUCK
{
	idd = 4850;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] spawn KIRA_fnc_initGPS";
	movingEnable = true;

	class controlsBackground
	{
		class fondEcran : life_RscPicture{
			idc = 4106;
			colorBackground[] = {0,0,0,0.7};
			text = "";
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class fondOpa : Life_RscText{
			colorBackground[] = {0,0,0,0.4};
			text = "";
			idc = -1;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};
		class MainBackground : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack-App.paa";
			x = xtel;
			y = ytel;
			w = 0.4;
			h = 1.1;
			moving = 1;
		};
	};
	class controls {
		class iconGPS : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			text = "\kira_assets\texture\gps.paa";
			x = xtel+0.025;
			y = ytel + 0.128;
			w = 0.035;
			h = 0.05;
		};

		class textIcon: Life_RscText{
			idc = -1;
			text = "GPS";
			colorBackground[] = {0,0,0,0};
			x = xtel+ 0.06;
			y = ytel + 0.128;
			sizeEx = (1/25);
			w = 0.4;
			h = (1/25);
		};
		class stuckOnUI : Life_RscButtonKiraMenu06x06 {
			idc = -1;
			TextureNoShortcut = "\kira_assets\texture\stuck.paa";
			onButtonClick = "call KIRA_fnc_stuckOnUI;";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 0.93;
			text = "";
			w = "0.06";
			h = "0.08";
		};
		class gps : Life_RscMapControl
		{

			idc = 4753;
			type = 101;
			style = 48;
			moveOnEdges = 0;
			x = (xtel + 0.025); y = (ytel + 0.18);
			w = 0.348; h = 0.75;
			onDraw = "_this call KIRA_fnc_loopPosGpsStuck";
		};

		//bouton save
		class saveNoMouse : Life_RscButtonKiraMenu03x03 {
			idc = 4751;
			TextureNoShortcut = "\kira_assets\texture\saveNoMouse.paa";
			//onMouseEnter = "[4553,[4100,4102,4104,4553],[4101,4103,4105,4554]] spawn KIRA_fnc_hideCtrl;";
			onMouseEnter = "ctrlshow[4752,true];ctrlshow[4751,false];";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "";
			w = "0.03";
			h = "0.05";
		};
		class saveMouse : Life_RscButtonKiraMenu03x03 {
			idc = 4752;
			TextureNoShortcut = "\kira_assets\texture\saveMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4553],[4101,4103,4105,4554]] call KIRA_fnc_hideAllCtrl;";
			onMouseExit = "ctrlshow[4751,true];ctrlshow[4752,false];";
			onButtonClick = "";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "";
			w = "0.03";
			h = "0.05";
		};
		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4553],[4101,4103,4105,4554]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "CloseDialog 0";
			x = xtel + 0.05;
			y = ytel + 1.025;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4553],[4101,4103,4105,4554]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "CloseDialog 0;[] spawn KIRA_fnc_initSmart;";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\PowerNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4553],[4101,4103,4105,4554]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "[] spawn KIRA_fnc_powerOFF";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};
	};
};

class DOSTARA_ADDCONV
{
	idd = 4900;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] spawn KIRA_fnc_initAddConversation;ctrlshow[4903,false]";
	
	class controlsBackground
	{	
		class fondEcran : life_RscPicture{
			colorBackground[] = {0,0,0,0.7};
			text = "";
			idc = 4106;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};
		class fondOpa : Life_RscText{
			colorBackground[] = {0,0,0,0.4};
			text = "";
			idc = -1;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class MainBackground : life_RscPicture{
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack-app.paa";
			idc = -1;
			x = xtel; y = ytel;
			w = 0.4; h = 1.1;
			moving = 1;
		};
	};
	class controls {

		class iconMessage : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			text = "\kira_assets\texture\messageIcon.paa";
			x = xtel+0.025;
			y = ytel + 0.128;
			w = 0.035;
			h = 0.05;
		};

		class textIcon: Life_RscText{
			idc = -1;
			text = "Choisir destinataire";
			colorBackground[] = {0,0,0,0};
			x = xtel+ 0.06;
			y = ytel + 0.128;
			sizeEx = (1/25);
			w = 0.4;
			h = (1/25);
		};

		class contacts: Life_RscListNBox {
			idc = 4901;
			type = CT_LISTBOX;
			style = ST_CENTER;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			onLBSelChanged = "call KIRA_fnc_selectConv";
			x = (xtel + 0.025); y = (ytel + 0.18);
			w = 0.348; h = 0.833;
			colorBackground[] = {0,0,0,0.7};
		};
		
		class openNoMouse : Life_RscButtonKiraMenu03x03 {
			idc = 4902;
			TextureNoShortcut = "\kira_assets\texture\openNoMouse.paa";
			onMouseEnter = "ctrlshow[4903,true];ctrlshow[4902,false]";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "Banque";
			w = "0.03";
			h = "0.05";
		};

		class openMouse : Life_RscButtonKiraMenu03x03 {
			idc = 4903;
			TextureNoShortcut = "\kira_assets\texture\openMouse.paa";
			onMouseExit = "ctrlshow[4903,false];ctrlshow[4902,true]";
			onButtonClick = "createDialog ""DOSTARA_CONVERSATION"";";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "Banque";
			w = "0.03";
			h = "0.05";
		};

		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			onButtonClick = "CloseDialog 0";
			x = xtel + 0.05;
			y = ytel + 1.025;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			onButtonClick = "CloseDialog 0;[] spawn KIRA_fnc_initSmart;";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\PowerNoMouse.paa";
			onButtonClick = "[] spawn KIRA_fnc_powerOFF";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};
	};
};

class DOSTARA_CONVERSATION
{
	idd = 4920;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] spawn KIRA_fnc_initConversation";
	onUnLoad = "xNext = nil;yEcart=nil";
	
	class controlsBackground
	{	
		class fondEcran : life_RscPicture
		{
			colorBackground[] = {0,0,0,0.7};
			text = "";
			idc = 4106;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};
		class fondOpa : Life_RscText
		{
			colorBackground[] = {0,0,0,0.4};
			text = "";
			idc = -1;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class MainBackground : life_RscPicture{
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack-app.paa";
			idc = -1;
			x = xtel; y = ytel;
			w = 0.4; h = 1.1;
			moving = 1;
		};
	};
	class controls {

		class iconMessage : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			text = "\kira_assets\texture\messageIcon.paa";
			x = xtel+0.025;
			y = ytel + 0.128;
			w = 0.035;
			h = 0.05;
		};

		class textIcon: Life_RscText{
			idc = 4922;
			text = "";
			colorBackground[] = {0,0,0,0};
			x = xtel+ 0.06;
			y = ytel + 0.128;
			sizeEx = (1/25);
			w = 0.4;
			h = (1/25);
		};

		class ListMessage: Life_RscControlsGroup {
			idc = 4921;
			x = (xtel + 0.025); y = (ytel + 0.18);
			w = 0.348; h = (0.18 + 0.7 - 0.155);
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			colorBackground[] = {1,1,1,0.7};

			class HScrollbar : HScrollbar {
			height = 0;
			};
			
			
			class controls {		
			};

		};
		
		class editMessage: Life_RscEdit {
			idc = 4939;
			x = (xtel + 0.025); y = (ytel + 0.18 + 0.7);
			w = 0.348; h = 0.133;
			type = CT_EDIT;
			style = ST_MULTI;
			autocomplete = "general";
			lineSpacing = (1/25);
			text = "";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			colorBackground[] = {0,0,0,0.7};

		};

		class sendMsg : Life_RscButtonKiraMenu03x04 {
			idc = 4947;
			TextureNoShortcut = "\kira_assets\texture\ico_send.paa";
			x = (xtel + 0.34 - 0.035);
			y = (ytel + 0.18 + 0.7 - 0.05);
			onButtonClick = "[] spawn KIRA_fnc_sendMsg";
			text = "return";
			w = "0.03";
			h = "0.045";
		};
		class emojis: Life_RscControlsGroup {
			idc = 4924;
			type = CT_CONTROLS_GROUP;
			x = (xtel + 0.025); y = (ytel + (0.88 + 0.045) - 0.137);
			w = 0.348; h = 0.09;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			colorBackground[] = {0,0,0,0.7};
			
			class controls {
				class fondEmojis : Life_RscText
				{
					colorBackground[] = {0,0,0,0.7};
					text = "";
					idc = -1;
					x = 0; y = 0;
					w = 0.348; h = 0.09;
				};
				class sourire : Life_RscButtonKiraMenu03x04 {
					idc = 4925;
					TextureNoShortcut = "\kira_assets\texture\emoji\sourire.paa";
					onButtonClick = "[4925] call KIRA_fnc_picToStr";
					x = 0;
					y = 0;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class angel : Life_RscButtonKiraMenu03x04 {
					idc = 4926;
					TextureNoShortcut = "\kira_assets\texture\emoji\angel.paa";
					onButtonClick = "[4926] call KIRA_fnc_picToStr";
					x = 0.03;
					y = 0;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class angry : Life_RscButtonKiraMenu03x04 {
					idc = 4927;
					TextureNoShortcut = "\kira_assets\texture\emoji\angry.paa";
					onButtonClick = "[4927] call KIRA_fnc_picToStr";
					x = 0.06;
					y = 0;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class clinoeil : Life_RscButtonKiraMenu03x04 {
					idc = 4928;
					TextureNoShortcut = "\kira_assets\texture\emoji\clinoeil.paa";
					onButtonClick = "[4928] call KIRA_fnc_picToStr";
					x = 0.09;
					y = 0;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class coeur : Life_RscButtonKiraMenu03x04 {
					idc = 4929;
					TextureNoShortcut = "\kira_assets\texture\emoji\coeur.paa";
					onButtonClick = "[4929] call KIRA_fnc_picToStr";
					x = 0.12;
					y = 0;
					text = "";
					w = "0.03";
					h = "0.045";
				};

				class coeurbrise : Life_RscButtonKiraMenu03x04 {
					idc = 4930;
					TextureNoShortcut = "\kira_assets\texture\emoji\coeurbrise.paa";
					onButtonClick = "[4930] call KIRA_fnc_picToStr";
					x = 0.15;
					y = 0;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class coeurcoeur : Life_RscButtonKiraMenu03x04 {
					idc = 4931;
					TextureNoShortcut = "\kira_assets\texture\emoji\coeurcoeur.paa";
					onButtonClick = "[4931] call KIRA_fnc_picToStr";
					x = 0.18;
					y = 0;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class cool : Life_RscButtonKiraMenu03x04 {
					idc = 4932;
					TextureNoShortcut = "\kira_assets\texture\emoji\cool.paa";
					onButtonClick = "[4932] call KIRA_fnc_picToStr";
					x = 0.21;
					y = 0;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class decu : Life_RscButtonKiraMenu03x04 {
					idc = 4933;
					TextureNoShortcut = "\kira_assets\texture\emoji\decu.paa";
					onButtonClick = "[4933] call KIRA_fnc_picToStr";
					x = 0.24;
					y = 0;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class devils : Life_RscButtonKiraMenu03x04 {
					idc = 4934;
					TextureNoShortcut = "\kira_assets\texture\emoji\devils.paa";
					onButtonClick = "[4934] call KIRA_fnc_picToStr";
					x = 0.27;
					y = 0;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class embarass : Life_RscButtonKiraMenu03x04 {
					idc = 4935;
					TextureNoShortcut = "\kira_assets\texture\emoji\embarass.paa";
					onButtonClick = "[4935] call KIRA_fnc_picToStr";
					x = 0.3;
					y = 0;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class hehe : Life_RscButtonKiraMenu03x04 {
					idc = 4936;
					TextureNoShortcut = "\kira_assets\texture\emoji\hehe.paa";
					onButtonClick = "[4936] call KIRA_fnc_picToStr";
					x = 0.18;
					y = 0.045;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class kiss : Life_RscButtonKiraMenu03x04 {
					idc = 4937;
					TextureNoShortcut = "\kira_assets\texture\emoji\kiss.paa";
					onButtonClick = "[4937] call KIRA_fnc_picToStr";
					x = 0.21;
					y = 0.045;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class larme : Life_RscButtonKiraMenu03x04 {
					idc = 4938;
					TextureNoShortcut = "\kira_assets\texture\emoji\larme.paa";
					onButtonClick = "[4938] call KIRA_fnc_picToStr";
					x = 0;
					y = 0.045;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class mdr : Life_RscButtonKiraMenu03x04 {
					idc = 4940;
					TextureNoShortcut = "\kira_assets\texture\emoji\mdr.paa";
					onButtonClick = "[4940] call KIRA_fnc_picToStr";
					x = 0.03;
					y = 0.045;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class ok : Life_RscButtonKiraMenu03x04 {
					idc = 4941;
					TextureNoShortcut = "\kira_assets\texture\emoji\ok.paa";
					onButtonClick = "[4941] call KIRA_fnc_picToStr";
					x = 0.06;
					y = 0.045;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class tirelangue : Life_RscButtonKiraMenu03x04 {
					idc = 4943;
					TextureNoShortcut = "\kira_assets\texture\emoji\tirelangue.paa";
					onButtonClick = "[4943] call KIRA_fnc_picToStr";
					x = 0.09;
					y = 0.045;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class triste : Life_RscButtonKiraMenu03x04 {
					idc = 4944;
					TextureNoShortcut = "\kira_assets\texture\emoji\triste.paa";
					onButtonClick = "[4944] call KIRA_fnc_picToStr";
					x = 0.12;
					y = 0.045;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class Zz : Life_RscButtonKiraMenu03x04 {
					idc = 4945;
					TextureNoShortcut = "\kira_assets\texture\emoji\Zz.paa";
					onButtonClick = "[4945] call KIRA_fnc_picToStr";
					x = 0.15;
					y = 0.045;
					text = "";
					w = "0.03";
					h = "0.045";
				};
				class closeEmojis : Life_RscButtonKiraMenu03x04 {
					idc = 4946;
					TextureNoShortcut = "\kira_assets\texture\emoji\letters.paa";
					onButtonClick = "ctrlshow[4924,false];ctrlshow[4923,true];";
					x = (0.348 - 0.03); y = 0.045;
					text = "";
					w = "0.03";
					h = "0.045";
				};
			};

		};
		class emoji : Life_RscButtonKiraMenu03x04 {
			idc = 4923;
			TextureNoShortcut = "\kira_assets\texture\emoji\sourire.paa";
			onButtonClick = "ctrlshow[4924,true];ctrlshow[4923,false];";
			
			x = xtel + 0.34;
			y = (ytel + 0.18 + 0.7 - 0.05);
			text = "Banque";
			w = "0.03";
			h = "0.045";
		};
		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			onButtonClick = "CloseDialog 0";
			x = xtel + 0.05;
			y = ytel + 1.025;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			onButtonClick = "CloseDialog 0;[] spawn KIRA_fnc_initSmart;";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\PowerNoMouse.paa";
			onButtonClick = "[] spawn KIRA_fnc_powerOFF";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};
	};
};

class DOSTARA_CONTRACTNOTAIRE
{
	idd = 6000;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "";
	onUnload = "";

	class controlsBackground
	{
		class backGroundPic: life_RscPicture
		{
			idc = 6001;
			text = "\kira_assets\texture\papierNotaire.paa";
			x = xPapier;
			y = yPapier;
			w = 1;
			h = 1.3;
		};
	};
	class controls {
		class proprietaire: life_RscEdit
		{
			idc = 6002;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "Papyrus";
			shadow = 0;
			x = xPapier + 0.43;
			y = yPapier + 0.23;
			w = 0.26;
			h = (1/25);
		};
		class beneficiaire: life_RscEdit
		{
			idc = 6003;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "Papyrus";
			shadow = 0;
			x = xPapier + 0.41;
			y = yPapier + 0.355;
			w = 0.26;
			h = (1/25);
		};
		class notaire: life_RscText
		{
			idc = 6004;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "Papyrus";
			sizeEx = 0.06;
			shadow = 0;
			x = xPapier + 0.43;
			y = yPapier + 0.475;
			w = 0.26;
			h = 0.06;
		};
		class signaturePrioritaire: life_RscButtonMenu
		{
			idc = 6006;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			onButtonClick = "call KIRA_fnc_sign";
			x = xPapier + 0.5;
			y = yPapier + 0.9;
			w = 0.2;
			h = 0.2;
		};
		class signatureEcritN: life_RscText
		{
			idc = 6007;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			shadow = 0;
			x = xPapier + 0.23;
			y = yPapier + 1;
			w = 0.25;
			h = (1/25);
		};
		class signatureEcritP: life_RscText
		{
			idc = 6008;
			text = "";
			colorBackground[] = {0,0,0,0};	
			colorText[] = {0,0,0,1};
			shadow = 0;
			x = xPapier + 0.48;
			y = yPapier + 0.95;
			w = 0.20;
			h = (1/25);
		};
	};
};


class DOSTARA_BANK
{
	idd = 5000;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] spawn KIRA_fnc_initBank";
	onUnload = "";

	class controlsBackground{
		class fondEcran : life_RscPicture{
			idc = 4106;
			colorBackground[] = {0,0,0,0.7};
			text = "";
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class fondOpa : Life_RscText{
			colorBackground[] = {1,1,1,0.4};
			text = "";
			idc = -1;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};
		class textName: Life_RscText
		{
			idc = -1;
			style = 2;
			text = "Vos Comptes :";
			x = xtel + 0;
			y = ytel + 0.3052;
			w = 0.4;
			h = 0.04;
			colorBackground[] = {0,0,0,0.7};
		};
		class textNum: Life_RscText
		{
			idc = -1;
			style = 2;
			text = "Envoyer a :";
			x = xtel + 0;
			y = ytel + 0.5052;
			w = 0.4;
			h = 0.04;
			colorBackground[] = {0,0,0,0.7};
		};
		class textColor: Life_RscText
		{
			idc = -1;
			style = 2;
			text = "Prix";
			x = xtel + 0;
			y = ytel + 0.7052;
			w = 0.4;
			h = 0.04;
			colorBackground[] = {0,0,0,0.7};
		};
		class MainBackground : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack-App.paa";
			x = xtel;
			y = ytel;
			w = 0.4;
			h = 1.1;
			moving = 1;
		};
	};
	class controls{
		class iconContact : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			text = "\kira_assets\texture\contact.paa";
			x = xtel+0.025;
			y = ytel + 0.128;
			w = 0.035;
			h = 0.05;
		};

		class textIcon: Life_RscText{
			idc = -1;
			text = "Transfert Banque";
			colorBackground[] = {0,0,0,0};
			x = xtel+ 0.06;
			y = ytel + 0.128;
			sizeEx = (1/25);
			w = 0.4 + 0.075;
			h = (1/25);
		};

		class listSender: Life_RscCombo
		{
			idc = 5002;
			x = xtel + 0.025;
			y = ytel + 0.36;
			w = 0.35;
			h = 0.04;
		};
		class listReceive: Life_RscCombo
		{
			idc = 5001;
			x = xtel + 0.025;
			y = ytel + 0.56;
			w = 0.3;
			h = 0.04;
		};
		class TextReceiver: Life_RscText
		{
			idc = 5003;
			x = xtel + 0.025;
			y = ytel + 0.62;
			w = 0.35;
			h = 0.04;
		};

		class addRepertoireAcc: Life_RscButtonKiraMenu06x06
		{
			TextureNoShortcut = "\kira_assets\texture\ico_add.paa";
			idc = -1;
			x = xtel + 0.32;
			y = ytel + 0.55;
			w = "0.06";
			h = "0.08";
			onButtonClick = "createDialog ""DOSTARA_AJOUTACCREP"";";
		};
		class removeAcc: Life_RscButtonKiraMenu06x06{
			TextureNoShortcut = "\kira_assets\texture\ico_del.paa";
			idc = -1;
			x = xtel + 0.32;
			y = ytel + 0.62;
			w = "0.06";
			h = "0.08";
			onButtonClick = "[lbData[5003,(lbCurSel 5003)],lbCurSel 5003] call KIRA_fnc_removeBankCont";
		};

		class textPrix: Life_RscEdit
		{
			idc = 5004;
			text = "";
			x = xtel + 0.048;
			y = ytel + 0.7552;
			w = 0.304;
			h = 0.04;
			colorBackground[] = {0,0,0,0.7};
		};

		class TransfertNoMouse : Life_RscButtonKiraMenu03x03 {
			idc = 5005;
			TextureNoShortcut = "\kira_assets\texture\TransfertNoMouse.paa";
			//onMouseEnter = "[4255,[4100,4102,4104,4255],[4101,4103,4105,4256]] spawn KIRA_fnc_hideCtrl;";
			onMouseEnter = "ctrlshow[5006,true];ctrlshow[5005,false];";
			x = xtel + 0.34;
			y = ytel + 0.123;
			text = "Transfert";
			w = "0.03";
			h = "0.05";
		};
		class TransfertMouse : Life_RscButtonKiraMenu03x03 {
			idc = 5006;
			TextureNoShortcut = "\kira_assets\texture\TransfertMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4255],[4101,4103,4105,4256]] call KIRA_fnc_hideAllCtrl;";
			onMouseExit = "ctrlshow[5005,true];ctrlshow[5006,false];";
			onButtonClick = "[] call KIRA_fnc_transfert";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "Transfert";
			w = "0.03";
			h = "0.05";
		};
		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4255],[4101,4103,4105,4256]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "CloseDialog 0";
			x = xtel + 0.05;
			y = ytel + 1.025;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4255],[4101,4103,4105,4256]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "CloseDialog 0;[] spawn KIRA_fnc_initSmart;";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 1.022;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\powerNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4255],[4101,4103,4105,4256]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "[] spawn KIRA_fnc_powerOFF";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 1.022;
			text = "return";
			w = "0.05";
			h = "0.07";
		};
	};
};


class DOSTARA_AJOUTACCREP
{
	idd = 5020;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] call KIRA_fnc_initAddRep";
	onUnload = "";

	class controlsBackground
	{
		class fondEcran : life_RscPicture{
			idc = 4106;
			colorBackground[] = {0,0,0,0.7};
			text = "";
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class fondOpa : Life_RscText{
			colorBackground[] = {1,1,1,0.4};
			text = "";
			idc = -1;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class textName: Life_RscText{
			idc = -1;
			text = "Nom du proprietaire :";
			type = CT_STATIC;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.7};
			x = xtel; y = (ytel + (0.355 - (1/25) - 0.01));
			w = 0.4; h = (1/25);
			moving = 1;
		};

		class textNum: Life_RscText{
			idc = -1;
			text = "Numero du compte :";
			type = CT_STATIC;
			style = ST_CENTER;
			colorBackground[] = {0,0,0,0.7};
			x = xtel; y = (ytel + (0.555 - (1/25) - 0.01));
			w = 0.4; h = (1/25);
		};
		class MainBackground : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack-App.paa";
			x = xtel;
			y = ytel;
			w = 0.4;
			h = 1.1;
			moving = 1;
		};
	};
	class controls {
		class iconContact : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			text = "\kira_assets\texture\contact.paa";
			x = xtel+0.025;
			y = ytel + 0.128;
			w = 0.035;
			h = 0.05;
		};

		class textIcon: Life_RscText{
			idc = -1;
			text = "Ajout contact bancaire";
			colorBackground[] = {0,0,0,0};
			x = xtel+ 0.06;
			y = ytel + 0.128;
			sizeEx = (1/25);
			w = 0.4;
			h = (1/25);
		};

		class editName: Life_RscEdit{
			idc = 5021;
			text = "";
			type = CT_EDIT;
			x = ((0.38 - (0.38 * 0.8)) / 2)+0.01; y = (ytel + 0.355);
			w = (0.38 * 0.8); h = (1/25);
		};

		class editNum: Life_RscEdit{
			idc = 5022;
			text = "";
			type = CT_EDIT;
			x = ((0.38 - (0.38 * 0.8)) / 2)+0.01; y = (ytel + 0.555);
			w = (0.38 * 0.8); h = (1/25);
		};

		//bouton save
		class saveNoMouse : Life_RscButtonKiraMenu03x03 {
			idc = 5023;
			TextureNoShortcut = "\kira_assets\texture\saveNoMouse.paa";
			//onMouseEnter = "[4255,[4100,4102,4104,4255],[4101,4103,4105,4256]] spawn KIRA_fnc_hideCtrl;";
			onMouseEnter = "ctrlshow[5024,true];ctrlshow[5023,false];";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "Banque";
			w = "0.03";
			h = "0.05";
		};
		class saveMouse : Life_RscButtonKiraMenu03x03 {
			idc = 5024;
			TextureNoShortcut = "\kira_assets\texture\saveMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4255],[4101,4103,4105,4256]] call KIRA_fnc_hideAllCtrl;";
			onMouseExit = "ctrlshow[5023,true];ctrlshow[5024,false];";
			onButtonClick = "call KIRA_fnc_addInBankRep";
			x = xtel + 0.34;
			y = ytel + 0.127;
			text = "Banque";
			w = "0.03";
			h = "0.05";
		};

		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4255],[4101,4103,4105,4256]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "CloseDialog 0";
			x = xtel + 0.05;
			y = ytel + 1.025;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4255],[4101,4103,4105,4256]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "CloseDialog 0;[] spawn KIRA_fnc_initSmart;";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 1.022;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\powerNoMouse.paa";
			//onMouseExit = "[[4100,4102,4104,4255],[4101,4103,4105,4256]] call KIRA_fnc_hideAllCtrl;";
			onButtonClick = "[] spawn KIRA_fnc_powerOFF";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 1.022;
			text = "return";
			w = "0.05";
			h = "0.07";
		};
	};
};
class DOSTARA_NEWPUBLI{
	idd = 6200;
	movingEnabled = false;
	enableSimulation = true;

	class controlsBackground{
		class Background: life_RscText
		{
			idc = -1;
			x = 0.075;
			y = 0.08;
			w = 0.825;
			h = 0.84;
			colorBackground[] = {0,0.41,0,0.7};
		};
		class Title: life_RscStructuredText
		{
			idc = -1;
			text = "<t align='center'> Nouvelle publication </t>"; 
			x = 0.075;
			y = 0.036;
			w = 0.825;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.7};
		};
	};

	class controls{
		class titleAnnonce: life_RscText
		{
			idc = -1;
			text = "Titre annonce :"; 
			x = 0.1;
			y = 0.12;
			w = 0.2;
			h = 0.04;
			colorBackground[] = {0,0,0,0};
		};
		class editTitle: life_RscEdit
		{
			idc = 6201;
			text = "";
			x = 0.28;
			y = 0.12;
			w = 0.575;
			h = 0.04;
		};
		class NomEntreprise: life_RscText
		{
			idc = -1;
			text = "Nom entreprise :"; 
			x = 0.1;
			y = 0.2;
			w = 0.2;
			h = 0.04;
			colorBackground[] = {0,0,0,0};
		};
		class NEnterprise: life_RscEdit
		{
			idc = 6202;
			text = "";
			x = 0.2625;
			y = 0.2;
			w = 0.575;
			h = 0.04;
		};
		class TopPrice: life_RscText
		{
			idc = -1;
			text = "Top prix :"; 
			x = 0.1;
			y = 0.28;
			w = 0.15;
			h = 0.04;
		};
		class topPrixText: life_RscText
		{
			idc = 6203;
			text = "";
			x = 0.2625;
			y = 0.28;
			w = 0.575;
			h = 0.04;
		};
		class prixSurplus: life_RscText
		{
			idc = -1;
			text = "Prix Surplus :"; 
			x = 0.1;
			y = 0.36;
			w = 0.2;
			h = 0.04;
		};
		class editSurplus: life_RscEdit
		{
			idc = 6204;
			text = "";
			x = 0.2625;
			y = 0.36;
			w = 0.575;
			h = 0.04;
		};
		class clrBG: life_RscText
		{
			idc = -1;
			text = "Couleur fond :"; 
			x = 0.1025;
			y = 0.44;
			w = 0.1375;
			h = 0.04;
		};
		class ComboClrBG: life_RscCombo
		{
			idc = 6205;
			text = "";
			x = 0.2625;
			y = 0.44;
			w = 0.2625;
			h = 0.04;
		};
		class ComboClrFont: life_RscCombo
		{
			idc = 6206;
			text = "";
			x = 0.2625;
			y = 0.52;
			w = 0.2625;
			h = 0.04;
		};
		class clrFont: life_RscText
		{
			idc = -1;
			text = "Couleur Police :"; 
			x = 0.1025;
			y = 0.52;
			w = 0.15;
			h = 0.04;
		};
		class msg: life_RscText
		{
			idc = -1;
			text = "Message :"; 
			x = 0.1;
			y = 0.6;
			w = 0.15;
			h = 0.04;
		};
		class msgEdit: life_RscEdit
		{
			idc = 6207;
			style = 16;
			type = CT_EDIT;
			text = "";
			x = 0.1125;
			y = 0.64;
			w = 0.75;
			h = 0.186993;
			colorBackground[] = {0,0,0,0.7};
		};
		class close: life_RscButtonMenu
		{
			idc = -1;
			text = "Fermer"; 
			x = 0.1;
			y = 0.86;
			w = 0.1125;
			h = 0.04;
		};
		class publi: life_RscButtonMenu
		{
			idc = -1;
			text = "Publier";
			onButtonClick = "call KIRA_fnc_publiAnnonce";
			x = 0.75;
			y = 0.86;
			w = 0.1125;
			h = 0.04;
		};
	};
};



class DOSTARA_ANNONCE{
	idd = 6100;
	movingEnabled = true;
	enableSimulation = true;
	onUnLoad = "xNextAds = nil;yEcartAds=nil";
	
	class controlsBackground{
		class fondEcran : life_RscPicture{
			colorBackground[] = {0,0,0,0.7};
			text = "";
			idc = 4106;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};
		class fondOpa : Life_RscText{
			colorBackground[] = {0,0,0,0.4};
			text = "";
			idc = -1;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class MainBackground : life_RscPicture{
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack-app.paa";
			idc = -1;
			x = xtel; y = ytel;
			w = 0.4; h = 1.1;
			moving = 1;
		};
	};
	class controls {
		class iconMessage : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			text = "\kira_assets\texture\InternetMouse.paa";
			x = xtel+0.025;
			y = ytel + 0.128;
			w = 0.035;
			h = 0.05;
		};

		class textIcon: Life_RscText{
			idc = -1;
			text = "Annonces";
			colorBackground[] = {0,0,0,0};
			x = xtel+ 0.06;
			y = ytel + 0.128;
			sizeEx = (1/25);
			w = 0.4;
			h = (1/25);
		};

		class ListMessage: Life_RscControlsGroup {
			idc = 6101;
			x = (xtel + 0.025); y = (ytel + 0.18);
			w = 0.348; h = (0.8);
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			colorBackground[] = {1,1,1,0.7};

			class HScrollbar : HScrollbar {
			height = 0;
			};
			class controls {		
			};

		};
		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			onButtonClick = "CloseDialog 0";
			x = xtel + 0.05;
			y = ytel + 1.025;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			onButtonClick = "CloseDialog 0;[] spawn KIRA_fnc_initSmart;";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\PowerNoMouse.paa";
			onButtonClick = "[] spawn KIRA_fnc_powerOFF";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 1.022;
			text = "";
			w = "0.05";
			h = "0.07";
		};
	};
};
class DOSTARA_NEWCONTRACTNOTAIRE
{
	idd = 5500;
	movingEnabled = true;
	enableSimulation = true;

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

	class controls {
		class Titre: life_RscText
		{
			idc = -1;
			text = "Nouveau Contrat"; 
			x = 0.175;
			y = 0.14;
			w = 0.6;
			h = 0.14;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {1,1,1,1};
			sizeEx = 0.145;
		};
		class nomClient: life_RscText
		{
			idc = -1;
			text = "Nom du Client :"; 
			x = 0.1375;
			y = 0.32;
			w = 0.15;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {1,1,1,1};
			sizeEx = 0.04;
		};
		class nomCl: life_RscText
		{
			idc = 5501;
			text = "";
			x = 0.3;
			y = 0.32;
			w = 0.5375;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			sizeEx = 0.04;
		};
		class AmountTotal: life_RscText
		{
			idc = -1;
			text = "Montant prix :"; 
			x = 0.1375;
			y = 0.4;
			w = 0.15;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			sizeEx = 0.04;
		};
		class description: life_RscText
		{
			idc = -1;
			text = "Description :"; 
			x = 0.1375;
			y = 0.48;
			w = 0.15;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			sizeEx = 0.04;
		};
		class amountTotalEdit: life_RscEdit
		{
			idc = 5502;
			text = "";
			x = 0.2875;
			y = 0.4;
			w = 0.55;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			sizeEx = 0.04;
		};

		class descriptionEdit: life_RscEdit
		{
			idc = 5503;
			text = "";
			style = 16;
			type = CT_EDIT;
			x = 0.125;
			y = 0.54;
			w = 0.725;
			h = 0.22;
		};
		class closeBtn: life_RscButtonMenu
		{
			idc = -1;
			text = "Fermer";
			onButtonClick = "CloseDialog 0;";
			x = 0.125;
			y = 0.78;
			w = 0.1375;
			h = 0.04;
		};
		class ctnToContract: life_RscButtonMenu
		{
			idc = -1;
			text = "Contrat"; 
			onButtonClick = "[ctrlText 5502,ctrlText 5503,ctrlText 5501] call KIRA_fnc_contractNotaire";
			x = 0.725;
			y = 0.78;
			w = 0.125;
			h = 0.04;
		};
	};
};

class DOSTARA_BOURSE
{
	idd = 5600;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] call KIRA_fnc_initBourse";
	
	class controlsBackground
	{	
		class fondEcran : life_RscPicture
		{
			colorBackground[] = {0,0,0,0.7};
			text = "";
			idc = 4106;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};
		class fondOpa : Life_RscText
		{
			colorBackground[] = {0,0,0,0.4};
			text = "";
			idc = -1;
			x = xtel+0.01; y = ytel+0.049;
			w = 0.38; h = 0.98;
		};

		class MainBackground : life_RscPicture{
			colorBackground[] = {0,0,0,0.5};
			text = "\kira_assets\texture\BackgroundBlack-app.paa";
			idc = -1;
			x = xtel; y = ytel;
			w = 0.4; h = 1.1;
			moving = 1;
		};
	};
	class controls {

		class iconBourse : life_RscPicture{
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			text = "\kira_assets\texture\marketMouse.paa";
			x = xtel+0.025;
			y = ytel + 0.128;
			w = 0.035;
			h = 0.05;
		};

		class textIcon: Life_RscText{
			idc = 5601;
			text = "";
			colorBackground[] = {0,0,0,0};
			x = xtel+ 0.06;
			y = ytel + 0.128;
			sizeEx = (1/25);
			w = 0.4;
			h = (1/25);
		};

		class bourse: Life_RscListNBox {
			idc = 5602;
			type = CT_LISTBOX;
			style = ST_CENTER;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			onLBSelChanged = "call KIRA_fnc_selectConv";
			x = (xtel + 0.025); y = (ytel + 0.18);
			w = 0.348; h = 0.83;
			colorBackground[] = {0,0,0,0.7};
		};

		class returnMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4101;
			TextureNoShortcut = "\kira_assets\texture\returnNoMouse.paa";
			//onMouseExit = "[[4152,4100,4102,4104],[4153,4101,4103,4105]] call KIRA_fnc_hideAllCtrl";
			onButtonClick = "CloseDialog 0";
			x = xtel + 0.05;
			y = ytel + 1.025;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

		class homeMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4103;
			TextureNoShortcut = "\kira_assets\texture\homeNoMouse.paa";
			//onMouseExit = "[[4152,4100,4102,4104],[4153,4101,4103,4105]] call KIRA_fnc_hideAllCtrl";
			onButtonClick = "CloseDialog 0;[] spawn KIRA_fnc_initSmart;";
			x = xtel + (0.38/2) - 0.02;
			y = ytel + 1.022;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

		class powerMouse : Life_RscButtonKiraMenu04x04 {
			idc = 4105;
			TextureNoShortcut = "\kira_assets\texture\PowerNoMouse.paa";
			//onMouseExit = "[[4152,4100,4102,4104],[4153,4101,4103,4105]] call KIRA_fnc_hideAllCtrl";
			onButtonClick = "[] spawn KIRA_fnc_powerOFF";
			x = xtel + 0.38 - (0.38/4);
			y = ytel + 1.022;
			text = "return";
			w = "0.05";
			h = "0.07";
		};

	};
};
#include "dialog\shop_items.hpp"
#include "dialog\gang.hpp"
#include "dialog\key_chain.hpp"
#include "dialog\impound.hpp"
#include "dialog\bank.hpp"
#include "dialog\veh_shop.hpp"
#include "dialog\shops.hpp"
#include "dialog\ticket.hpp"
#include "dialog\clothing.hpp"
#include "dialog\trunk.hpp"
#include "dialog\spawnSelection.hpp"
#include "dialog\chop_shop.h"
#include "dialog\pInteraction.h"
#include "dialog\deathScreen.h"
#include "dialog\vehicleShop.h"
#include "dialog\settings.h"
#include "dialog\federalReserve.h"
#include "dialog\fourriere.hpp"
#include "dialog\dynmarket_changeprice.hpp"
#include "dialog\dynmarket_prices.hpp"
#include "dialog\impot.hpp"
#include "dialog\banque.hpp"
#include "dialog\fuelStat.hpp"
#include "dialog\ListMurder.hpp"
#include "dialog\FormulaireAssasin.hpp"
#include "dialog\RequestMenu.hpp"
#include "dialog\call.hpp"
#include "dialog\gestionAccount.hpp"