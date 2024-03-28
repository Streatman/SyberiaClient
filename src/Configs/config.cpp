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
	class Container_Base;
	class HouseNoDestruct;
	
	class House;
	class SyberiaSoundEmitter : House { };
	
	class Paper : Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1.0;
		varQuantityMin=0.0;
		varQuantityMax=10.0;
		varQuantityDestroyOnMin=1;
	};
	
	class Matchbox : Inventory_Base
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
	class PlateCarrierVest: Clothing
	{
		bulletProofProtection=0.4;
	};
	class PressVest_ColorBase: Clothing
	{
		bulletProofProtection=0.26;
	};
	class PoliceVest: Clothing
	{
		bulletProofProtection=0.1;
	};
	class Chestplate: Clothing
	{
		bulletProofProtection=0.1;
	};
	class GP5GasMask: Clothing
	{
		radiationProtection=0.31;
	};
	class GasMask: Clothing
	{
		radiationProtection=0.31;
	};
	class AirborneMask: Clothing
	{
		radiationProtection=0.31;
	};
	class GasMask_Filter: Inventory_Base
	{
		radiationProtection=0.29;
	};
	class BallisticHelmet_ColorBase: Clothing
	{
		meleeProtection=0.95;
		firearmProtection=0.3;
	};
	class ZSh3PilotHelmet: Clothing
	{
		meleeProtection=0.8;
		firearmProtection=0.0;
	};
	class ConstructionHelmet_ColorBase: Clothing
	{
		meleeProtection=0.9;
		firearmProtection=0.0;
	};
	class MotoHelmet_ColorBase: Clothing
	{
		meleeProtection=1.0;
		firearmProtection=0.0;
	};
	class DarkMotoHelmet_ColorBase: Clothing
	{
		meleeProtection=1.0;
		firearmProtection=0.0;
	};
	class TankerHelmet: Clothing
	{
		meleeProtection=0.3;
		firearmProtection=0.0;
	};
	class GorkaHelmet: Clothing
	{
		meleeProtection=0.9;
		firearmProtection=0.3;
	};
	class FirefightersHelmet_ColorBase: Clothing
	{
		meleeProtection=0.9;
		firearmProtection=0.0;
	};
	class SkateHelmet_ColorBase: Clothing
	{
		meleeProtection=0.7;
		firearmProtection=0.0;
	};
	class Ssh68Helmet: Clothing
	{
		meleeProtection=0.6;
		firearmProtection=0.1;
	};
	class DirtBikeHelmet_ColorBase: Clothing
	{
		meleeProtection=1.0;
		firearmProtection=0.0;
	};
	class HockeyHelmet_ColorBase: Clothing
	{
		meleeProtection=1.0;
		firearmProtection=0.0;
	};
	class Mich2001Helmet: Clothing
	{
		meleeProtection=0.95;
		firearmProtection=0.3;
	};
	class NBCGloves_ColorBase: Clothing
	{
		radiationProtection=0.045;
	};
	class NBCHoodBase: Clothing
	{
		radiationProtection=0.045;
	};
	class NBCPantsBase: Clothing
	{
		radiationProtection=0.245;
	};
	class NBCBootsBase: Clothing
	{
		radiationProtection=0.045;
	};
	class NBCJacketBase: Clothing
	{
		radiationProtection=0.290;
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
	class CanisterGasoline: Bottle_Base
	{
		vehiclePartItem=1;
	};
	class TruckBattery: Inventory_Base
	{
		vehiclePartItem=1;
	};
	
	class CarBattery: Inventory_Base
	{
		vehiclePartItem=1;
	};
	
	class BrakeFluid: Inventory_Base
	{
		vehiclePartItem=1;
	};
	
	class EngineOil: Inventory_Base
	{
		vehiclePartItem=1;
	};
	
	class CarRadiator: Inventory_Base
	{
		vehiclePartItem=1;
	};
	
	class HeadlightH7: Inventory_Base
	{
		vehiclePartItem=1;
	};
	
	class HeadlightH7_Box: Inventory_Base
	{
		vehiclePartItem=1;
	};
	
	class SparkPlug: Inventory_Base
	{
		vehiclePartItem=1;
	};
	
	class TireRepairKit: Inventory_Base
	{
		vehiclePartItem=1;
	};
	
	class CarWheel: Inventory_Base
	{
		vehiclePartItem=1;
	};
	
	class CarDoor: Inventory_Base
	{
		vehiclePartItem=1;
	};
	class AmmoBox: Container_Base
	{
		itemSize[]={5,4};
		itemsCargoSize[]={7,6};
	};
	#include "objective_zones.hpp"
};

class CfgSyberia
{
	class AuthSystem
	{
		allowedLettersInName[]={ "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };
	};
};

class CfgBuildingInfo
{

};

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