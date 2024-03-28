modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{		
		super.RegisterActions(actions);
		actions.Insert(ActionDebugBuildingToolNext);
		actions.Insert(ActionDebugBuildingToolLink);
		actions.Insert(ActionDebugBuildingToolUpgrade);
		actions.Insert(ActionDebugBuildingToolObjPos);
		actions.Insert(ActionDebugBuildingToolObjRot);
		actions.Insert(ActionDebugBuildingToolDoorID);
		actions.Insert(ActionDebugBuildingToolElementID);
		actions.Insert(ActionDebugBuildingToolMarker);
		actions.Insert(ActionDebugBuildingToolSizer);
		actions.Insert(ActionHomebookClaimOwnership);
		actions.Insert(ActionOpenHomebook);
	}
};