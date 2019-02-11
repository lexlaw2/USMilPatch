class CfgPatches{

	class clsBlockUSMilUnits
	{
		units[]={"usm_soldier","sm_soldier_90s_w_h_off","usm_soldier_90s_w_h_nco","usm_soldier_90s_w_h_ftl","usm_soldier_90s_w_h_gr","usm_soldier_90s_w_h_ar","usm_soldier_90s_w_h_at4","usm_soldier_90s_w_h_medic",
		"usm_soldier_90s_w_h_rto","usm_soldier_90s_w_h_mg","usm_soldier_90s_w_h_amg","usm_soldier_90s_w_h_mgab","usm_soldier_90s_w_h_jav","usm_soldier_90s_w_h_ajav","usm_soldier_90s_w_h_aa","usm_soldier_90s_w_h_crew1","usm_soldier_90s_d_h_off",
	"usm_soldier_90s_d_h_nco",
	"usm_soldier_90s_d_h_ftl",
	"usm_soldier_90s_d_h_gr",
	"usm_soldier_90s_d_h_ar",
	"usm_soldier_90s_d_h_rm1",
	"usm_soldier_90s_d_h_at4",
	"usm_soldier_90s_d_h_medic",
	"usm_soldier_90s_d_h_rto",
	"usm_soldier_90s_d_h_mg",
	"usm_soldier_90s_d_h_amg",
	"usm_soldier_90s_d_h_mgab",
	"usm_soldier_90s_d_h_jav",
	"usm_soldier_90s_d_h_ajav",
	"usm_soldier_90s_d_h_aa",
	"usm_soldier_90s_d_h_crew1",
	"usm_soldier_90s_w_l_off",
	"usm_soldier_90s_w_l_nco",
"usm_soldier_90s_w_l_ftl","usm_soldier_90s_w_l_gr","usm_soldier_90s_w_l_ar","usm_soldier_90s_w_l_rm1","usm_soldier_90s_w_l_at4","usm_soldier_90s_w_l_medic","usm_soldier_90s_w_l_rto","usm_soldier_90s_w_l_mg","usm_soldier_90s_w_l_amg","usm_soldier_90s_w_l_mgab","usm_soldier_90s_w_l_jav","usm_soldier_90s_w_l_ajav","usm_soldier_90s_w_l_aa","usm_soldier_90s_w_l_crew1",
"usm_soldier_90s_d_l_off","usm_soldier_90s_d_l_nco","usm_soldier_90s_d_l_ftl","usm_soldier_90s_d_l_gr","usm_soldier_90s_d_l_ar","usm_soldier_90s_d_l_rm1","usm_soldier_90s_d_l_at4","usm_soldier_90s_d_l_medic","usm_soldier_90s_d_l_rto","usm_soldier_90s_d_l_mg","usm_soldier_90s_d_l_amg","usm_soldier_90s_d_l_mgab","usm_soldier_90s_d_l_jav","usm_soldier_90s_d_l_ajav","usm_soldier_90s_d_l_aa","usm_soldier_90s_d_l_crew1"
	};
		weapons[]={""};
		requiredVersion=1;
		requiredAddons[]={"us_military_units"};
	};
	
	
};

class cfgVehicles {
	class usm_base_w;
	class usm_soldier: usm_base_w
	{
		scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {""};
			RespawnItems[] = {""};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

		class usm_soldier_90s_w_h_off:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
				
		class usm_soldier_90s_w_h_nco:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};
			magazines[] = {};
			respawnMagazines[] = {};
						
		};
		
		class usm_soldier_90s_w_h_ftl:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};		
magazines[] = {};
			respawnMagazines[] = {};
						
		};
		
		class usm_soldier_90s_w_h_gr:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
		class usm_soldier_90s_w_h_ar:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
		class usm_soldier_90s_w_h_at4:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
		class usm_soldier_90s_w_h_medic:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
		class usm_soldier_90s_w_h_rto:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
		class usm_soldier_90s_w_h_mg:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
		class usm_soldier_90s_w_h_amg:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
		class usm_soldier_90s_w_h_mgab:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
		class usm_soldier_90s_w_h_jav:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
		class usm_soldier_90s_w_h_ajav:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
		class usm_soldier_90s_w_h_aa:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
		class usm_soldier_90s_w_h_crew1:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
	class usm_soldier_90s_d: usm_base_w
	{
		scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {""};
			RespawnItems[] = {""};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class usm_soldier_90s_d_h_off:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
	class usm_soldier_90s_d_h_nco:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
	class usm_soldier_90s_d_h_ftl:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_d_h_gr:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_d_h_ar:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_d_h_rm1:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_d_h_at4:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_d_h_medic:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_d_h_rto:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_d_h_mg:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_d_h_amg:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_d_h_mgab:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_d_h_jav:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_d_h_ajav:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_h_aa:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_h_crew1:usm_soldier_90s_d
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
class usm_soldier_90s_w_l_off: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
	
	class usm_soldier_90s_w_l_nco: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
	class usm_soldier_90s_w_l_ftl: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_w_l_gr: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_w_l_ar: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_w_l_rm1: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_w_l_at4: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_w_l_medic: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_w_l_rto: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_w_l_mg: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_w_l_amg: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_w_l_mgab: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_w_l_jav: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_w_l_ajav: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		class usm_soldier_90s_w_l_crew1: usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_off: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_nco: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_ftl: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_gr: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_ar: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_rm1: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_at4: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_medic: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_rto: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_mg: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_amg: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_mgab: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_jav: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_ajav: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_aa: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
			class usm_soldier_90s_d_l_crew1: usm_soldier_90s_d
			{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {};
			RespawnItems[] = {};				
			magazines[] = {};
			respawnMagazines[] = {};
			
		};
		
	
	
	
	
	
	
	
	
	
	};


