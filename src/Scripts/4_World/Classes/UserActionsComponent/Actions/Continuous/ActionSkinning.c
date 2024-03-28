modded class ActionSkinningCB
{
	override void CreateActionComponent()
	{
		float skinTime = 30;
	//	float TimeModifier = skinTimeModifier();
		if (m_ActionData.m_Player)
		{
			float skillModifier = 1 - m_ActionData.m_Player.GetPerkFloatValue(SyberiaPerkType.SYBPERK_HUNTING_BUTCH_SPEED, 0, 0);
			skinTime = Math.Max(1, skinTime * skillModifier/* * TimeModifier*/);
		}
		
		m_ActionData.m_ActionComponent = new CAContinuousTime( skinTime );
	}
/*	float skinTimeModifier()
	{
		Edible_Base m_Target = Edible_Base.Cast(m_ActionData.m_Target.GetObject());
		if (m_Target.ConfigIsExisting("skinTimeModifier"))
		{
			float skinTimeModifier = m_Target.ConfigGetFloat("skinTimeModifier");
			return skinTimeModifier;
		}
		return 1;
	};*/
};
