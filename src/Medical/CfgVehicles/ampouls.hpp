class SyberiaMedicineAmpoule : Inventory_Base
{
	descriptionShort="#syb_ampoule";
	model="\dz\gear\medical\injectionvial.p3d";
	itemSize[]={1,2};
	weight=100;
	quantityBar=1;
	varQuantityInit=4;
	varQuantityMin=0;
	varQuantityMax=4;
	varQuantityDestroyOnMin=0;
	stackedUnit="percentage";
	absorbency=0;
	overdosedIncrement=0.25;
	medicalItem=1;
	hiddenSelections[]={"zbytek"};
	ITEM_DAMAGE_SYSTEM(50, "DZ\gear\medical\data\InjectionVial.rvmat", "DZ\gear\medical\data\InjectionVial_damage.rvmat", "DZ\gear\medical\data\InjectionVial_destruct.rvmat");
	class SoundWeapon
	{
		class pickUpItem
		{
			soundSet="injectionvial_pickup_SoundSet";
			id=797;
		};
	};
};

class AmpouleAlcohol : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_alcohol";
	medHemologicShock=1;
	overdosedIncrement=4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};

class AmpouleHihlofos : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_dihlofos";
	medHemologicShock=1;
	overdosedIncrement=4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_red_co.paa" };
};

class AmpouleCypermetrin : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_cypermetrin";
	medHemologicShock=1;
	overdosedIncrement=4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_green_co.paa" };
};

class AmpouleDiazinon : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_diazinon";
	medHemologicShock=1;
	overdosedIncrement=4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_green_co.paa" };
};

class AmpouleArsenic : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_arsenic";
	medHemologicShock=1;
	overdosedIncrement=4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_green_co.paa" };
};

class AmpouleNovocain : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_novocaine";
	medPainkillerLevel=2;
	medPainkillerTimeSec=1500; // 25 minutes
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_blue_co.paa" };
};

class AmpouleIrineks : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_irineks";
	medPainkillerLevel=2;
	medPainkillerTimeSec=600; // 25 minutes
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_blue_co.paa" };
};

class AmpouleNimesulid : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_nimesulid";
	medPainkillerLevel=2;
	medPainkillerTimeSec=1600; // 25 minutes
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_yellow_co.paa" };
};

class AmpouleKetoprofen : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_ketoprofen";
	medPainkillerLevel=2;
	medPainkillerTimeSec=1800;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};

class AmpoulePropofol : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_propofol";
	medPainkillerLevel=3;
	medPainkillerTimeSec=800;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_yellow_co.paa" };
};

class AmpouleTiopental : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_tiopental";
	medPainkillerLevel=3;
	medPainkillerTimeSec=600;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_red_co.paa" };
};

class AmpouleKetamin : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_ketamin";
	medPainkillerLevel=3;
	medPainkillerTimeSec=300;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_blue_co.paa" };
};

class AmpoulePropanidid : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_propanidid";
	medPainkillerLevel=2;
	medPainkillerTimeSec=400;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_yellow_co.paa" };
};

class AmpouleGexobarbital : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_gexobarbital";
	medPainkillerLevel=2;
	medPainkillerTimeSec=800;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};

class AmpouleSodiumOxybutirate : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_sodium_oxybutirate";
	medPainkillerLevel=3;
	medPainkillerTimeSec=1200;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};





class AmpouleMetoclopramid : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_metoclopramid";
	medStomatchhealLevel=2;
	medStomatchhealTimeSec=600;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_yellow_co.paa" };
};

class AmpouleZerukal : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_zerukal";
	medStomatchhealLevel=2;
	medStomatchhealTimeSec=800;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_blue_co.paa" };
};

class AmpouleKetorol : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_ketorol";
	medStomatchhealLevel=2;
	medStomatchhealTimeSec=1000;
	medPainkillerLevel=1;
	medPainkillerTimeSec=1200;
	medAntibioticLevel=2;
	medAntibioticsTimeSec=1200;
	medAntibioticsStrength=2.0;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_green_co.paa" };
};

class AmpouleDiklofenak : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_diklofenak";
	medAntibioticLevel=2;
	medAntibioticsTimeSec=1100;
	medAntibioticsStrength=2.5;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};

class AmpouleHeptral : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_heptral";
	medStomatchhealLevel=2;
	medStomatchhealTimeSec=1200;
	overdosedIncrement=0.3;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};




class AmpouleCylaspen : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_cylaspen";
	medAntibioticLevel=2;
	medAntibioticsTimeSec=600;
	medAntibioticsStrength=2.0;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};

class AmpouleGrimipenem : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_grimipenem";
	medAntibioticLevel=2;
	medAntibioticsTimeSec=500;
	medAntibioticsStrength=1.8;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};

class AmpouleZeftriaxon : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_zeftriaxon";
	medAntibioticLevel=2;
	medAntibioticsTimeSec=600;
	medAntibioticsStrength=1.8;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_blue_co.paa" };
};

class AmpouleErytromicyn : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_erytromicyn";
	medAntibioticLevel=2;
	medAntibioticsTimeSec=1000;
	medAntibioticsStrength=2.0;
	overdosedIncrement=0.45;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_red_co.paa" };
};

