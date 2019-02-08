#include "BIS_AddonInfo.hpp"
class CfgPatches{

	class clsBlockUSMilUnits
	{
		units[]={"sm_soldier_90s_w_h_off"};
		weapons[]={""};
		requiredVersion=1;
		requiredAddons[]={"us_military_units"};
	};
	
	
};

class cfgVehicles {
	class usm_soldier;
//class usm_soldier_90s_w_h_off;
		class usm_soldier_90s_w_h_off:usm_soldier
		{
			scope = 2;
			weapons[] = {"Throw","Put"};
			respawnWeapons[] = {"Throw","Put"};
			Items[] = {"usm_bdu_cap_wdl"};
			RespawnItems[] = {"usm_bdu_cap_wdl"};
			
			
		};
		
	};


