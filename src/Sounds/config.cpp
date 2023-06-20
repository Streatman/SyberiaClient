class CfgPatches
{
	class IntenZ_SyberiaClient_Sounds
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
	class IntenZ_SyberiaClient_Sounds
	{
		type="mod";
		dependencies[]={"World"};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]={"IntenZ\SyberiaClient\Sounds\Scripts\4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class SyberiaSoundEmitter;
	class ZombieDoorBreak1_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=50;
		emitterSound="doorbreak_1";
	};
	class ZombieDoorBreak2_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=50;
		emitterSound="doorbreak_2";
	};
	class ZombieDoorBreak3_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=50;
		emitterSound="doorbreak_3";
	};
	class ZombieDoorBreak4_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=50;
		emitterSound="doorbreak_4";
	};
	class ZombieDoorBreak5_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=50;
		emitterSound="doorbreak_5";
	};
	class CutPage_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=5;
		emitterRange=10;
		emitterSound="cut_page";
	};
	class JimWow1_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="jim_wow_1";
	};
	class JimWow2_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="jim_wow_2";
	};
	class FemaleHeavy1_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_1";
	};
	class FemaleHeavy2_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_2";
	};
	class FemaleHeavy3_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_3";
	};
	class FemaleHeavy4_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_4";
	};
	class FemaleHeavy5_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_5";
	};
	class FemaleHeavy6_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_6";
	};
	class FemaleHeavy7_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_7";
	};
	class FemaleHeavy8_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_8";
	};
	class FemaleHeavy9_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_9";
	};
	class FemaleHeavy10_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_10";
	};
	class FemaleHeavy11_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_11";
	};
	class FemaleHeavy12_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_12";
	};
	class FemaleHeavy13_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_14";
	};
	class FemaleHeavy14_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="FemaleHeavy_14";
	};
	class MaleHeavy1_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_1";
	};
	class MaleHeavy2_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_2";
	};
	class MaleHeavy3_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_3";
	};
	class MaleHeavy4_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_4";
	};
	class MaleHeavy5_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_5";
	};
	class MaleHeavy6_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_6";
	};
	class MaleHeavy7_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_7";
	};
	class MaleHeavy8_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_8";
	};
	class MaleHeavy9_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_9";
	};
	class MaleHeavy10_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_10";
	};
	class MaleHeavy11_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_11";
	};
	class MaleHeavy12_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_12";
	};
	class MaleHeavy13_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_14";
	};
	class MaleHeavy14_SoundEmitter: SyberiaSoundEmitter
	{
		scope=2;
		emitterLifetime=3;
		emitterRange=10;
		emitterSound="MaleHeavy_14";
	};
};

