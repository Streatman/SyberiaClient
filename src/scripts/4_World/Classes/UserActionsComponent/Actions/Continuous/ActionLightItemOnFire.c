modded class ActionLightItemOnFire
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		bool result = super.ActionCondition( player, target, item );
		// Check handdrill skill
		if (result && (item.IsInherited(HandDrillKit) || target.GetObject().IsInherited(HandDrillKit)) && !player.GetPerkBoolValue(SyberiaPerkType.SYBPERK_SURVIVAL_HANDDRILL_USE))
		{
			return false;
		}
		
		return result;
	}
//	override bool ActionBlockerCondition( PlayerBase player, ActionTarget target, ItemBase item )
//	{
//		return ( (item.IsInherited(HandDrillKit) || target.GetObject().IsInherited(HandDrillKit)) && !player.GetPerkBoolValue(SyberiaPerkType.SYBPERK_SURVIVAL_HANDDRILL_USE) );
//	}
//	override string ActionBlockerText( PlayerBase player, ActionTarget target, ItemBase item )
//	{
//		return "#syb_action_fire_blocked_skill";
//	}
};