modded class ActionDrainLiquid
{
	override bool ActionBlockerCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		ItemBase target_item = ItemBase.Cast(target.GetObject());
		
		return (target_item && target_item.IsTemperatureVisible() && target_item.GetTemperature() < 0 && target_item.IsLiquidPresent() && target_item.GetLiquidType() == LIQUID_WATER);
	}
	
	override string ActionBlockerText( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return "#syb_action_empty_blocked_temp";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		return CheckBlockerActionCondition(player, target, item) && super.ActionCondition(player, target, item);
	}
};
