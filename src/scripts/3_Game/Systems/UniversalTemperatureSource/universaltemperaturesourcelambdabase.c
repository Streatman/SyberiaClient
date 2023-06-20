modded class UniversalTemperatureSourceLambdaBase 
{
    // only thing custom is AddTemperatureToItemNearFire()
    override void DryItemsInVicinity(UniversalTemperatureSourceSettings pSettings)
	{
		float distance;
		array<Object> nearestObjects = new array<Object>;

		vector pos = pSettings.m_Position;
		if (pSettings.m_Parent != null)
		{
			pos = pSettings.m_Parent.GetPosition();
		}

		GetGame().GetObjectsAtPosition(pos, pSettings.m_RangeMax, nearestObjects, null);
		for (int i = 0; i < nearestObjects.Count(); i++)
		{
			EntityAI nearestEnt = EntityAI.Cast(nearestObjects.Get(i));
			//! heat transfer to items (no in player possession)
			if (nearestEnt && nearestEnt.HasWetness() && nearestEnt != pSettings.m_Parent && nearestEnt.GetParent() == null)
			{
				float wetness = nearestEnt.GetWet();
	
				//! drying of items around the fireplace (based on distance)
				if (wetness > 0)
				{
					distance = vector.Distance(nearestEnt.GetPosition(), pSettings.m_Position);
					distance = Math.Max(distance, 0.1);	//min distance cannot be 0 (division by zero)
					
					wetness = wetness * (HEAT_THROUGH_AIR_COEF / distance);
					wetness = Math.Clamp(wetness, nearestEnt.GetWetMin(), nearestEnt.GetWetMax());
					nearestEnt.AddWet(-wetness);
				}
                AddTemperatureToItemNearFire(nearestEnt);
			}
		}
	}    

    private void AddTemperatureToItemNearFire(EntityAI itemToHeatUp) {            
        const float PARAM_HEAT_ITEM_MAX_TEMP = 30.0;
        const float PARAM_HEAT_ITEM_COEF = 2.0;
        if (itemToHeatUp.GetTemperature() < PARAM_HEAT_ITEM_MAX_TEMP)
        {
            itemToHeatUp.AddTemperature( PARAM_HEAT_ITEM_COEF );
        }
    }
}