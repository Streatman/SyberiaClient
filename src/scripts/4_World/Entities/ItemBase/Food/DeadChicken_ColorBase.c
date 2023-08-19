modded class DeadChicken_ColorBase
{
	override bool CanBeSkinned()
	{
		if ( GetHealthLevel() == GameConstants.STATE_RUINED )
			return false;
		
		return true;
	}
	override bool IsSkinned()
	{
		return !CanBeSkinned();
	}
	override bool IsAlive()
	{
		return false;
	}
};
