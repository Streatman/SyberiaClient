class CfgPatches
{
	class IntenZ_SyberiaClient_Sleeping
	{
		units[]={};
		requiredAddons[] =
		{
			"DZ_Data", 
			"DZ_Scripts", 
			"DZ_Gear_Medical", 
			"DZ_Gear_Consumables",
			"IntenZ_SyberiaClient"
		};
	};
};

class CfgMods
{
	class IntenZ_SyberiaClient_Sleeping
	{
		type="mod";
		dependencies[]={"World"};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\Sleeping\Scripts\4_World"};
			};
		};
	};
};

class CfgVehicles
{
	#define ITEM_DAMAGE_SYSTEM(hitpoints_value, rvmat_path, rvmat_path_damage, rvmat_path_destruct) class DamageSystem {\
		class GlobalHealth {\
			class Health {\
				hitpoints=hitpoints_value;\
				healthLevels[]={\
					{ 1.0, { rvmat_path } },\
					{ 0.7, { rvmat_path } },\
					{ 0.5, { rvmat_path_damage } },\
					{ 0.3, { rvmat_path_damage } },\
					{ 0.0, { rvmat_path_destruct } }\
				};\
			};\
		};\
	}
	class SyberiaSoundEmitter;
	class SleepingBagPlaced_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=30;
		emitterSound="sbag_deploy";
	};
	class SleepingMale_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=5;
		emitterRange=10;
		emitterSound="sleeping_male";
	};
	class SleepingFemale_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=4;
		emitterRange=10;
		emitterSound="sleeping_female";
	};
	class Inventory_Base;
	class SleepingBag_BaseColor : Inventory_Base
	{
		scope=0;
		displayName="#$STR_iz_sleepingbag_0";
		descriptionShort="#$STR_iz_sleepingbag_1";
		model="IntenZ\SyberiaClient\sleeping\sbag_packed.p3d";
		weight=500;
		itemSize[]={2,3};
		repairableWithKits[]={5,6};
		rotationFlags=17;
		repairCosts[]={30,25};
		absorbency=0.3;
		itemBehaviour=2;
		hologramName="SleepingBagPlacing";
		hiddenSelections[]=
		{
			"body"
		};
	};
	class BaseBuildingBase;
	class SleepingBagPlaced_BaseColor : BaseBuildingBase
	{
		displayName="$STR_iz_sleepingbag_0";
		descriptionShort="$STR_iz_sleepingbag_1";
		model="IntenZ\SyberiaClient\sleeping\sbag_placed.p3d";
		weight=500;
		rotationFlags=2;
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="false";
		slopeTolerance=0.15;
		yawPitchRollLimit[]={12,12,12};
		hiddenSelections[]=
		{
			"body"
		};
		placedSound="SleepingBagPlaced_SoundEmitter";
		foldingSound="SleepingBagPlaced_SoundEmitter";
		sleepingSound="SleepingBagPlaced_SoundEmitter";
		physLayer="item_large";
		carveNavmesh=0;
		varTemperatureInit=25;
		varTemperatureMin=25;
		varTemperatureMax=25;
	};
	class SleepingBagPlacing : BaseBuildingBase
	{
		scope=1;
		hologramMaterial="tent_medium";
		hologramMaterialPath="dz\gear\camping\data";
		alignHologramToTerain=1;
		model="IntenZ\SyberiaClient\sleeping\sbag_placed.p3d";
		hiddenSelections[]=
		{
			"body"
		};
	};
	
	// BLUE
	class SleepingBag_Blue : SleepingBag_BaseColor
	{
		scope=2;
		placedName="SleepingBagPlaced_Blue";
		hiddenSelectionsTextures[]=
		{
			"IntenZ\SyberiaClient\sleeping\data\sbag_packed_blue.paa"
		};
		ITEM_DAMAGE_SYSTEM(300, "IntenZ\SyberiaClient\sleeping\data\sbag_packed.rvmat", "IntenZ\SyberiaClient\sleeping\data\sbag_packed_damage.rvmat", "IntenZ\SyberiaClient\sleeping\data\sbag_packed_destruct.rvmat");
	};
	class SleepingBagPlaced_Blue : SleepingBagPlaced_BaseColor
	{
		scope=2;
		packedName="SleepingBag_Blue";
		hiddenSelectionsTextures[]=
		{
			"IntenZ\SyberiaClient\sleeping\data\sbag_placed_blue.paa"
		};
		ITEM_DAMAGE_SYSTEM(300, "IntenZ\SyberiaClient\sleeping\data\sbag_placed.rvmat", "IntenZ\SyberiaClient\sleeping\data\sbag_placed_damage.rvmat", "IntenZ\SyberiaClient\sleeping\data\sbag_placed_destruct.rvmat");
	};
	
	// WOODLAND
	class SleepingBag_Woodland : SleepingBag_BaseColor
	{
		scope=2;
		placedName="SleepingBagPlaced_Woodland";
		hiddenSelectionsTextures[]=
		{
			"IntenZ\SyberiaClient\sleeping\data\sbag_packed_woodland.paa"
		};
		ITEM_DAMAGE_SYSTEM(200, "IntenZ\SyberiaClient\sleeping\data\sbag_packed.rvmat", "IntenZ\SyberiaClient\sleeping\data\sbag_packed_damage.rvmat", "IntenZ\SyberiaClient\sleeping\data\sbag_packed_destruct.rvmat");
	};
	class SleepingBagPlaced_Woodland : SleepingBagPlaced_BaseColor
	{
		scope=2;
		packedName="SleepingBag_Woodland";
		hiddenSelectionsTextures[]=
		{
			"IntenZ\SyberiaClient\sleeping\data\sbag_placed_woodland.paa"
		};
		ITEM_DAMAGE_SYSTEM(200, "IntenZ\SyberiaClient\sleeping\data\sbag_placed.rvmat", "IntenZ\SyberiaClient\sleeping\data\sbag_placed_damage.rvmat", "IntenZ\SyberiaClient\sleeping\data\sbag_placed_destruct.rvmat");
	};
};

class CfgSyberia
{
	class SleepingSystem
	{
		// Client
		sleepingMaxValue=14000;
		sleepingLevel5=100;
		sleepingLevel4=1000;
		sleepingLevel3=6000;
		sleepingLevel2=10000;
	};
};

class CfgSounds
{
	class default;
	class sbag_deploy: default
	{
		sound[]=
		{
			"IntenZ\SyberiaClient\sleeping\data\deploy.ogg", 2, 1, 25
		};
	};
	class sleeping_male: default
	{
		sound[]=
		{
			"IntenZ\SyberiaClient\sleeping\data\sleeping_male.ogg", 1, 1, 10
		};
	};
	class sleeping_female: default
	{
		sound[]=
		{
			"IntenZ\SyberiaClient\sleeping\data\sleeping_female.ogg", 0.8, 1, 10
		};
	};
};
