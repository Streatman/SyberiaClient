class CfgPatches
{
	class SyberiaScripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class BuildingLivespace;
	
	class Land_Barn_Wood2_Livespace0: BuildingLivespace
    {
	model="SyberiaScripts\data\building\barn\barn_wood2_livespace0.p3d";
	simpleHiddenSelections[] = {
	    "l1",
	    "l2",
	    "l3",
	    "barricade_l1",
	    "d1_l1",
	    "d1_l2",
	    "d1_l3",
	    "d2_l1",
	    "d2_l2",
	    "d2_l3",
	    "d3_l1",
	    "d3_l2",
	    "d3_l3",
	    "d4_l1",
	    "d4_l2",
	    "d4_l3",
	    "d5_l1",
	    "d5_l2",
	    "d5_l3",
	    "d5_l2_base",
	    "d5_l3_base",
	    "d12_l1",
	    "d12_l2",
	    "d12_l3",
	    "d34_l1",
	    "d34_l2",
	    "d34_l3",
	    "homebook"
	};
	class Doors
	{
	    class DoorsTwin1
	    {
		displayName="door 1";
		component="DoorsTwin1";
		soundPos="doorstwin1_action";
		animPeriod=1;
		initPhase=0;
		initOpened=0.30000001;
		soundOpen="doorWoodSlideBigOpen";
		soundClose="doorWoodSlideBigClose";
		soundLocked="doorWoodSlideBigRattle";
		soundOpenABit="doorWoodSlideBigOpenABit";
	    };
	    class DoorsTwin2
	    {
		displayName="door 3";
		component="DoorsTwin2";
		soundPos="doorstwin2_action";
		animPeriod=1;
		initPhase=0;
		initOpened=0.30000001;
		soundOpen="doorWoodSlideBigOpen";
		soundClose="doorWoodSlideBigClose";
		soundLocked="doorWoodSlideBigRattle";
		soundOpenABit="doorWoodSlideBigOpenABit";
	    };
	    class Doors5
	    {
		displayName="door 5";
		component="Doors5";
		soundPos="doors5_action";
		animPeriod=1;
		initPhase=0;
		initOpened=0.30000001;
		soundOpen="doorWoodNolatchOpen";
		soundClose="doorWoodNolatchClose";
		soundLocked="doorWoodNolatchRattle";
		soundOpenABit="doorWoodNolatchOpenABit";
	    };
	};
	class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class door3
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class door4
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors4"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class door5
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors5"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
    };
};
class CfgBuildingInfo
{
    class Land_Barn_Wood2
    {
	class Livespace0
	{
	    //debug = 1;  // разметка
			bboxStart[] = {6.13555, -2.73677, -7.8543}; // Bounding box min 
	    bboxEnd[] = {-6.95293, 2.20354, 7.9916}; // Bounding box max
	    classname = "Land_Barn_Wood2_Livespace0"; // Classname of livespace object
	    offset[] = { -0.487305, -3.10001, 0.00976563 }; // Livespace object offset on spawn
	    homebook = "homebook";
	    class Door0
	    {
		selfDoorId = 0; // ID of this door of livespace. (Check by DebugBuildingTool)
		linkedDoorIds[] = { 0, 1 }; // ID of vanilla house doors. Empty if not exist.
		outerDoor = 1; // Is door from house to outside world
		levels[] = { "d34_l1", "d34_l2", "d34_l3" }; // Selection in p3d relative to this door for each level
	    };
	    class Door1
	    {
		selfDoorId = 1; // ID of this door of livespace. (Check by DebugBuildingTool)
		linkedDoorIds[] = { 2, 3 }; // ID of vanilla house doors. Empty if not exist.
		outerDoor = 1; // Is door from house to outside world
		levels[] = { "d12_l1", "d12_l2", "d12_l3" }; // Selection in p3d relative to this door for each level
	    };
	    class Door2
	    {
		selfDoorId = 2; // ID of this door of livespace. (Check by DebugBuildingTool)
		linkedDoorIds[] = { 4 }; // ID of vanilla house doors. Empty if not exist.
		outerDoor = 1; // Is door from house to outside world
		levels[] = { "d5_l1", "d5_l2", "d5_l3" }; // Selection in p3d relative to this door for each level
	    };
	    class Barricade0
	    {
		component="barricade_l1";
				levels[] = { "barricade_l1" }; // Selection in p3d relative to this barricade for each level
	    };
	};
    };
};