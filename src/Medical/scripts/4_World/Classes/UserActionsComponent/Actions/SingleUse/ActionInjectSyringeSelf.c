class ActionInjectSyringeSelf: ActionSingleUseBase
{
	void ActionInjectSyringeSelf()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INJECTION;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}
	
	override bool ActionBlockerCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		ref ItemBase itemCheck = player.GetItemOnSlot("Body");
		if (itemCheck)
		{
			return true;
		}
		
		return false;
	}
	
	override string ActionBlockerText( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return "#syb_action_syringe_blocked";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return CheckBlockerActionCondition(player, target, item) && super.ActionCondition(player, target, item);
	}

	override bool HasTarget()
	{
		return false;
	}

	override string GetText()
	{
		return "#inject";
	}
	
	override void OnExecuteServer( ActionData action_data )
	{
		if (action_data.m_MainItem && action_data.m_Player)
		{
			action_data.m_MainItem.OnApply(action_data.m_Player);
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