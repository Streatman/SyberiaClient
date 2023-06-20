class InjectorBase : Inventory_Base
{
	descriptionShort="#syb_injector";
	model="\dz\gear\medical\morphine.p3d";
	rotationFlags=17;
	itemSize[]={1,2};
	weight=60;
	overdosedIncrement=0.4;
	medicalItem=1;
	hiddenSelections[]={"zbytek"};
	ITEM_DAMAGE_SYSTEM(100, "DZ\gear\medical\data\Morphine.rvmat", "DZ\gear\medical\data\Morphine_damage.rvmat", "DZ\gear\medical\data\Morphine_destruct.rvmat");
	class AnimEvents
	{
		class SoundWeapon
		{
			class Morphine_spear
			{
				soundSet="Morphine_spear_SoundSet";
				id=201;
			};
			class Morphine_out
			{
				soundSet="Morphine_out_SoundSet";
				id=202;
			};
		};
	};
};

class InjectorPromedol : InjectorBase
{
	scope=2;
	displayName="#syb_promedol";
	medPainkillerLevel=3;
	medPainkillerTimeSec=1800;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\injector_blue_co.paa" };
};

class InjectorZivirol : InjectorBase
{
	scope=2;
	displayName="#syb_zvirus_antidot";
	medRemoveZVirus=1;
	overdosedIncrement=1.8;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\injector_red_co.paa" };
};

class InjectorTopoizomeraza : InjectorBase
{
	scope=2;
	displayName="#syb_topoizomeraza";
	medRemoveSepsis=1;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\injector_green_co.paa" };
};

class InjectorErytropoenin : InjectorBase
{
	scope=2;
	displayName="#syb_erytropoenin";
	medBloodHematopoiesis=1;
	medBloodHematopoiesisTimeSec=900;
	medBloodHemostatic=1;
	medBloodHemostaticTimeSec=900;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\injector_red_co.paa" };
};

class InjectorNeiroks : InjectorBase
{
	scope=2;
	displayName="#syb_neiroks";
	medConcussionHeal=1;
	overdosedIncrement=0.5;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\injector_blue_co.paa" };
};

class InjectorAmoksivan : InjectorBase
{
	scope=2;
	displayName="#syb_amoksivan";
	medAntibioticLevel=3;
	medAntibioticsTimeSec=1800;
	medAntibioticsStrength=5.0;
	medRemoveSepsis=1;
	overdosedIncrement=0.6;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\injector_red_co.paa" };
};

class InjectorKetorol : InjectorBase
{
	scope=2;
	displayName="#syb_ketorol";
	medStomatchhealLevel=2;
	medStomatchhealTimeSec=1600;
	medPainkillerLevel=1;
	medPainkillerTimeSec=1800;
	medAntibioticLevel=2;
	medAntibioticsTimeSec=1800;
	medAntibioticsStrength=2.0;
	overdosedIncrement=0.25;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\injector_green_co.paa" };
};

class InjectorEpipen : InjectorBase
{
	scope=2;
	displayName="#syb_epipen";
	medAdrenalinLevel=3;
	medAdrenalinTimeSec=300;
	overdosedIncrement=0.5;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\injector_blue_co.paa" };
};

class InjectorNovichek : InjectorBase
{
	scope=2;
	displayName="#syb_novichek";
	medHemologicShock=1;
	overdosedIncrement=5;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\injector_blue_co.paa" };
};

class InjectorRadioprotector : InjectorBase
{
	scope=2;
	displayName="#syb_radioprotector";
	medRadioprotectionLevel=2;
	medRadioprotectionTimer=350;
	overdosedIncrement=0.7;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\injector_yellow_co.paa" };
};