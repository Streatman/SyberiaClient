modded class PlayerConstants
{
	static const float BLEEDING_SOURCE_BLOODLOSS_PER_SEC = -0.75;
	static const float BLOOD_REGEN_RATE_PER_SEC	= 0.05; //base amount of blood regenerated per second 
	
//	static const float LOW_ENERGY_DAMAGE_PER_SEC = 0.03;//0.05;//health loss per second while low on energy
//	static const float LOW_WATER_DAMAGE_PER_SEC = 0.04;	//0.05;//health loss per second while low on water
	
	static const float HEALTH_REGEN_MIN = 0.002;	//health regen rate at BLOOD_THRESHOLD_FATAL blood level
	static const float HEALTH_REGEN_MAX = 0.01;	//health regen rate at MAXIMUM blood level
	
	static const float SHOCK_REFILL_CONSCIOUS_SPEED = 0.8;		//shock refill speed when the player is conscious
	static const float SHOCK_REFILL_UNCONSCIOUS_SPEED = 0.28;	//shock refill speed when the player is unconscious
	
	
	// Metabolic
	static const float SL_ENERGY_CRITICAL 	=	 0;
	static const float SL_ENERGY_LOW		=  150;
	static const float SL_ENERGY_NORMAL 	= 1500;
	static const float SL_ENERGY_HIGH		= 4500;
	static const float SL_ENERGY_MAX		= 5000;
	static const float LOW_ENERGY_THRESHOLD =  150;
	
	static const float METABOLIC_SPEED_ENERGY_BASAL	 = 0.01;		//energy loss per second while idle	
	static const float METABOLIC_SPEED_ENERGY_WALK	 = 0.10;		//energy loss per second
	static const float METABOLIC_SPEED_ENERGY_JOG	 = 0.30;		//energy loss per second
	static const float METABOLIC_SPEED_ENERGY_SPRINT = 1.20;		//energy loss per second
	
	// Water
	static const float SL_WATER_CRITICAL 	=	 0;
	static const float SL_WATER_LOW 		=  150;
	static const float SL_WATER_NORMAL 		= 1500;
	static const float SL_WATER_HIGH 		= 4500;
	static const float SL_WATER_MAX 		= 5000;
	static const float LOW_WATER_THRESHOLD  =  150;

	static const float METABOLIC_SPEED_WATER_BASAL	= 0.01;		//water loss per second while idle	
	static const float METABOLIC_SPEED_WATER_WALK	= 0.10;		//water loss per second
	static const float METABOLIC_SPEED_WATER_JOG	= 0.30;		//water loss per second
	static const float METABOLIC_SPEED_WATER_SPRINT	= 0.60;		//water loss per second
};
