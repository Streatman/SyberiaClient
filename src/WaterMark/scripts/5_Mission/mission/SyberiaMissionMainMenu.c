modded class MissionMainMenu
{
	private ref WatermarkHandler m_watermarkHandler;
	
	override void OnMissionStart()
	{
		super.OnMissionStart();
		
		m_watermarkHandler = new WatermarkHandler();
		ref Widget rootWidget = m_mainmenu.GetLayoutRoot().FindAnyWidget( "vignette" );
		if (!rootWidget)
		{
			rootWidget = m_mainmenu.GetLayoutRoot();
		}
		
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
		rootWidget.AddChild(watermarkBase, true);
		rootWidget.AddChild(m_DayZLogo, true);
		delete watermarkWidget;
	}
};
