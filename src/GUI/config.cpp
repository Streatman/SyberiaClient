class CfgPatches
{
	class IntenZ_SyberiaClient_GUI
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
	class IntenZ_SyberiaClient_GUI
	{
		type="mod";
		
		dependencies[]={"World","Mission"};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\GUI\Scripts\4_World"};
			};
			class missionScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\GUI\Scripts\5_Mission"};
			};
		};
	};
};
