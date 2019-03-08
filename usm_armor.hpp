// class HeadgearItem;
class VestItem;
class usm_vest_LBE_rm
{
	class ItemInfo;
};
	class usm_vest_lbv_mg: usm_vest_LBE_rm
	{
		
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply240";
		};
	};

// class usm_bdu_cap_wdl: ItemCore
	// {
		
		// class ItemInfo: HeadgearItem
		// {
			// hitpointName = "HitHead";
			// armor = 0;
			// passThrough = 1;
			
		// };
	// };
	// class usm_bdu_boonie_wdl: ItemCore
	// {
		
		// class ItemInfo: HeadgearItem
		// {
			// hitpointName = "HitHead";
			// armor = 0;
			// passThrough = 1;
			
		// };
	// };
	// class usm_bdu_8point_wdl: ItemCore
	// {
		
		// class ItemInfo: HeadgearItem
		// {
			
			// armor = 40;
			// passThrough = 1;
			
		// };
	// };
	// class usm_helmet_pasgt_w: ItemCore
	// {
		
		// class ItemInfo: HeadgearItem
		// {
			
			// class HitpointsProtectionInfo
			// {
				// class Head
				// {
					// hitpointName = "HitHead";
					// armor = 6;
					// passThrough = 0.5;
				// };
			// };
		// };
	// };
	// class usm_helmet_cvc: ItemCore
	// {
		
		// class ItemInfo: HeadgearItem
		// {
			
			// class HitpointsProtectionInfo
			// {
				// class Head
				// {
					// hitpointName = "HitHead";
					// armor = 4;
					// passThrough = 0.5;
				// };
			// };
		// };
	// };
	// class usm_helmet_safety: ItemCore
	// {
		
		// class ItemInfo: HeadgearItem
		// {
			
			// armor = 1;
			// passThrough = 0.5;
		// };
	// };
	// class usm_vest_LBE_rm: ItemCore
	// {
		
		// class ItemInfo: VestItem
		// {
			
			// armor = 2;
			// passThrough = 1;
		// };
	// };
	class usm_vest_pasgt: ItemCore
	{
		
		class ItemInfo: VestItem
		{
			
			class HitpointsProtectionInfo
			{
				class Neck
				{
					armor = 12;
					passThrough = 0.9;
				};
				class Chest
				{
					armor = 28;
					passThrough = 0.7;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 28;
					passThrough = 0.7;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 28;
					passThrough = 0.7;
				};
			};
		};
	};
	class usm_vest_pasgtdes: ItemCore
	{
		
		class ItemInfo: VestItem
		{
			
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 12;
					passThrough = 0.9;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.7;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 28;
					passThrough = 0.7;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 28;
					passThrough = 0.7;
				};
			};
		};
	};
	class usm_vest_pasgtdcu: ItemCore
	{
		
		class ItemInfo: VestItem
		{
			
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 12;
					passThrough = 0.9;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.7;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 28;
					passThrough = 0.7;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 28;
					passThrough = 0.7;
				};
			};
		};
	};
	class usm_vest_rba: ItemCore
	{
		
		class ItemInfo: VestItem
		{
			
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 31;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 31;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 31;
					passThrough = 0.2;
				};
			};
		};
	};