class ScreenBlack extends ScreenBase
{
	void ScreenBlack()
	{
		
	}
	
	void ~ScreenBlack()
	{
		
	}
	
	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets( "IntenZ/SyberiaClient/GUI/layout/ScreenBlack.layout" );	
		return layoutRoot;
	}
}