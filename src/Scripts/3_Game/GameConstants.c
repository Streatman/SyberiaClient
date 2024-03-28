modded class GameConstants
{
	const int 	STAMINA_DRAIN_STANDING_SPRINT_PER_SEC = 7; //in units (how much sprint depletes stamina)
	const int 	STAMINA_DRAIN_CROUCHED_SPRINT_PER_SEC = 5; //in units (how much sprint in crouch depletes stamina)
	const int 	STAMINA_DRAIN_PRONE_SPRINT_PER_SEC = 4; //in units (how much sprint in prone depletes stamina)
	const int	STAMINA_DRAIN_SWIM_FAST_PER_SEC = 6; //in units (how much fast swimming depletes stamina)
	const int	STAMINA_DRAIN_LADDER_FAST_PER_SEC = 6; //in units (how much fast ladder climb depletes stamina)
	
	const float	STAMINA_DRAIN_HOLD_BREATH_START = 0.4; //in units (how much holding breath depletes stamina at the start)
	const float	STAMINA_DRAIN_HOLD_BREATH_END = 1.0; //in units (how much holding breath depletes stamina at the end)
	const float	STAMINA_DRAIN_JUMP = 30;		// in units (how much jumping depletes stamina)
	const float	STAMINA_DRAIN_VAULT = 20;		// in units (how much jumping depletes stamina)
	const float	STAMINA_DRAIN_CLIMB = 60;		// in units (how much jumping depletes stamina)
	const float	STAMINA_DRAIN_MELEE_LIGHT = 10; //in units (how much light melee punch depletes stamina)
	const float	STAMINA_DRAIN_MELEE_HEAVY = 40; //in units (how much heavy melee punch depletes stamina)
	const float	STAMINA_DRAIN_MELEE_EVADE = 15; // in units (how much evade depletes stamina)
	
	const float STAMINA_DRAIN_HOLD_BREATH_DURATION = 1.0; //in seconds, time it takes to increase stamina drain from STAMINA_DRAIN_HOLD_BREATH_START to STAMINA_DRAIN_HOLD_BREATH_END
	const float	STAMINA_DRAIN_HOLD_BREATH_EXPONENT = 4.0; //holding breath exponent
	
	const int 	STAMINA_GAIN_JOG_PER_SEC = 1.0; //in units (how much of stamina units is gained while jogging)
	const int 	STAMINA_GAIN_WALK_PER_SEC = 1.5; //in units (how much of stamina units is gained while walking)
	const int 	STAMINA_GAIN_IDLE_PER_SEC = 4; //in units (how much of stamina units is gained while iddling)
	const int	STAMINA_GAIN_SWIM_PER_SEC = 0.8; //in units (how much of stamina units is gained while slowly swim)
	const int	STAMINA_GAIN_LADDER_PER_SEC = 0.8; //in units (how much of stamina units is gained while slowly swim)
	const float STAMINA_GAIN_BONUS_CAP = 0.01; //in units (tells how much extra units can be added at best to stamina regain)
	
	const float STAMINA_KG_TO_STAMINAPERCENT_PENALTY = 1.8; //in units (by how many  units is max stamina bar reduced for each 1 kg of load weight)
	const float STAMINA_MIN_CAP = 5; //in units (overload won't reduce max stamina bar under this value)
	const float STAMINA_HOLD_BREATH_THRESHOLD_ACTIVATE = 10; // in units
	const float STAMINA_HOLD_BREATH_THRESHOLD_DRAIN = 0; // in units
	const float STAMINA_JUMP_THRESHOLD = STAMINA_DRAIN_JUMP; // in units
	const float STAMINA_VAULT_THRESHOLD = STAMINA_DRAIN_VAULT; // in units
	const float STAMINA_CLIMB_THRESHOLD = STAMINA_DRAIN_CLIMB; // in units
	
	
	const float STAMINA_MELEE_HEAVY_THRESHOLD = STAMINA_DRAIN_MELEE_HEAVY; // in units (how many units we need to make a heavy hit in melee)
	const float STAMINA_MELEE_EVADE_THRESHOLD = 8; // in units
	const float STAMINA_REGEN_COOLDOWN_DEPLETION = 3; // in secs (how much time we will spend in cooldown before the stamina will starts with regeneration)
	const float STAMINA_REGEN_COOLDOWN_EXHAUSTION = 5;
	const float STAMINA_WEIGHT_LIMIT_THRESHOLD = 5000; //! in grams (weight where the player is not penalized by stamina)
	const float STAMINA_KG_TO_GRAMS = 1000; //for kg to g conversion
	const float STAMINA_SYNC_RATE = 1; //in secs
	const float STAMINA_MAX = 100;
	
	const float TEMPERATURE_RATE_COOLING_INSIDE = -0.18;
	const float TEMPERATURE_RATE_COOLING_GROUND = -0.20;
	const float TEMPERATURE_RATE_COOLING_PLAYER = 0; // disabled for correct calculation
	const float ENVIRO_ITEM_HEAT_TRANSFER_COEF = 0.025;
	const float TEMPERATURE_ITEM_HEAT_TRANSFER_COEF = 0.05;
	const float TEMPERATURE_ITEMS_HEAT_IN_INVENTORY_FROM_BODY = 26;
	const float ENVIRO_FIRE_INCREMENT = 0.001;	
	const float ENVIRO_DRY_INCREMENT = 0.000005;
	const float ENVIRO_WIND_EFFECT = 0.05;
};
