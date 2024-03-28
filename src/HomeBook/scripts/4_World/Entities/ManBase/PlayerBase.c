modded class PlayerBase
{
	override void SetActions(out TInputActionMap InputActionMap)
	{
		super.SetActions(InputActionMap);
		
		AddAction(ActionOpenHomebook, InputActionMap);
	}
	
	bool IsBuildingModeBlocked()
	{
		foreach (ref ZoneImplementation zoneImpl : m_zones)
		{
			if (zoneImpl.m_zone.m_blockBuildingMode == 1)
			{
				return true;
			}
		}
		
		return false;
	}
	
};
