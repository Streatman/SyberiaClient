class CfgPatches
{
	class IntenZ_SyberiaClient_Medical
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
	class IntenZ_SyberiaClient_Medical
	{
		type="mod";
		dependencies[]={"World"};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\Medical\Scripts\4_World"};
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
	
	class Inventory_Base;
	class Edible_Base;
	class Clothing;
	class Container_Base;
	
	#include "CfgVehicles\redef.hpp"
	#include "CfgVehicles\tablets.hpp"
	#include "CfgVehicles\ampouls.hpp"
	#include "CfgVehicles\injectors.hpp"
	#include "CfgVehicles\salves.hpp"
	#include "CfgVehicles\tools.hpp"
	#include "CfgVehicles\containers.hpp"
	#include "CfgVehicles\Stethoscope.hpp"
};

class CfgSyberia
{
	class MindstateSystem
	{
		mindstateMaxValue=100;
		mindstateLevel5= 1.0;
		mindstateLevel4=20.0;
		mindstateLevel3=60.0;
		mindstateLevel2=90.0;
	};
};