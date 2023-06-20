modded class MissionGameplay
{
	private ref WatermarkHandler m_watermarkHandler;
	
	override void OnInit()
	{
		super.OnInit();
		
		m_watermarkHandler = new WatermarkHandler();
	}
	
	override void Pause()
	{
		super.Pause();

		UIScriptedMenu ingameMenu = GetGame().GetUIManager().GetMenu();
		if (ingameMenu && ingameMenu.GetID() == MENU_INGAME)
		{
			ref Widget watermarkWidget = GetGame().GetWorkspace().CreateWidgets( "IntenZ/Syberia/layouts/IZ_Watermark.layout" );		
			ref Widget watermarkBase = watermarkWidget.FindAnyWidget( "WatermarkBase" );
			ref Widget m_DayZLogo = watermarkWidget.FindAnyWidget( "DayZLogo" );
			
			if (FileExist("$saves:nocustomloadingscreen.txt"))
			{
				m_DayZLogo.Show(false);
			}
			
		//	ref Widget watermarkBtn = watermarkBase.FindAnyWidget( "WatermarkActionBtn" );
			TextWidget.Cast( watermarkBase.FindAnyWidget( "WatermarkTextWidget0" ) ).SetText(Syberia_Version);
		//	m_WidgetEventHandler.RegisterOnClick(watermarkBtn, m_watermarkHandler, "OnWatermarkClick");
			watermarkWidget.RemoveChild(watermarkBase);
			ingameMenu.GetLayoutRoot().AddChild(watermarkBase, true);
			ingameMenu.GetLayoutRoot().AddChild(m_DayZLogo, true);
			delete watermarkWidget;
		}
	}
};
