class CfgPatches
{
	class IntenZ_SyberiaClient_Characters
	{
		units[]={};
		requiredAddons[]=
		{
			"DZ_Data", 
			"DZ_Scripts", 
			"DZ_Gear_Medical", 
			"DZ_Gear_Consumables",
			"IntenZ_SyberiaClient"
		};
	};
};

class CfgMods
{
	class IntenZ_SyberiaClient_Characters
	{
		type="mod";
	};
};

class CfgVehicles
{
	class SurvivorM_Mirek;
	class SurvivorM_Mirek_Ghost: SurvivorM_Mirek {};
	class SurvivorM_Boris;
	class SurvivorM_Boris_Ghost: SurvivorM_Boris {};
	class SurvivorM_Cyril;
	class SurvivorM_Cyril_Ghost: SurvivorM_Cyril {};
	class SurvivorM_Denis;
	class SurvivorM_Denis_Ghost: SurvivorM_Denis {};
	class SurvivorM_Elias;
	class SurvivorM_Elias_Ghost: SurvivorM_Elias {};
	class SurvivorM_Francis;
	class SurvivorM_Francis_Ghost: SurvivorM_Francis {};
	class SurvivorM_Guo;
	class SurvivorM_Guo_Ghost: SurvivorM_Guo {};
	class SurvivorM_Hassan;
	class SurvivorM_Hassan_Ghost: SurvivorM_Hassan {};
	class SurvivorM_Indar;
	class SurvivorM_Indar_Ghost: SurvivorM_Indar {};
	class SurvivorM_Jose;
	class SurvivorM_Jose_Ghost: SurvivorM_Jose {};
	class SurvivorM_Kaito;
	class SurvivorM_Kaito_Ghost: SurvivorM_Kaito {};
	class SurvivorM_Lewis;
	class SurvivorM_Lewis_Ghost: SurvivorM_Lewis {};
	class SurvivorM_Manua;
	class SurvivorM_Manua_Ghost: SurvivorM_Manua {};
	class SurvivorM_Niki;
	class SurvivorM_Niki_Ghost: SurvivorM_Niki {};
	class SurvivorM_Oliver;
	class SurvivorM_Oliver_Ghost: SurvivorM_Oliver {};
	class SurvivorM_Peter;
	class SurvivorM_Peter_Ghost: SurvivorM_Peter {};
	class SurvivorM_Quinn;
	class SurvivorM_Quinn_Ghost: SurvivorM_Quinn {};
	class SurvivorM_Rolf;
	class SurvivorM_Rolf_Ghost: SurvivorM_Rolf {};
	class SurvivorM_Seth;
	class SurvivorM_Seth_Ghost: SurvivorM_Seth {};
	class SurvivorM_Taiki;
	class SurvivorM_Taiki_Ghost: SurvivorM_Taiki {};
	class SurvivorF_Eva;
	class SurvivorF_Eva_Ghost: SurvivorF_Eva {};
	class SurvivorF_Frida;
	class SurvivorF_Frida_Ghost: SurvivorF_Frida {};
	class SurvivorF_Gabi;
	class SurvivorF_Gabi_Ghost: SurvivorF_Gabi {};
	class SurvivorF_Helga;
	class SurvivorF_Helga_Ghost: SurvivorF_Helga {};
	class SurvivorF_Irena;
	class SurvivorF_Irena_Ghost: SurvivorF_Irena {};
	class SurvivorF_Judy;
	class SurvivorF_Judy_Ghost: SurvivorF_Judy {};
	class SurvivorF_Keiko;
	class SurvivorF_Keiko_Ghost: SurvivorF_Keiko {};
	class SurvivorF_Linda;
	class SurvivorF_Linda_Ghost: SurvivorF_Linda {};
	class SurvivorF_Maria;
	class SurvivorF_Maria_Ghost: SurvivorF_Maria {};
	class SurvivorF_Naomi;
	class SurvivorF_Naomi_Ghost: SurvivorF_Naomi {};
	class SurvivorF_Baty;
	class SurvivorF_Baty_Ghost: SurvivorF_Baty {};
	
