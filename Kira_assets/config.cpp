class CfgPatches
{
	class Kira_assets{
		requiredVersion = 0.1;
		requiredAddons[] = {"Kira_Sound"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgFunctions
{
	class KIRA
	{
		class functions
		{
			file="Kira_assets\functions";
			class antiHacker;
			class flicReceived;
			class getColorContact;
			class HBuyVPN;
			class HCallFlics;
			class HChanceDetect;
			class HCheckNear;
			class HCloseTerminal;
			class Hcommand;
			class HkeyHACK;
			class HopenTerminal;
			class HPhonePlayer;
			class HPhonePlayerShow;
			class HPosGPS;
			class HRadioPlayer;
			class HScanAnim;
			class HSelectPlayer;
			class HShowListNear;
			class hideCtrl;
			class select;
			class selectContact;
			class powerOFF;
			class hideAllCtrl;
			class editContact;
			class saveContact;
			class showRepertoire;
			class removeContact;
			class saveSettings;
			class previewBG;
			class anonymeChange;
			class checkGpsClosed;
			class stuckOnUI;
			class loopPosGpsStuck;
			class selectConv;
			class initMsg;
			class initBank;
			class initAddCont;
			class initRepertoire;
			class initEditCont;
			class initSmart;
			class initSetting;
			class initGPS;
			class initAddConversation;
			class initConversation;
			class initCreatNotCtrt;
			class deQui;
			class sizePic;
			class cfgEm;
			class strToPic;
			class picToStr;
			class sendMsg;
			class removeConv;
			class fetchRepertoire;
			class numToUnit;
			class addMsg;
			class receivedMsg;
			class peterMalade;
			class refreshList;
			class inRepBank;
			class inventoryOpened;
			class inventoryClosed;
			class addInBankRep;
			
			class contractNotaire;
			class giveTestament;
			class receiveTestament;
			class waitUntilBothSign;
			class sign;


			class initAdsPage;
			class publiAnnonce;
			class showAnnonce;
			class sortArray;
		};
	};
};

class CfgMarkerClasses{
	class kira_marker
	{
		displayName = "Kira marqueurs (Assets)";
	};
};

class CfgMarkers{
	class kiraContactPos
	{
		name = "Contact";
		icon = "\Kira_assets\markers\contact.pac";
		color[] = {1,1,1,1};
		size = 64;
		scope = 2;
		scopeCurator = 2;
		shadow = 1;
		markerClass = "kira_marker";
	};

	class kiraCar : kiraContactPos
	{
		name = "Car";
		icon = "\Kira_assets\markers\car.pac";
	};

	class kiraCity : kiraContactPos
	{
		name = "City";
		icon = "\Kira_assets\markers\city.pac";
	};

	class kiraShield : kiraContactPos
	{
		name = "Shield";
		icon = "\Kira_assets\markers\shield.pac";
	};

	class kiraTravaux : kiraContactPos
	{
		name = "Travaux";
		icon = "\Kira_assets\markers\travaux.pac";
	};

	class kiraWarning : kiraContactPos
	{
		name = "Warning";
		icon = "\Kira_assets\markers\warning.pac";
	};

	class kiraAlarm : kiraContactPos
	{
		name = "Alarm";
		icon = "\Kira_assets\markers\alarm.pac";
	};

	class kiraFire : kiraContactPos
	{
		name = "Fire";
		icon = "\Kira_assets\markers\fire.pac";
	};
};