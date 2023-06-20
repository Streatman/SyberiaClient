class ScreenRespawn extends ScreenBase
{
	string m_charName;
	int m_totalSouls;
	int m_priceSouls;
	int m_rp_mode;
	
	ref TextWidget m_charNameText;
	ref TextWidget m_soulsCounterText;
	ref TextWidget m_soulsPriceText;
	
	ref ButtonWidget m_respawnBtn;
	ref ButtonWidget m_removeCharBtn;
	
	bool m_isRpcSended = false;
	
	void ScreenRespawn(string charName, int totalSouls, int priceSouls, int rp_mode)
	{
		m_charName = charName;
		m_totalSouls = totalSouls;
		m_priceSouls = priceSouls;
		m_rp_mode = rp_mode;
	}
	
	void ~ScreenRespawn()
	{}
	
	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets( "IntenZ/Syberia/layouts/IZ_ScreenRespawn.layout" );
		
		m_charNameText		= TextWidget.Cast( layoutRoot.FindAnyWidget( "NameLabel" ) );
		m_soulsCounterText	= TextWidget.Cast( layoutRoot.FindAnyWidget( "SoulsCounter" ) );
		m_soulsPriceText	= TextWidget.Cast( layoutRoot.FindAnyWidget( "RespPrice" ) );
		
		m_respawnBtn	= ButtonWidget.Cast( layoutRoot.FindAnyWidget( "RespawnBtn" ) );
		m_removeCharBtn = ButtonWidget.Cast( layoutRoot.FindAnyWidget( "RemoveCharBtn" ) );
		
		
		if (m_rp_mode == 1)
		{
			layoutRoot.FindAnyWidget("RemoveCharBack").Show(false);
		}
		
		m_charNameText.SetText(m_charName);
		m_soulsCounterText.SetText("#syb_souls " + m_totalSouls);
		
		if ((m_totalSouls - m_priceSouls) < 0)
		{
			m_soulsPriceText.SetText("#syb_nosoulsleft");
			m_respawnBtn.Enable(false);
		}
		else
		{
			m_soulsPriceText.SetText("#syb_resp_price " + m_priceSouls);
		}
		
		return layoutRoot;
	}
	
	override void Update(float timeslice)
	{
		super.Update(timeslice);
		
		if (m_isRpcSended)
		{
			m_respawnBtn.Enable(false);
			m_removeCharBtn.Enable(false);
		}
	}
	
	override bool OnClick( Widget w, int x, int y, int button )
	{
		super.OnClick(w, x, y, button);	
		
		if (button == MouseState.LEFT)
		{			
			if (w == m_respawnBtn)
			{
				m_isRpcSended = true;
				
				GetSyberiaRPC().SendToServer(SyberiaRPC.SYBRPC_RESPAWN_REQUEST, new Param1<int>(0));
				return true;
			}
			if (w == m_removeCharBtn)
			{
				m_isRpcSended = true;
				
				GetSyberiaRPC().SendToServer(SyberiaRPC.SYBRPC_DELETECHAR_REQUEST, new Param1<int>(0));
				return true;
			}
		}
		
		return false;
	}
	
	override bool OnChange( Widget w, int x, int y, bool finished )
	{
		super.OnChange(w, x, y, finished);
		return false;
	}
	
	override bool OnMouseEnter( Widget w, int x, int y )
	{
		ColorHighlight( w );
		return true;
	}
	
	override bool OnMouseLeave( Widget w, Widget enterW, int x, int y )
	{
		ColorNormal( w );
		return true;
	}
	
	protected void ColorHighlight( Widget w )
	{
		if( !w )
			return;
		
		ButtonSetColor(w, ARGB(255, 0, 0, 0));
		ButtonSetTextColor(w, ARGB(255, 255, 0, 0));
	}
	
	protected void ColorNormal( Widget w )
	{
		if( !w )
			return;
		
		ButtonSetColor(w, ARGB(140, 0, 0, 0));
		ButtonSetTextColor(w, ARGB(255, 255, 255, 255));
	}
	
	protected void ButtonSetColor( Widget w, int color )
	{
		if( !w )
			return;
		
		Widget panel = w.FindWidget( w.GetName() + "_panel" );
		
		if( panel )
		{
			panel.SetColor( color );
		}
	}
	
	protected void ButtonSetTextColor( Widget w, int color )
	{
		if( !w )
			return;
		
		TextWidget label = TextWidget.Cast(w.FindAnyWidget( w.GetName() + "_label" ) );
		
		if( label )
		{
			label.SetColor( color );
		}
	}
}