class AmpouleFlemoclav : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_flemoclav";
	medAntibioticLevel=3;
	medAntibioticsTimeSec=1400;
	medAntibioticsStrength=2.5;
	overdosedIncrement=0.45;
	medRemoveSepsis=1;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_yellow_co.paa" };
};

class AmpouleOcsacylin : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_ocsacylin";
	medAntibioticLevel=3;
	medAntibioticsTimeSec=300;
	medAntibioticsStrength=2.7;
	overdosedIncrement=0.5;
	medRemoveSepsis=1;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_blue_co.paa" };
};

class AmpouleImipenem : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_imipenem";
	medAntibioticLevel=3;
	medAntibioticsTimeSec=1200;
	medAntibioticsStrength=3.0;
	overdosedIncrement=0.55;
	medRemoveSepsis=1;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};

class AmpouleAmoksivan : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_amoksivan";
	medAntibioticLevel=3;
	medAntibioticsTimeSec=1400;
	medAntibioticsStrength=3.0;
	overdosedIncrement=0.6;
	medRemoveSepsis=1;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_red_co.paa" };
};



class AmpouleZivirol : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_zvirus_antidot";
	medRemoveZVirus=1;
	overdosedIncrement=1.8;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_red_co.paa" };
};

class AmpouleMeksidol : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_meksidol";
	medConcussionHeal=1;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_green_co.paa" };
};

class AmpouleActovegin : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_actovegin";
	medConcussionHeal=1;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_blue_co.paa" };
};

class AmpouleNeiroks : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_neiroks";
	medConcussionHeal=1;
	overdosedIncrement=0.5;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};



class AmpoulePeklitakcel : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_peklitakcel";
	medHematomaHeal=1;
	medHematomaHealTimeSec=900;
	overdosedIncrement=0.2;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};

class AmpouleNonacogAlpha : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_nonacog_alpha";
	medBloodHemostatic=1;
	medBloodHemostaticTimeSec=600;
	overdosedIncrement=0.3;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};

class AmpouleAminokaprolSulfat : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_aminokapsulfat";
	medBloodHemostatic=1;
	medBloodHemostaticTimeSec=600;
	overdosedIncrement=0.3;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_red_co.paa" };
};

class AmpouleVikasol : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_vikasol";
	medBloodHemostatic=1;
	medBloodHemostaticTimeSec=800;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_blue_co.paa" };
};

class AmpouleEtamzilat : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_etamzilat";
	medBloodHemostatic=1;
	medBloodHemostaticTimeSec=1400;
	overdosedIncrement=0.5;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_yellow_co.paa" };
};

class AmpoulePerftoran : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_perftoran";
	medBloodHematopoiesis=1;
	medBloodHematopoiesisTimeSec=300;
	overdosedIncrement=0.3;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_blue_co.paa" };
};

class AmpouleMaltofer : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_maltofer";
	medBloodHematopoiesis=1;
	medBloodHematopoiesisTimeSec=600;
	overdosedIncrement=0.3;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};

class AmpouleErytropoenin : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_erytropoenin";
	medBloodHematopoiesis=1;
	medBloodHematopoiesisTimeSec=900;
	medBloodHemostatic=1;
	medBloodHemostaticTimeSec=900;
	overdosedIncrement=0.5;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_red_co.paa" };
};


class AmpouleAdrenalin05 : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_adrenalin05";
	medAdrenalinLevel=1;
	medAdrenalinTimeSec=900;
	overdosedIncrement=0.2;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_co.paa" };
};

class AmpouleAdrenalin10 : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_adrenalin10";
	medAdrenalinLevel=2;
	medAdrenalinTimeSec=600;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_yellow_co.paa" };
};

class AmpouleAdrenalin30 : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_adrenalin30";
	medAdrenalinLevel=3;
	medAdrenalinTimeSec=300;
	overdosedIncrement=0.6;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_red_co.paa" };
};

class AmpoulePentacin : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_pentacin";
	medRadioprotectionLevel=2;
	medRadioprotectionTimer=300;
	overdosedIncrement=0.6;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_yellow_co.paa" };
};

class AmpouleCarboxyme : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_carboxyme";
	medRadioprotectionLevel=2;
	medRadioprotectionTimer=300;
	overdosedIncrement=0.6;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_blue_co.paa" };
};

class AmpouleMetralindol : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_metralyndol";
	medAntidepresantLevel=2;
	medAntidepresantTimer=300;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_green_co.paa" };
};

class AmpouleActaparoxetine : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_aktaparoksetyn";
	medAntidepresantLevel=2;
	medAntidepresantTimer=400;
	overdosedIncrement=0.4;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_blue_co.paa" };
};

class AmpouleAmitriptyline : SyberiaMedicineAmpoule
{
	scope=2;
	displayName="#syb_amitriptilin";
	medAntidepresantLevel=2;
	medAntidepresantTimer=600;
	overdosedIncrement=0.5;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\ampoule_yellow_co.paa" };
};