modded class MissionGameplay
{
	override void OnKeyClicked(int key)
	{
		super.OnKeyClicked(key);
		
		PluginSyberiaLogin pluginSyberiaLogin;
		if ( key == KeyCode.KC_ESCAPE )
		{
			Class.CastTo(pluginSyberiaLogin, GetPlugin(PluginSyberiaLogin));
			if (pluginSyberiaLogin)
			{
				pluginSyberiaLogin.CloseHomebookMenu();
			}
		}
	}
};