	class DayZInfected;
	class ZombieBase: DayZInfected
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{1.0,{}},
						{0.7,{}},
						{0.5,{}},
						{0.3,{}},
						{0.0,{}}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints=20;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1.5;
							};
							class Shock
							{
								damage=1.5;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
						};
					};
					componentNames[]=
					{
						"Head",
						"Neck"
					};
					fatalInjuryCoef=0.1;
					inventorySlots[]=
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints=150;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					componentNames[]=
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Vest",
						"Body",
						"Back"
					};
					inventorySlotsCoefs[]={1,1,0.5};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints=200;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					componentNames[]=
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef=-1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints=200;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					componentNames[]=
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef=-1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints=50;
						transferToGlobalCoef=0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					componentNames[]=
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints=50;
						transferToGlobalCoef=0.33;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					componentNames[]=
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints=50;
						transferToGlobalCoef=0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					transferToZonesNames[]=
					{
						"LeftLeg"
					};
					transferToZonesCoefs[]={0.1};
					componentNames[]=
					{
						"LeftFoot"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints=50;
						transferToGlobalCoef=0.1;
					};
					class ArmorType
					{
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					transferToZonesNames[]=
					{
						"RightLeg"
					};
					transferToZonesCoefs[]={0.1};
					componentNames[]=
					{
						"RightFoot"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Feet"
					};
				};
			};
		};
	};
	
	class DZ_LightAI;
	class AnimalBase: DZ_LightAI
	{
		storageCategory=3;
		knifeDamageModifier=1;
	};
	
	class Animal_GallusGallusDomesticus: AnimalBase
	{
		knifeDamageModifier=0.25;
	};
	
	class Animal_GallusGallusDomesticusF: AnimalBase
	{
		knifeDamageModifier=0.25;
	};
	
	class Animal_BosTaurus: AnimalBase
	{
		knifeDamageModifier=1.5;
	};
	
	class Animal_BosTaurusF: AnimalBase
	{
		knifeDamageModifier=1.5;
	};
	
	class Animal_UrsusArctos: AnimalBase
	{
		knifeDamageModifier=2.0;
	};
	class Edible_Base;
	class DeadChicken_ColorBase: Edible_Base
	{
		storageCategory=3;
		knifeDamageModifier=0.25;
		skinTimeModifier=0.5;
		class Skinning
		{
			class ObtainedSteaks
			{
				item="ChickenBreastMeat";
				count=2;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedFeathers
			{
				item="ChickenFeather";
				count=2;
				quantityMinMaxCoef[]={0.5,1};
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="SmallGuts";
				count=0;
				quantityMinMaxCoef[]={0.5,0.8};
			};
			class ObtainedBones
			{
				item="Bone";
				count=1;
				quantityMinMaxCoef[]={0.2,0.3};
				transferToolDamageCoef=1;
			};
		};
	};
	
	class DeadRabbit: Edible_Base
	{
		storageCategory=3;
		knifeDamageModifier=0.25;
		skinTimeModifier=0.5;
		class Skinning
		{
			class ObtainedSteaks
			{
				item="RabbitLegMeat";
				count=2;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedPelt
			{
				item="RabbitPelt";
				count=1;
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="SmallGuts";
				count=0;
				quantityMinMaxCoef[]={0.5,0.8};
			};
			class ObtainedBones
			{
				item="Bone";
				count=1;
				quantityMinMaxCoef[]={0.2,0.3};
				transferToolDamageCoef=1;
			};
		};
	};
	class Carp: Edible_Base
	{
		storageCategory=3;
		knifeDamageModifier=0.25;
		skinTimeModifier=0.25;
		class Skinning
		{
			class ObtainedSteaks
			{
				item="CarpFilletMeat";
				count=2;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedGuts
			{
				item="SmallGuts";
				count=0;
				quantityMinMaxCoef[]={0.5,0.8};
			};
		};
	};
	class Mackerel: Edible_Base
	{
		storageCategory=3;
		knifeDamageModifier=0.25;
		skinTimeModifier=0.25;
		class Skinning
		{
			class ObtainedSteaks
			{
				item="MackerelFilletMeat";
				count=2;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedGuts
			{
				item="SmallGuts";
				count=0;
				quantityMinMaxCoef[]={0.5,0.8};
			};
		};
	};
};
