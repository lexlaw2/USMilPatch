class Bag_Base;

	class usm_pack_alice_prc119: Bag_Base
	{
			scope = 0;
	};
			class usm_pack_alice_prc77: Bag_Base
				{
			scope = 0;
	};
	
	class usm_pack_st138_prc77: Bag_Base
	{
		scope = 0;
	};
	class usm_pack_200rnd_556_bandoliers: Bag_Base
	{
		scope = 0;
	
		class TransportMagazines
		{
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249
			{
				magazine = "rhsusf_200Rnd_556x45_box";
				count = 2;
			};
		};
		
	};
	class usm_pack_762x51_ammobelts: Bag_Base
	{
		scope = 0;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "rhsusf_100Rnd_762x51";
				count = 1;
			};
		};
	};
	class usm_pack_762x51_bandoliers: Bag_Base
	{
		scope = 0;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "rhsusf_100Rnd_762x51";
				count = 1;
			};
		};
	};
	
class usm_pack_m5_medic: Bag_Base
	{
		scope = 0;
		class TransportMagazines
		{
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 2;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_usm_fielddressing
			{
				name = "FirstAidKit";
				count = 1;
			};
			class _xx_usm_medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
	};
	class usm_pack_alice;
		class usm_pack_alice_medic: usm_pack_alice
	{
		scope = 0;
		class TransportItems
		{
			class _xx_usm_fielddressing
			{
				name = "FirstAidKit";
				count = 1;
			};
			class _xx_usm_medikit
			{
				name = "Medikit";
				count = 1;
			};
	};
	};
class usm_pack_alice_prc119_1: usm_pack_alice_prc119
	{
			scope = 2;
			class TransportMagazines {};
	};
			
class usm_pack_200rnd_556_bandoliers1: usm_pack_200rnd_556_bandoliers
	{
		scope = 2;
	
		displayName = "Bandolier, machine gunner";
					class TransportMagazines {};

		
	};
class usm_pack_762x51_ammobelts1: usm_pack_762x51_ammobelts
	{
		scope = 2;
					class TransportMagazines {};

		
	};
	
	
class usm_pack_m5_medic1: usm_pack_m5_medic
	{
		scope = 2;
		class TransportMagazines {};
		class TransportItems{};
	};
	class usm_pack_st138_prc77_1: usm_pack_st138_prc77
	{
		scope = 2;
		class TransportMagazines {};
	};
