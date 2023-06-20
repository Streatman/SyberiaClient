modded class ContaminatedArea_Dynamic : EffectArea 
{
	override void EEOnCECreate() 
	{
		super.EEOnCECreate();
		Print("[IZ] Dynamic area spawned at: " + GetPosition().ToString());
	}
}