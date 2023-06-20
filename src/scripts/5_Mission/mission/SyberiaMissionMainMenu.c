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
		
		ref Widget watermarkWidget = GetGame().GetWorkspace().CreateWidgets( "SyberiaScripts/layout/WatermarkMain.layout" );		
		ref Widget watermarkBase = watermarkWidget.FindAnyWidget( "WatermarkBase" );
		TextWidget.Cast( watermarkBase.FindAnyWidget( "WatermarkTextWidget5" ) ).SetText(Syberia_Version);
		watermarkWidget.RemoveChild(watermarkBase);
		rootWidget.AddChild(watermarkBase, true);
		delete watermarkWidget;
	}
};