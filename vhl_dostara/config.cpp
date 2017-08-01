class CfgPatches
{
	class VHL_Dostara
	{
		version=1.6;
		units[]={};
		requiredAddons[]=
		{
			"A3_Characters_F",
			"mas_weapons_pack",
			"POLICE_GDO_clothing",
			"chmaster2_AddOn_Cars",
			"chClioIII_AddOn_Cars"
		};
		author[]=
		{
			"KronosD"
		};
	};
};
class CfgVehicles
{
	class B_Heli_Light_01_F;
	class HummingBird_Police: B_Heli_Light_01_F
	{
		author="Nefron";
		displayName="Hummingbird Police";
		_generalMacro="HummingBird_Police";
		uniformClass="HummingBird_Police";
		hiddenSelectionsTextures[]=
		{
			"\VHL_Dostara\Police\HummingPolice.paa"
		};
	};
	class HummingBird_GDO: B_Heli_Light_01_F
	{
		author="Nefron";
		displayName="Hummingbird GDO";
		_generalMacro="HummingBird_GDO";
		uniformClass="HummingBird_GDO";
		hiddenSelectionsTextures[]=
		{
			"\VHL_Dostara\Police\humminggdo.paa"
		};
	};
	class chmaster2_vsav;
	class VSAV_SIM: chmaster2_vsav
	{
		author="Nefron";
		displayName="VASV SIM";
		_generalMacro="VSAV_SIM";
		uniformClass="VSAV_SIM";
		hiddenSelectionsTextures[]=
		{
			"\VHL_Dostara\SIM\VSAV_SIM.paa"
		};
	};
	class chClioIII_VLCG;
	class VL_SIM: chClioIII_VLCG
	{
		author="Nefron";
		displayName="VL SIM";
		_generalMacro="VL_SIM";
		uniformClass="VL_SIM";
		hiddenSelectionsTextures[]=
		{
			"\VHL_Dostara\SIM\CLIO_SIM.paa"
		};
	};
	class EC635_Unarmed;
	class EC635_Police: EC635_Unarmed
	{
		author="Nefron";
		displayName="EC635 Police";
		_generalMacro="EC635_Police";
		uniformClass="EC635_Police";
		hiddenSelectionsTextures[]=
		{
			"\VHL_Dostara\Police\EC\outerHaul_co.paa",
			"VHL_Dostara\Police\EC\UpperParts_co.paa",
			"VHL_Dostara\Police\EC\Tail_co.paa",
			"VHL_Dostara\Police\EC\bawl_co.paa",
			"VHL_Dostara\Police\EC\SideDoors_co.paa",
			"VHL_Dostara\Police\EC\CargoDoors_co.paa"
		};
	};
	class ivory_m3_marked;
	class M3_POLICE: ivory_m3_marked
	{
		author="Nefron Maverick";
		displayName="M3 Police";
		_generalMacro="M3_POLICE";
		uniformClass="M3_POLICE";
		hiddenSelectionsTextures[]=
		{
			"\VHL_Dostara\Police\M3\M3_0.paa",
			"VHL_Dostara\Police\M3\M3_Wheel_1.paa",
			"VHL_Dostara\Police\M3\M3_windScreen_2.paa"
		};
	};
	class ivory_m3;
  class M3_SpeedStar: ivory_m3
	{
		author="Nefron Maverick";
		displayName="BMW M3 E92 SPEED STAR";
		_generalMacro="M3_SpeedStar";
		uniformClass="M3_SpeedStar";
		hiddenSelectionsTextures[]=
		{
			"\VHL_Dostara\Civil\BMW_Speedstar_0.paa",
			"VHL_Dostara\Civil\BMW_Speedstar_1.paa",
			"VHL_Dostara\Civil\BMW_Speedstar_2.paa"
		};
	};
  class M3_StreetRacer: ivory_m3
	{
		author="Nefron Maverick";
		displayName="BMW M3 E92 Street Racer";
		_generalMacro="M3_StreetRacer";
		uniformClass="M3_StreetRacer";
		hiddenSelectionsTextures[]=
		{
			"\VHL_Dostara\Civil\BMW_StreetRacer_0.paa",
			"VHL_Dostara\Civil\BMW_StreetRacer_1.paa",
			"VHL_Dostara\Civil\BMW_StreetRacer_2.paa"
		};
	};
  class ivory_rs4;
  class RS4_Thunder: ivory_rs4
	{
		author="Nefron Maverick";
		displayName="RS4 THUNDER";
		_generalMacro="RS4_Thunder";
		uniformClass="RS4_Thunder";
		hiddenSelectionsTextures[]=
		{
			"\VHL_Dostara\Civil\RS4_Thunder_0.paa",
			"VHL_Dostara\Civil\RS4_Thunder_1.paa",
			"VHL_Dostara\Civil\RS4_Thunder_2.paa"
		};
	};
  class ivory_evox;
  class EVO_BlackLine: ivory_evox
	{
		author="Nefron Maverick";
		displayName="Mistubishi Evo Blackline";
		_generalMacro="EVO_BlackLine";
		uniformClass="EVO_BlackLine";
		hiddenSelectionsTextures[]=
		{
			"\VHL_Dostara\Civil\EVO_Blackline_0.paa",
			"VHL_Dostara\Civil\EVO_Blackline_1.paa",
			"VHL_Dostara\Civil\EVO_Blackline_2.paa"
		};
	};
  class ivory_gt500;
  class GT500_ElectricBlue: ivory_gt500
  {
    author="Nefron Maverick";
    displayName="GT500 Electric Blue";
    _generalMacro="GT500_ElectricBlue";
    uniformClass="GT500_ElectricBlue";
    hiddenSelectionsTextures[]=
    {
      "\VHL_Dostara\Civil\GT500_ElectricBlue.paa"
    };
  };
  class ivory_wrx;
  class WRX_Subaru_Blue: ivory_wrx
	{
		author="Nefron Maverick";
		displayName="Subaru Rallye";
		_generalMacro="WRX_Subaru_Blue";
		uniformClass="WRX_Subaru_Blue";
		hiddenSelectionsTextures[]=
		{
			"\VHL_Dostara\Civil\Subaru_Rally_0.paa",
			"VHL_Dostara\Civil\Subaru_Rally_1.paa",
			"VHL_Dostara\Civil\Subaru_Rally_2.paa"
		};
	};
	class ReammoBox;
	class ThingX;
	class Box_NATO_Wps_F;
	class Box_GDO: Box_NATO_Wps_F
	{
		author="KronosD";
		_generalMacro="Box_GDO";
		displayName="GDO equipement box";
		model="\mas_us_rifle\mas_PeliWeaponBox.p3d";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		maximumLoad=999999;
		transportMaxWeapons=50000;
		transportMaxMagazines=200000;
		transportMaxBackpacks=2000;
		class TransportMagazines
		{
			class _xx_200Rnd_mas_556x45_Stanag
			{
				magazine="200Rnd_mas_556x45_Stanag";
				count=15;
			};
			class _xx_20Rnd_mas_762x51_Stanag
			{
				magazine="20Rnd_mas_762x51_Stanag";
				count=100;
			};
			class _xx_20Rnd_mas_762x51_T_Stanag
			{
				magazine="20Rnd_mas_762x51_T_Stanag";
				count=40;
			};
			class _xx_5Rnd_mas_127x99_Stanag
			{
				magazine="5Rnd_mas_127x99_Stanag";
				count=10;
			};
			class _xx_3Rnd_Smoke_Grenade_shell
			{
				magazine="3Rnd_Smoke_Grenade_shell";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_hk417c
			{
				weapon="arifle_mas_hk417c";
				count=8;
			};
			class _xx_srifle_mas_m107
			{
				weapon="srifle_mas_m107";
				count=4;
			};
			class _xx_srifle_mas_hk417
			{
				weapon="srifle_mas_hk417";
				count=8;
			};
			class _xx_LMG_mas_M249_F
			{
				weapon="LMG_mas_M249_F";
				count=2;
			};
			class _xx_srifle_mas_sr25_h
			{
				weapon="srifle_mas_sr25_h";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=60;
			};
			class _xx_Kronos_Uniform_GDO
			{
				name="Kronos_Uniform_GDO";
				count=10;
			};
			class _xx_KronosD_GDO_vest_02
			{
				name="KronosD_GDO_vest_02";
				count=10;
			};
			class _xx_KronosD_GDO_vest_01
			{
				name="KronosD_GDO_vest_01";
				count=10;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=10;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=20;
			};
			class _xx_optic_Hamr
			{
				name="optic_Hamr";
				count=10;
			};
			class _xx_optic_mas_Hamr_camo
			{
				name="optic_mas_Hamr_camo";
				count=10;
			};
			class _xx_optic_Arco
			{
				name="optic_Arco";
				count=10;
			};
			class _xx_optic_mas_Arco_blk
			{
				name="optic_mas_Arco_blk";
				count=10;
			};
			class _xx_optic_MRCO
			{
				name="optic_MRCO";
				count=10;
			};
			class _xx_optic_Holosight
			{
				name="optic_Holosight";
				count=10;
			};
			class _xx_optic_mas_Holosight_blk
			{
				name="optic_mas_Holosight_blk";
				count=10;
			};
			class _xx_optic_mas_aim
			{
				name="optic_mas_aim";
				count=10;
			};
			class _xx_optic_mas_aim_c
			{
				name="optic_mas_aim_c";
				count=10;
			};
			class _xx_optic_mas_acog
			{
				name="optic_mas_acog";
				count=10;
			};
			class _xx_optic_mas_acog_c
			{
				name="optic_mas_acog_c";
				count=10;
			};
			class _xx_optic_mas_LRPS
			{
				name="optic_mas_LRPS";
				count=10;
			};
			class _xx_Binocular
			{
				name="Binocular";
				count=10;
			};
			class _xx_Rangefinder
			{
				name="Rangefinder";
				count=10;
			};
			class _xx_NVGoggles_mas_h
			{
				name="NVGoggles_mas_h";
				count=20;
			};
		};
	};
};
class cfgMods
{
	author="76561198051885600";
};
