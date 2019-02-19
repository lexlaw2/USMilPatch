class CfgPatches{

	class USMilUniformPatch
	{
		vinhines[]={};
		weapons[]={"usm_bdu_dcu","usm_bdu_dcu_m","usm_bdu_blk","usm_bdu_odg","usm_bdu_ubn","usm_bdu_portliz_units"};
		requiredVersion=1;
		requiredAddons[]={"us_military_uniforms","us_military_units"};
	};
};
class CfgWeapons
	{
		class usm_bdu_wdl;
		
		#include "Comebackuniforms.hpp"
		
		#include "supportVests.hpp"
	};
	

