class CfgPatches
{
	class army_dostara_clothing
	{
		units[]={};
		weapons[]={};
		version=1.6;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"mas_weapons_pack"
		};
		author[]=
		{
			"KronosD"
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
	class U_I_CombatUniform_shortsleeve;
	class U_Army_Uniforme: U_I_CombatUniform_shortsleeve
	{
		author="KronosD";
		displayName="Uniforme Armée";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\Army_Dostara\textures\Camo_Acu.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="D_Army_Uniforme";
			containerClass="Supply20";
			mass=20;
		};
	};
	class U_I_CombatUniform;
	class U_Army_Pilote: U_I_CombatUniform
	{
		author="KronosD";
		displayName="Tenue Pilote Armée";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\Army_Dostara\textures\Camo_Acu.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="D_Army_Pilote";
			containerClass="Supply20";
			mass=20;
		};
	};
	class U_I_OfficerUniform;
	class U_Army_UniformeHg: U_I_OfficerUniform
	{
		author="KronosD";
		displayName="Tenue Hauts Grades Armée";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Army_Dostara\textures\Fuhrer_Uniforme.paa",
			"\Army_Dostara\textures\Camo_Acu.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="D_Army_UniformeHg";
			containerClass="Supply20";
			mass=20;
		};
	};
	class V_PlateCarrier1_blk;
	class V_Army_Acu: V_PlateCarrier1_blk
	{
		author="KronosD";
		displayName="Gilet Acu  Armée";
		hiddenSelectionsTextures[]=
		{
			"\Army_Dostara\textures\Vest_Army_Light_Acu.paa"
		};
	};
	class V_PlateCarrierIAGL_oli;
	class V_Army_Heavy_Acu: V_PlateCarrierIAGL_oli
	{
		author="KronosD";
		displayName="Gilet Lourd Acu Armée";
		hiddenSelectionsTextures[]=
		{
			"\Army_Dostara\textures\Vest_Army_Acu.paa",
			"\Army_Dostara\textures\Vest_Army_Acu.paa"
		};
	};
	class H_HelmetIA;
	class B_Army_Helmet: H_HelmetIA
	{
		author="KronosD";
		displayName="Casque Armée";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Army_Dostara\textures\Casque_Army.paa"
		};
	};
};
class CfgVehicles
{
	class I_soldier_F;
	class D_Army_Uniforme: I_soldier_F
	{
		author="KronosD";
		displayName="Uniforme Armée";
		_generalMacro="D_Army_Uniforme";
		uniformClass="U_Army_Uniforme";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelectionsTextures[]=
		{
			"\Army_Dostara\textures\Camo_Acu.paa"
		};
	};
	class D_Army_Pilote: I_soldier_F
	{
		author="KronosD";
		displayName="Pilote Armée";
		_generalMacro="D_Army_Pilote";
		uniformClass="U_Army_Pilote";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelectionsTextures[]=
		{
			"\Army_Dostara\textures\Camo_Acu.paa"
		};
	};
	class I_officer_F;
	class D_Army_UniformeHg: I_officer_F
	{
		author="KronosD";
		displayName="Hauts Gradés Armé";
		_generalMacro="D_Army_UniformeHg";
		uniformClass="U_Army_UniformeHg";
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Army_Dostara\textures\Fuhrer_Uniforme.paa",
			"\Army_Dostara\textures\Camo_Acu.paa"
		};
	};
	class B_Kitbag_mcamo;
	class B_Army_Sac: B_Kitbag_mcamo
	{
		author="KronosD";
		displayName="Sac a dos Acu";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Army_Dostara\textures\Army_sac.paa"
		};
	};
};
class cfgMods
{
	author="76561198051885600";
};
