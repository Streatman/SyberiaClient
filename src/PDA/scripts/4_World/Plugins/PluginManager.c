modded class PluginManager
{
	override void Init()
	{
		super.Init();
		
		RegisterPlugin("PluginLogicPDA", true, true);
		
		if (GetGame().IsClient())
		{
			RegisterPlugin("PluginGearPDA", true, false);
		}
	}
}