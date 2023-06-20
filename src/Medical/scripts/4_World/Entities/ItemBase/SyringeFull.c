class SyringeFull extends Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionInjectSyringeTarget);
		AddAction(ActionInjectSyringeSelf);
		AddAction(ActionEmptySyringe);
	}
	
	override bool CanBeDisinfected()
	{
		return true;
	}
};
