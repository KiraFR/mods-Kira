#include "basicdefines_A3.hpp"

class CfgPatches
{
	class POLICE_GDO_clothing
	{
		units[]=
		{
			"I_soldier_F",
			"I_Soldier_TL_F"
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
class cfgWeapons
{
	class Uniform_Base;
	class ItemCore;
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class U_I_CombatUniform_shortsleeve;
	class Kronos_Police_01: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Uniforme Recrue de Police";
		picture="\POLICE_GDO\data\ico.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Police_01";
			containerClass="Supply20";
			mass=40;

		};

	};
	class Kronos_Police_02: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Uniforme Officier de Police";
		picture="\POLICE_GDO\data\ico.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Police_02";
			containerClass="Supply20";
			mass=40;

		};

	};
	class Kronos_Police_03: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Uniforme Sergent de Police";
		picture="\POLICE_GDO\data\ico.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Police_03";
			containerClass="Supply20";
			mass=40;

		};

	};
	class Kronos_Police_04: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Uniforme Lieutenant de Police";
		picture="\POLICE_GDO\data\ico.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Police_04";
			containerClass="Supply20";
			mass=40;

		};

	};
	class Kronos_Police_05: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Uniforme Capitaine de Police";
		picture="\POLICE_GDO\data\ico.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Police_05";
			containerClass="Supply20";
			mass=40;

		};
	};
	class Kronos_Police_06: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Uniforme Commandant de Police";
		picture="\POLICE_GDO\data\ico.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Police_06";
			containerClass="Supply20";
			mass=40;

		};

	};
	class Kronos_Police_07: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Uniforme Adj-Commisaire de Police";
		picture="\POLICE_GDO\data\ico.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Police_07";
			containerClass="Supply20";
			mass=40;

		};

	};
	class Kronos_Police_08: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Uniforme Commissaire de Police";
		picture="\POLICE_GDO\data\ico.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Police_08";
			containerClass="Supply20";
			mass=40;
		};

	};
	class U_B_CombatUniform_mcam;
	class Kronos_Uniform_GDO: U_B_CombatUniform_mcam
	{
		scope=2;
		displayName="Uniforme GDO";
		picture="\POLICE_GDO\data\ico.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Police_09";
			containerClass="Supply20";
			mass=40;

		};
	};
	class V_PlateCarrier1_blk;
	class KronosD_GDO_vest_01: V_PlateCarrier1_blk
	{
		_generalMacro="V_PlateCarrier1_blk";
		scope=2;
		displayName="Veste GDO";
		picture="\POLICE_GDO\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\GDOV.paa"
		};
    };
    class KronosD_POLICE_vest_02: V_PlateCarrier1_blk
	{
		_generalMacro="V_PlateCarrierIA2_dgtl";
		scope=2;
		displayName="Gilet HG";
		picture="\POLICE_GDO\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\GiletHG.paa"
		};
	};
	class V_PlateCarrierSpec_blk;
	class KronosD_GDO_vest_02: V_PlateCarrierSpec_blk
	{
		_generalMacro="V_PlateCarrierSpec_blk";
		scope=2;
		displayName="Veste Lourde du GDO";
		picture="\POLICE_GDO\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\Vest_Loudre_GDO.paa"
		};
    };
    class Vest_Camo_Base;
	class KronosD_POLICE_vest_01: Vest_Camo_Base
	{
		_generalMacro="V_PlateCarrier1_blk";
		scope=2;
		displayName="Gilet Et Ceinture";
		picture="\POLICE_GDO\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\data\TextureGilet.paa"
		};
		model="\POLICE_GDO\Vest";
		class ItemInfo: VestItem
		{
			uniformModel="\POLICE_GDO\Vest";
			containerClass="Supply120";
			LOAD(40,100)
			hiddenSelections[]=
			{
				"camo"
			};
		class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=50;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=50;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.1;
				};
			};
		};
	};
	class H_CrewHelmetHeli_B;
	class KronosD_Casque_Police_Pilote: H_CrewHelmetHeli_B
	{
		_generalMacro="H_HelmetB_light_black";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Casque De Pilote de Police";
		picture="\POLICE_GDO\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\POLICE_Helmet.paa"
		};
	};
	class KronosD_Casque_NFLOL: H_CrewHelmetHeli_B
	{
		_generalMacro="H_HelmetB_light_black";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Casque De Pilote de Police";
		picture="\POLICE_GDO\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\POLICE_NFLOL.paa"
		};
	};
	class H_HelmetB_light;
	class KronosD_Casque_GDO_01: H_HelmetB_light
	{
		_generalMacro="H_HelmetB_light_black";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Casque Du GDO";
		picture="\POLICE_GDO\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\CasqueGDO.paa"
		};
	};
	class H_Cap_police;
	class KronosD_Police_cap_01: H_Cap_police
	{
		_generalMacro="H_Cap_blk";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Casquette de Police";
		picture="\POLICE_GDO\data\ico.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\CPOLICE.paa"
		};
	};
};
class CfgVehicles
{
	class I_soldier_F;
	class Police_01: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=2;
		nakedUniform="U_BasicBody";
		uniformClass="Kronos_Police_01";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\premierGrade.paa"
		};
		displayName="Uniforme Recrue/Cadet de Police";
		author="KronosD";

	};
	class Police_02: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=2;
		nakedUniform="U_BasicBody";
		uniformClass="Kronos_Police_02";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\Policeofficer.paa"
		};
		displayName="Uniforme Officier de Police";
		author="KronosD";

	};
	class Police_03: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=2;
		nakedUniform="U_BasicBody";
		uniformClass="Kronos_Police_03";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\Sergent.paa"
		};
		displayName="Uniforme Sergent de Police";
		author="KronosD";

	};
	class Police_04: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=2;
		nakedUniform="U_BasicBody";
		uniformClass="Kronos_Police_04";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\Lieutenant.paa"
		};
		displayName="Uniforme Lieutenant de Police";
		author="KronosD";

	};
	class Police_05: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=2;
		nakedUniform="U_BasicBody";
		uniformClass="Kronos_Police_05";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\Captain.paa"
		};
		displayName="Uniforme Officier de Police";
		author="KronosD";

	};
	class Police_06: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=2;
		nakedUniform="U_BasicBody";
		uniformClass="Kronos_Police_06";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\Commandant.paa"
		};
		displayName="Uniforme Officier de Police";
		author="KronosD";

	};
	class Police_07: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=2;
		nakedUniform="U_BasicBody";
		uniformClass="Kronos_Police_07";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\Adj_Commi.paa"
		};
		displayName="Uniforme Officier de Police";
		author="KronosD";

	};
	class Police_08: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=2;
		nakedUniform="U_BasicBody";
		uniformClass="Kronos_Police_08";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\POLICE_GDO\textures\Commisaire.paa"
		};
		displayName="Uniforme Officier de Police";
		author="KronosD";

	};
	class B_Soldier_F;
	class Police_09: B_Soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		nakedUniform="U_BasicBody";
		uniformClass="Kronos_Uniform_GDO";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
		  "Camo"
		};
		hiddenSelectionsTextures[]=
		{
		  "\POLICE_GDO\textures\GDO.paa"
		};
		displayName="Uniforme GDO";
		author="KronosD";

		};
	};
