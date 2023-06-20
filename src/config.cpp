class CfgPatches
{
	class IntenZ_SyberiaClient
	{
		units[]={};
		requiredAddons[]=
		{
			"DZ_Data", 
			"DZ_Scripts", 
			"DZ_Gear_Medical", 
			"DZ_Gear_Consumables"
		};
	};
};

class CfgMods
{
	class IntenZ_SyberiaClient
	{
		type="mod";
		dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\Scripts\3_Game"};
			};
			class worldScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\Scripts\4_World"};
			};
			class missionScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\Scripts\5_Mission"};
			};
		};
	};
};
