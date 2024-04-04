class CfgPatches
{
	class IntenZ_SyberiaClient_Configs
	{
		units[]={};
		requiredAddons[]=
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
	class IntenZ_SyberiaClient_Configs
	{
		type="mod";
		inputs="IntenZ\SyberiaClient\Configs\inputs\inputs.xml";
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Bottle_Base;
	class Clothing;
	#include "CfgVehicles\Clothing.hpp"
	class Edible_Base;
	#include "CfgVehicles\Food.hpp"
	
	class House;
	class SyberiaSoundEmitter: House {};
	
	#include "CfgVehicles\vehiclePartItem.hpp"
	
	class Paper: Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1.0;
		varQuantityMin=0.0;
		varQuantityMax=10.0;
		varQuantityDestroyOnMin=1;
	};
	
	class Matchbox: Inventory_Base
	{
		stackedUnit="units";
		canBeSplit=0;
		quantityBar=0;
		varQuantityInit=36.0;
		varQuantityMin=0.0;
		varQuantityMax=36.0;
	};
	class Heatpack: Inventory_Base
	{
		varTemperatureMax=60;
		varTemperatureMin=-10;
	};
	class DebugBuildingTool: Inventory_Base
	{
		scope=2;
		title="DEBUG BUILDING TOOL";
		displayName="DEBUG BUILDING TOOL";
		descriptionShort="DEBUG BUILDING TOOL";
		model="\DZ\gear\containers\christmasbox1.p3d";
		itemSize[]={2,2};
		weight=250;
	};
	
	class Container_Base;
	class AmmoBox: Container_Base
	{
		itemSize[]={5,4};
		itemsCargoSize[]={7,6};
	};
	
	class HouseNoDestruct;
	#include "CfgVehicles\objective_zones.hpp"
};

class CfgSyberia
{
	class AuthSystem
	{
		allowedLettersInName[]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	};
};

class CfgBuildingInfo {};

class CfgBuildingResources
{
	class Doors
	{
		class Default
		{
			class Level1
			{
				consumablesClass[]={"WoodenPlank", "Nail"};
				consumablesQuantity[]={5, 12};
				toolsClass[]={"Hammer"};
				toolsDammage[]={0.1};
			};
		};
	};
};

#include "map_settings.hpp"