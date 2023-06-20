modded class Bone: ItemBase 
{
    override void SetActions()
	{
		super.SetActions();
        RemoveAction(ActionCraftBoneKnife);
        RemoveAction(ActionCraftBoneKnifeEnv);
    }    
}
