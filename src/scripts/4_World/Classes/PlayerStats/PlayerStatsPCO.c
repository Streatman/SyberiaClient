modded class PlayerStatsPCO_current
{
	override void Init()
	{
		super.Init();
		UpdateStat(EPlayerStats_current.ENERGY,new PlayerStat<float>(0,5000,1200,"Energy",EPSstatsFlags.EMPTY) );
		UpdateStat(EPlayerStats_current.WATER, new PlayerStat<float>(0,5000, 900, "Water",EPSstatsFlags.EMPTY) );
	}
	
	void UpdateStat(int id, PlayerStatBase stat)
	{
		m_PlayerStats.Set(id, stat);
		stat.Init(id);
	}
};