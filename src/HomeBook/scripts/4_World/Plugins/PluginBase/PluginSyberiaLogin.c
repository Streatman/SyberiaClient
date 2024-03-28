modded class PluginSyberiaLogin extends PluginBase
{
	autoptr HomebookMenu m_homebookMenu;
	
	void ~PluginSyberiaLogin()
	{
		if (m_screenBase) m_screenBase.Close();
	}
	
	override void OnInit()
	{
		super.OnInit();
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_HOMEBOOK_OPEN, this, "OnHomebookOpen");
	}
	
	void OnHomebookOpen(ParamsReadContext ctx, PlayerIdentity sender)
	{
		Param2<BuildingLivespace, ref LivespaceHomebookData> clientData;
		if ( !ctx.Read( clientData ) ) return;	
		
		PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());		
		if (player)
		{
			if (m_homebookMenu && m_homebookMenu.m_active)
			{
				m_homebookMenu.m_active = false;
			}
			
			if (GetGame().GetUIManager().GetMenu() != NULL || !player || !player.CanOpenSyberiaUI())
			{
				return;
			}
			
			if (clientData.param1 == null || !clientData.param1.IsReady())
			{
				return;
			}
			
			if (clientData.param2 == null)
			{
				return;
			}
			
			m_homebookMenu = new HomebookMenu(clientData.param1, clientData.param2);
			GetGame().GetUIManager().ShowScriptedMenu( m_homebookMenu, NULL );
		}
	}
	
	void CloseHomebookMenu()
	{
		if (m_homebookMenu && m_homebookMenu.m_active)
		{
			m_homebookMenu.m_active = false;
		}
	}
};
