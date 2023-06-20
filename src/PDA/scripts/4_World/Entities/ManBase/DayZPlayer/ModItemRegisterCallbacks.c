modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded(pType, pBehavior);
		
		pType.AddItemInHandsProfileIK("ItemPDA", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior,	"dz/anims/anm/player/ik/gear/compass_modern.anm");
	}
};