class CfgSounds
{
	class default;
	class doorbreak_1: default
	{
		sound[]={"IntenZ\SyberiaClient\sounds\data\doorbreak\doorbreak_1", 5, 1, 25};
	};
	class doorbreak_2: default
	{
		sound[]={"IntenZ\SyberiaClient\sounds\data\doorbreak\doorbreak_2", 5, 1, 25};
	};
	class doorbreak_3: default
	{
		sound[]={"IntenZ\SyberiaClient\sounds\data\doorbreak\doorbreak_3", 5, 1, 25};
	};
	class doorbreak_4: default
	{
		sound[]={"IntenZ\SyberiaClient\sounds\data\doorbreak\doorbreak_4", 5, 1, 25};
	};
	class doorbreak_5: default
	{
		sound[]={"IntenZ\SyberiaClient\sounds\data\doorbreak\doorbreak_5", 5, 1, 25};
	};
	class cut_page: default
	{
		sound[]={"IntenZ\SyberiaClient\sounds\data\actions\cut_page.ogg", 0.8, 1, 10};
	};
	class jim_wow_1: default
	{
		sound[]={"IntenZ\SyberiaClient\sounds\data\player\wow1.ogg", 2, 1, 25};
	};
	class jim_wow_2: default
	{
		sound[]={"IntenZ\SyberiaClient\sounds\data\player\wow2.ogg", 2, 1, 25};
	};
	class FemaleHeavy_1: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_1\takingDamageHeavy_1.ogg", 2, 1, 25};
	};
	class FemaleHeavy_2: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_1\takingDamageHeavy_2.ogg", 2, 1, 25};
	};
	class FemaleHeavy_3: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_1\takingDamageHeavy_3.ogg", 2, 1, 25};
	};
	class FemaleHeavy_4: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_1\takingDamageHeavy_4.ogg", 2, 1, 25};
	};
	class FemaleHeavy_5: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_1\takingDamageHeavy_5.ogg", 2, 1, 25};
	};
	class FemaleHeavy_6: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_1\takingDamageHeavy_6.ogg", 2, 1, 25};
	};
	class FemaleHeavy_7: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_1\takingDamageHeavy_7.ogg", 2, 1, 25};
	};
	class FemaleHeavy_8: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_2\takingDamageHeavy_1.ogg", 2, 1, 25};
	};
	class FemaleHeavy_9: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_2\takingDamageHeavy_2.ogg", 2, 1, 25};
	};
	class FemaleHeavy_10: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_2\takingDamageHeavy_3.ogg", 2, 1, 25};
	};
	class FemaleHeavy_11: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_2\takingDamageHeavy_4.ogg", 2, 1, 25};
	};
	class FemaleHeavy_12: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_2\takingDamageHeavy_5.ogg", 2, 1, 25};
	};
	class FemaleHeavy_13: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_2\takingDamageHeavy_6.ogg", 2, 1, 25};
	};
	class FemaleHeavy_14: default
	{
		sound[]={"DZ\sounds\Characters\voice\female_2\takingDamageHeavy_7.ogg", 2, 1, 25};
	};
	class MaleHeavy_1: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_1\takingDamageHeavy_1.ogg", 2, 1, 25};
	};
	class MaleHeavy_2: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_1\takingDamageHeavy_2.ogg", 2, 1, 25};
	};
	class MaleHeavy_3: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_1\takingDamageHeavy_3.ogg", 2, 1, 25};
	};
	class MaleHeavy_4: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_1\takingDamageHeavy_4.ogg", 2, 1, 25};
	};
	class MaleHeavy_5: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_1\takingDamageHeavy_5.ogg", 2, 1, 25};
	};
	class MaleHeavy_6: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_1\takingDamageHeavy_6.ogg", 2, 1, 25};
	};
	class MaleHeavy_7: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_1\takingDamageHeavy_7.ogg", 2, 1, 25};
	};
	class MaleHeavy_8: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_2\takingDamageHeavy_1.ogg", 2, 1, 25};
	};
	class MaleHeavy_9: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_2\takingDamageHeavy_2.ogg", 2, 1, 25};
	};
	class MaleHeavy_10: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_2\takingDamageHeavy_3.ogg", 2, 1, 25};
	};
	class MaleHeavy_11: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_2\takingDamageHeavy_4.ogg", 2, 1, 25};
	};
	class MaleHeavy_12: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_2\takingDamageHeavy_5.ogg", 2, 1, 25};
	};
	class MaleHeavy_13: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_2\takingDamageHeavy_6.ogg", 2, 1, 25};
	};
	class MaleHeavy_14: default
	{
		sound[]={"DZ\sounds\Characters\voice\Male_2\takingDamageHeavy_7.ogg", 2, 1, 25};
	};
};

class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class hearthbit_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{"IntenZ\SyberiaClient\sounds\data\player\Hearthbit.ogg", 1}
		};
		volume=0.3;
	};
	class psieffect_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{"IntenZ\SyberiaClient\sounds\data\player\PsiEffect.ogg", 1}
		};
		volume=0.5;
	};
	class adminMessage_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{"IntenZ\SyberiaClient\sounds\data\misc\AdminMessage", 1}
		};
		volume=1.0;
	};
};

class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class hearthbit_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]={"hearthbit_Soundshader"};
	};
	class psieffect_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]={"psieffect_Soundshader"};
	};
	class adminMessage_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]={"adminMessage_Soundshader"};
	};
};
