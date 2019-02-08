class CfgPatches{

	class clsBlockUSMilUnits
	{
		units[]={"usm_soldier","sm_soldier_90s_w_h_off"};
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
			linkedItems[] = {"usm_bdu_cap_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_bdu_cap_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

		class usm_soldier_90s_w_h_off:usm_soldier
		{
			scope = 0;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {"usm_bdu_cap_wdl"};
			RespawnItems[] = {"usm_bdu_cap_wdl"};
			
			
		};
		
	};


