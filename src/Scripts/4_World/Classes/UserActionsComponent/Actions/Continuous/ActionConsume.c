modded class ActionConsume
{
	override bool ActionBlockerCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( item && item.IsTemperatureVisible() && item.GetTemperature() < 0 && !item.IsLiquidPresent() )
			return true;
		if ( item && item.IsTemperatureVisible() && item.GetTemperature() < 0 && item.IsLiquidPresent() && item.GetLiquidType() == LIQUID_WATER )
			return true;
		if ( player.IsFaceBlocked(true) )
			return true;
		
		return false;
	}
	
	override string ActionBlockerText( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( item && item.IsTemperatureVisible() && item.GetTemperature() < 0 && !item.IsLiquidPresent() )
			return "#syb_action_consume_blocked_temp";
		if ( item && item.IsTemperatureVisible() && item.GetTemperature() < 0 && item.IsLiquidPresent() && item.GetLiquidType() == LIQUID_WATER )
			return "#syb_action_consume_blocked_temp";
		
		return "#syb_action_consume_blocked_headgear";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return CheckBlockerActionCondition(player, target, item) && super.ActionCondition(player, target, item);
	}
};

modded class ActionConsumeSingle
{
	override bool ActionBlockerCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( item.IsTemperatureVisible() && item.GetTemperature() < 0 && !item.IsLiquidPresent() )
			return true;
		if ( item.IsTemperatureVisible() && item.GetTemperature() < 0 && item.IsLiquidPresent() && item.GetLiquidType() == LIQUID_WATER )
			return true;
		if ( player.IsFaceBlocked(true) )
			return true;
		
		return false;
	}
	
	override string ActionBlockerText( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( item.IsTemperatureVisible() && item.GetTemperature() < 0 && !item.IsLiquidPresent() )
			return "#syb_action_consume_blocked_temp";
		if ( item.IsTemperatureVisible() && item.GetTemperature() < 0 && item.IsLiquidPresent() && item.GetLiquidType() == LIQUID_WATER )
			return "#syb_action_consume_blocked_temp";
		
		return "#syb_action_consume_blocked_headgear";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return CheckBlockerActionCondition(player, target, item) && super.ActionCondition(player, target, item);
	}
};
