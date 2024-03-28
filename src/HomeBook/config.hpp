class CfgPatches
{
	class IntenZ_SyberiaClient_HomeBook
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
	class IntenZ_SyberiaClient_HomeBook
	{
		type="mod";
		
		dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\HomeBook\Scripts\3_Game"};
			};
			class worldScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\HomeBook\Scripts\4_World"};
			};
			class missionScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\HomeBook\Scripts\5_Mission"};
			};
		};
	};
};
