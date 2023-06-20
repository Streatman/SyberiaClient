class ActionEmptySyringe: ActionSingleUseBase
{
	void ActionEmptySyringe()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ATTACHITEM;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override bool HasTarget()
	{
		return false;
	}

	override string GetText()
	{
		return "#empty";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		if ( GetGame().IsServer() && GetGame().IsMultiplayer() )
		{
			return true;
		}
		
		return player.IsCurrentCameraAimedAtGround();
	}
	
	override void OnExecuteServer( ActionData action_data )
	{
	//	action_data.m_MainItem.SetCleanness(0);
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