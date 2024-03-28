modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{		
		super.RegisterActions(actions);
		actions.Insert(ActionCheckName);
		actions.Insert(ActionSayName);
		actions.Insert(ActionCutBookPage);
		actions.Insert(ActionPlugStethoscope);
		actions.Insert(ActionStethoscopeInspect);
		actions.Insert(ActionSearchTargetInventory);
		actions.Insert(ActionWashFruitsWell);
		actions.Insert(ActionWashFruitsWater);
	}
};