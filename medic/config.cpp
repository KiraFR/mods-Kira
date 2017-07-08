class CfgPatches
{
	class Medic_clothing
	{
		units[]=
		{
			"I_soldier_F",
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_characters_f_beta",
			"A3_Characters_F"
		};
	};
};
class CfgVehicles
{
	class I_soldier_F;
	class Medic_01: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=2;
		nakedUniform="U_BasicBody";
		uniformClass="Kronos_Medic_01";
		model="\A3\characters_f\Common\pilot_f.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Medic\Textures\Uni_Medic_co.paa"
		};
		displayName="Uniforme Médic";
		author="Nefron Maverick";

	};
	class B_RangeMaster_F;
	class Medic_02: B_RangeMaster_F
	{
		_generalMacro="B_RangeMaster_F";
		scope=2;
		nakedUniform="U_BasicBody";
		uniformClass="Kronos_Medic_02";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Medic\Textures\UNIFORME_RECRUE_SIM.paa"
		};
		displayName="Uniforme Recrue Médic";
		author="Nefron Maverick";

	};
class B_Kitbag_mcamo;
class SIM_SAC: B_Kitbag_mcamo
{
	author="Nefron Maverick";
		displayName="Sac a dos SIM";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Medic\Textures\Sac_SIM.paa"
		};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class ItemCore;
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class Kronos_Medic_01: Uniform_Base
	{
		scope=2;
		displayName="Uniforme de Medic";
		picture="\Medic\data\ico.paa";
		model="\A3\Characters_F\Common\pilot_f.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Medic_01";
			containerClass="Supply20";
			mass=40;

		};
  };
	class U_Rangemaster;
	class Kronos_Medic_02: U_Rangemaster
	{
		scope=2;
		displayName="Uniforme de Recrue Medic";
		picture="\Medic\data\ico.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Medic_02";
			containerClass="Supply20";
			mass=40;

		};
  };
	class H_PilotHelmetHeli_B;
	class KronosD_Medic_helmet: H_PilotHelmetHeli_B
	{
		_generalMacro="H_Cap_blk";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Casque du SIM";
		picture="\Medic\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Medic\Textures\SIM_Helmet.paa"
		};
	};
	class H_Cap_blk;
	class KronosD_Medic_Caquette: H_Cap_blk
	{
		_generalMacro="H_Cap_blk";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Casquette Recrue SIM";
		picture="\Medic\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Medic\Textures\Casquette.paa"
		};
	};
	class H_Watchcap_blk;
	class KronosD_Medic_BR: H_Watchcap_blk
	{
		_generalMacro="H_Cap_blk";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Bonnet Rouge du SIM";
		picture="\Medic\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Medic\Textures\rouge.paa"
		};
	};
	class KronosD_Medic_BN: H_Watchcap_blk
	{
		_generalMacro="H_Cap_blk";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Bonnet Noir SIM";
		picture="\Medic\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Medic\Textures\noir.paa"
		};
	};
	class KronosD_Medic_BBLEU: H_Watchcap_blk
	{
		_generalMacro="H_Cap_blk";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Bonnet Bleu du SIM";
		picture="\Medic\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Medic\Textures\blue.paa"
		};
	};
	class KronosD_Medic_BL: H_Watchcap_blk
	{
		_generalMacro="H_Cap_blk";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Bonnet Lilla du SIM";
		picture="\Medic\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Medic\Textures\lilla.paa"
		};
	};
	class KronosD_Medic_BBLANC: H_Watchcap_blk
	{
		_generalMacro="H_Cap_blk";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Bonnet Blanc du SIM";
		picture="\Medic\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Medic\Textures\blanc.paa"
		};
	};
};
