class CfgPatches
{
	class IntenZ_SyberiaClient_WaterMark
	{
		units[]={};
		requiredAddons[]=
		{
			"IntenZ_SyberiaClient"
		};
	};
};

class CfgMods
{
	class IntenZ_SyberiaClient_WaterMark
	{
		type="mod";
		dependencies[]={"World","Mission"};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\WaterMark\Scripts\4_World"};
			};
			class missionScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\WaterMark\Scripts\5_Mission"};
			};
		};
	};
};
