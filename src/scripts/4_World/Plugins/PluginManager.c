modded class PluginManager
{
	override void Init()
	{
		super.Init();
		
		RegisterPlugin("PluginSyberiaRpc", true, true);
		RegisterPlugin("PluginSyberiaOptions", true, true);
		RegisterPlugin("PluginAdminTool", true, true);
		
		if (GetGame().IsClient())
		{
			RegisterPlugin("PluginSyberiaLogin", true, false);
		}
	}
}