modded class DayZPlayerImplement
{
	override void CommandHandler(float pDt, int pCurrentCommandID, bool pCurrentCommandFinished)
	{
		super.CommandHandler(pDt,pCurrentCommandID,pCurrentCommandFinished);
		PlayerBase player = PlayerBase.Cast(this);
		
		UAInput usePDAKey = GetUApi().GetInputByName("UAToggleSyberiaUsePDA");
		if ( usePDAKey.LocalClick() && GetGame().GetUIManager().GetMenu() == NULL )
		{
			ItemPDA itemPda = ItemPDA.Cast( player.GetItemOnSlot("Armband") );
			if ( itemPda && !itemPda.IsRuined() && itemPda.HasEnergyManager() && itemPda.GetCompEM().CanWork() )
			{
				if (GetGame().IsClient() && player.CanOpenSyberiaUI())
				{
					PluginGearPDA pluginGearPDA;
					Class.CastTo(pluginGearPDA, GetPlugin(PluginGearPDA));					
					if (pluginGearPDA && !pluginGearPDA.IsOpen())
					{
						itemPda.GetCompEM().ConsumeEnergy(0.01);
						pluginGearPDA.Open();
					}
				}
				
				if (GetGame().IsServer())
				{
					itemPda.GetCompEM().ConsumeEnergy(0.01);
				}
			}
		}
	}
};