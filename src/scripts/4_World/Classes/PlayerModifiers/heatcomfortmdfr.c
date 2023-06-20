modded class HeatComfortMdfr: ModifierBase
{
	override void OnTick(PlayerBase player, float deltaT)
	{
		float heat_comfort = player.GetStatHeatComfort().Get();
		float health_loss;
		float value_normalized;
		
		if( heat_comfort > PlayerConstants.WATER_LOSS_THRESHOLD_HC_PLUS_LOW )
		{
			value_normalized = Math.Lerp(PlayerConstants.WATER_LOSS_THRESHOLD_HC_PLUS_LOW, PlayerConstants.THRESHOLD_HEAT_COMFORT_PLUS_CRITICAL, heat_comfort);
			value_normalized = Math.Clamp(value_normalized, 0, 1);
			float water_loss = deltaT * Math.Lerp(PlayerConstants.WATER_LOSS_HC_PLUS_LOW, PlayerConstants.WATER_LOSS_HC_PLUS_HIGH, value_normalized);
			player.GetStatWater().Add(-water_loss);

			if( heat_comfort > PlayerConstants.THRESHOLD_HEAT_COMFORT_PLUS_EMPTY )
			{
				value_normalized = Math.Lerp(PlayerConstants.THRESHOLD_HEAT_COMFORT_PLUS_EMPTY, 1.0, heat_comfort);
				value_normalized = Math.Clamp(value_normalized, 0, 1);
				health_loss = deltaT * Math.Lerp(PlayerConstants.HEALTH_LOSS_HC_PLUS_MID, PlayerConstants.HEALTH_LOSS_HC_PLUS_HIGH, value_normalized);
			}
			else if( heat_comfort > PlayerConstants.THRESHOLD_HEAT_COMFORT_PLUS_CRITICAL )
			{
				value_normalized = Math.Lerp(PlayerConstants.THRESHOLD_HEAT_COMFORT_PLUS_CRITICAL, PlayerConstants.THRESHOLD_HEAT_COMFORT_PLUS_EMPTY, heat_comfort);
				value_normalized = Math.Clamp(value_normalized, 0, 1);
				health_loss = deltaT * Math.Lerp(PlayerConstants.HEALTH_LOSS_HC_PLUS_LOW, PlayerConstants.HEALTH_LOSS_HC_PLUS_MID, value_normalized);
			}
		}
		if( heat_comfort < PlayerConstants.ENERGY_LOSS_THRESHOLD_HC_MINUS_LOW )
		{
			value_normalized = Math.InverseLerp(PlayerConstants.ENERGY_LOSS_THRESHOLD_HC_MINUS_LOW, PlayerConstants.THRESHOLD_HEAT_COMFORT_MINUS_CRITICAL, heat_comfort);
			value_normalized = Math.Clamp(value_normalized, 0, 1);
			float energy_loss = deltaT * Math.Lerp(PlayerConstants.ENERGY_LOSS_HC_MINUS_LOW, PlayerConstants.ENERGY_LOSS_HC_MINUS_HIGH, value_normalized);
			player.GetStatEnergy().Add(-energy_loss);

			if( heat_comfort < PlayerConstants.THRESHOLD_HEAT_COMFORT_MINUS_EMPTY )
			{
				value_normalized = Math.InverseLerp(PlayerConstants.THRESHOLD_HEAT_COMFORT_MINUS_EMPTY, -1.0, heat_comfort);
				value_normalized = Math.Clamp(value_normalized, 0, 1);
				health_loss = deltaT * Math.Lerp(PlayerConstants.HEALTH_LOSS_HC_MINUS_MID, PlayerConstants.HEALTH_LOSS_HC_MINUS_HIGH, value_normalized);
			}
			else if( heat_comfort < PlayerConstants.THRESHOLD_HEAT_COMFORT_MINUS_CRITICAL )
			{
				value_normalized = Math.InverseLerp(PlayerConstants.THRESHOLD_HEAT_COMFORT_MINUS_CRITICAL, PlayerConstants.THRESHOLD_HEAT_COMFORT_MINUS_EMPTY, heat_comfort);
				value_normalized = Math.Clamp(value_normalized, 0, 1);
				health_loss = deltaT * Math.Lerp(PlayerConstants.HEALTH_LOSS_HC_MINUS_LOW, PlayerConstants.HEALTH_LOSS_HC_MINUS_MID, value_normalized);
			}
		}

		if( health_loss != 0 )
		{
			player.AddHealth("","",-health_loss);
		}
	}
};

