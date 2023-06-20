class CfgPatches
{
	class IntenZ_SyberiaClient_PDA
	{
		units[]={};
		requiredAddons[] =
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
	class IntenZ_SyberiaClient_PDA
	{
		type="mod";
		dependencies[]={"World"};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\PDA\Scripts\4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class Clothing;
	class ItemPDA: Clothing
	{
		scope=2;
		title="#pda_item_name";
		displayName="#pda_item_name";
		descriptionShort="#pda_item_desc";
		model="IntenZ\SyberiaClient\PDA\gear_pda_g.p3d";
		inventorySlot="Armband";
		itemInfo[]=
		{
			"Clothing",
			"Armband"
		};
		rotationFlags=34;
		weight=210;
		heatIsolation=0.1;
		absorbency=0;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		itemSize[]={1,2};
		animClass="ItemPDA";
		oldpower=0;
		class ClothingTypes
		{
			male="IntenZ\SyberiaClient\PDA\gear_pda_m.p3d";
			female="IntenZ\SyberiaClient\PDA\gear_pda_m.p3d";
		};
		hiddenSelections[]=
		{
			"screen"
		};
		hiddenSelectionsTextures[]=
		{
			"IntenZ\SyberiaClient\PDA\Data\ekraan_co.paa",
			"IntenZ\SyberiaClient\PDA\Data\ekraan_ok_co.paa"
		};
		attachments[]=
		{
			"BatteryD"
		};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0.0001;
			plugType=1;
			attachmentAction=1;
			wetnessExposure=0.1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= 
					{
						{1.0,{"IntenZ\SyberiaClient\PDA\Data\pda.rvmat","IntenZ\SyberiaClient\PDA\Data\ekran.rvmat"}},
						{0.7,{"IntenZ\SyberiaClient\PDA\Data\pda.rvmat","IntenZ\SyberiaClient\PDA\Data\ekran.rvmat"}},
						{0.5,{"IntenZ\Syberia\Data\PDA\pda_damage.rvmat","IntenZ\Syberia\Data\PDA\ekran_damage.rvmat"}},
						{0.3,{"IntenZ\Syberia\Data\PDA\pda_damage.rvmat","IntenZ\Syberia\Data\PDA\ekran_damage.rvmat"}},
						{0.0,{"IntenZ\Syberia\Data\PDA\pda_destruct.rvmat","IntenZ\Syberia\Data\PDA\ekran_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};

class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class messagePDA_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{
				"IntenZ\SyberiaClient\PDA\Data\pda_message", 1
			}
		};
		volume=0.3;
	};
};

class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class messagePDA_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"messagePDA_Soundshader"
		};
	};
};
