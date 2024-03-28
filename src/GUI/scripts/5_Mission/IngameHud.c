modded class IngameHud
{
	void InitNotifierWidget(int id, ref Widget baseWidget, string name, int offset)
	{
		ref Widget notifierWidget = baseWidget.FindAnyWidget(name);
		baseWidget.RemoveChild(notifierWidget);
		
		m_StatesWidgetNames.Set( id, name );
		
		Widget defaultNotifiersPanel = m_HudPanelWidget.FindAnyWidget("NotifiersPanel");
		Widget defaultBadgesSpacer = m_HudPanelWidget.FindAnyWidget("BadgesSpacer");
		Widget defaultBadgesPanel = m_HudPanelWidget.FindAnyWidget("BadgesPanel");
		
		float widgetOffsetX;
		float widgetWidth;
		
		float x, y, x2;
		defaultNotifiersPanel.FindAnyWidget("Thirsty").GetPos(x, y);
		defaultNotifiersPanel.FindAnyWidget("Hungry").GetPos(x2, y);
		widgetWidth = x - x2;
		widgetOffsetX = x + (widgetWidth * offset);
		
		defaultNotifiersPanel.GetSize(x, y);
		defaultNotifiersPanel.SetSize(x + widgetWidth, y);
		
		defaultNotifiersPanel.AddChild(notifierWidget);
		notifierWidget.SetPos(widgetOffsetX, 0);
		notifierWidget.Show(true);
		
		defaultBadgesSpacer.GetPos(x, y);
		defaultBadgesSpacer.SetPos(x + widgetWidth, y);
		
		defaultBadgesPanel.GetPos(x, y);
		defaultBadgesPanel.SetPos(x + widgetWidth, y);
		
		ref ImageWidget imagew = ImageWidget.Cast( notifierWidget.FindAnyWidget("Icon" + name) );
		m_StatesWidgets.Set(id, imagew);
		for ( int i = 0; i < 5; i++ )
		{
			imagew.LoadImageFile( i, "set:Medical_Icons image:" + name + i );
		}
	}
	
	void InitBadgetWidget(int id, ref Widget baseWidget, string name)
	{
		ref ImageWidget badge_widget = ImageWidget.Cast( baseWidget.FindAnyWidget(name) );
		baseWidget.RemoveChild(badge_widget);
		m_Badges.AddChild(badge_widget);
		
		m_BadgesWidgetNames.Set( id, name );
		m_BadgesWidgets.Set( id, badge_widget);
		badge_widget.Show( false );
		m_BadgesWidgetDisplay.Set( id, 0 );
	}
	
	override void DisplayBadge( int key, int value )
	{
		if (key == NTFKEY_PILLS)
		{
			value = 0;
		}
		
		if (m_BadgesWidgetDisplay.Get( key ) == value)
		{
			return;
		}
		
		super.DisplayBadge(key, value);
		
		int yellowColor = ARGB( 255, 220, 220, 0 );
		int redColor = ARGB( 255, 220, 0, 0 );
		int whiteColor = ARGB( 255, 220, 220, 220 );
		int badgetColor = ARGB( 255, 220, 220, 220 );
		
		bool m_blinking = false;
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		
		if ( key == NTFKEY_SICK || (key == NTFKEY_SEPSIS && player.HasCriticalSepsis()) )
		{
			m_blinking = true;
			badgetColor = redColor;
		}
		else if (key == NTFKEY_BULLETHIT || key == NTFKEY_KNIFEHIT || key == NTFKEY_VISCERADMG || key == NTFKEY_SEPSIS || key == NTFKEY_ZVIRUS)
		{
			m_blinking = false;
			badgetColor = redColor;
		}
		else if (key == NTFKEY_FRACTURE || key == NTFKEY_CONCUSSION)
		{
			m_blinking = false;
			badgetColor = yellowColor;
		}
		else if (key == NTFKEY_HEMATOMA || key == NTFKEY_BLEEDISH)
		{
			if (value >= 5)
			{
				badgetColor = redColor;
			}
			else if (value >= 3)
			{
				badgetColor = yellowColor;
			}
			else
			{
				badgetColor = whiteColor;
			}
		}
		else if (key == NTFKEY_PAIN || key == NTFKEY_OVERDOSED || key == NTFKEY_INFLUENZA)
		{
			if (value == 3)
			{
				badgetColor = redColor;
			}
			else if (value == 2)
			{
				badgetColor = yellowColor;
			}
			else
			{
				badgetColor = whiteColor;
			}
		}
		else if (key == NTFKEY_STOMATCHPOISONING)
		{
			if (value > 1)
			{
				badgetColor = redColor;
			}
			else
			{
				badgetColor = yellowColor;
			}
		}
	/*	else if ( key == NTFKEY_TOXIC )
		{
			if (value > 1)
			{
				badgetColor = redColor; //Want to make it Blink
			}
			else
			{
				badgetColor = redColor;
			}
		}
	*/	else if ( key == NTFKEY_RADIATIONSICKNESS )
		{
			if (value > 3)
			{
				m_blinking = true;
			}
			if (value > 2)
			{
				badgetColor = redColor;
			}
			else if (value > 1)
			{
				badgetColor = yellowColor;
			}
			else
			{
				badgetColor = whiteColor;
			}
		}
		
		
		string badge_name = m_BadgesWidgetNames.Get( key );
		ImageWidget w_image = ImageWidget.Cast( m_Badges.FindAnyWidget( badge_name ) );
		if (w_image)
		{
			if ( !m_blinking )
			{
				w_image.SetColor(badgetColor);
				m_TendencyStatusCritical.Remove( w_image );
			}
			if ( m_blinking && !m_TendencyStatusCritical.Contains( w_image ) )
			{
				m_TendencyStatusCritical.Insert( w_image, badgetColor );
			}
		}
		
		TextWidget w_count = TextWidget.Cast( m_Badges.FindAnyWidget( badge_name + "Count" ) );
		if (w_count)
		{
			string badgeText = "";
			bool isLeveled = false;
			
			for (int i = 0; i < LEVELED_NTFKEY_BADGES_COUNT; i++)
			{
				if (LEVELED_NTFKEY_BADGES[i] == key)
				{
					isLeveled = true;
					break;
				}
			}
			
			if (isLeveled)
			{
			//	if (value == 0) badgetColor = whiteColor;
			//	else if (value == 1) badgetColor = whiteColor;
			//	else if (value == 2) badgetColor = yellowColor;
			//	else if (value == 3) badgetColor = redColor;
				if (value == 0) badgeText = "";
				else if (value == 1) badgeText = "I";
				else if (value == 2) badgeText = "II";
				else if (value == 3) badgeText = "III";
				else if (value == 4) badgeText = "IV";
				else if (value == 5) badgeText = "V";
			}
			else
			{
				badgeText = value.ToString();
			}
			
			w_count.SetText( badgeText );
		}
	}
}