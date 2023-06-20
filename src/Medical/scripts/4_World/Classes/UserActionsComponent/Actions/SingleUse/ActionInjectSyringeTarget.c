class ActionInjectSyringeTarget: ActionSingleUseBase
{
	void ActionInjectSyringeTarget()
	{
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INJECTIONTARGET;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);
	}
		
	override string GetText()
	{
		return "#inject_target";
	}
	
	override bool ActionBlockerCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		PlayerBase targetPlayer = PlayerBase.Cast( target.GetObject() );
		if (targetPlayer)
		{
			ref ItemBase itemCheck = targetPlayer.GetItemOnSlot("Body");
			if (itemCheck)
			{
				return true;
			}
		}
		
		return false;
	}
	
	override string ActionBlockerText( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return "#syb_action_syringe_blocked";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (player.IsInteractionWithPlayersBlocked())
			return false;
		
		return CheckBlockerActionCondition(player, target, item) && super.ActionCondition(player, target, item);
	}
	
	override void OnExecuteServer( ActionData action_data )
	{
		if (action_data.m_MainItem && action_data.m_Target.GetObject())
		{
			PlayerBase targetPlayer = PlayerBase.Cast( action_data.m_Target.GetObject() );
			if (targetPlayer)
			{
				action_data.m_MainItem.OnApply(targetPlayer);
			}
		}
		
		action_data.m_MainItem.SetCleanness(0);
		TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(action_data.m_MainItem, "SyringeEmpty", action_data.m_Player);
		lambda.SetTransferParams(true, true, true, false, 1);
		action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);
	}
	override void OnExecuteClient( ActionData action_data )
	{
		TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(action_data.m_MainItem, "SyringeEmpty", action_data.m_Player);
		lambda.SetTransferParams(true, true, true, false, 1);
		action_data.m_Player.LocalReplaceItemInHandsWithNew(lambda);
	}
};