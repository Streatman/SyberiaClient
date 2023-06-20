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
		actions.Insert(ActionDebugBuildingToolNext);
		actions.Insert(ActionDebugBuildingToolLink);
		actions.Insert(ActionDebugBuildingToolUpgrade);
		actions.Insert(ActionDebugBuildingToolObjPos);
		actions.Insert(ActionDebugBuildingToolObjRot);
		actions.Insert(ActionDebugBuildingToolDoorID);
		actions.Insert(ActionDebugBuildingToolElementID);
		actions.Insert(ActionDebugBuildingToolMarker);
		actions.Insert(ActionDebugBuildingToolSizer);
		actions.Insert(ActionSearchTargetInventory);
		actions.Insert(ActionWashFruitsWell);
		actions.Insert(ActionWashFruitsWater);
		actions.Insert(ActionHomebookClaimOwnership);
		actions.Insert(ActionOpenHomebook);
	}
};