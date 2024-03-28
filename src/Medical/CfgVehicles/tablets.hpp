class TabletsBase : Edible_Base
{
	descriptionShort="#syb_tablets";
	model="intenz\syberiaclient\medical\tablets.p3d";
	rotationFlags=17;
	itemSize[]={1,2};
	varQuantityInit=10;
	varQuantityMin=0;
	varQuantityMax=10;
	varQuantityDestroyOnMin=1;
	weight=20;
	stackedUnit="pills";
	canBeSplit=1;
	quantityBar=0;
	absorbency=0;
	overdosedIncrement=0.1;
	medicalItem=1;
	hiddenSelections[]={"pills"};
	ITEM_DAMAGE_SYSTEM(50, "intenz\syberiaclient\medical\data\tablets_base.rvmat", "intenz\syberiaclient\medical\data\tablets_base_damage.rvmat", "intenz\syberiaclient\medical\data\tablets_base_destruct.rvmat");
	class AnimEvents
	{
		class SoundWeapon
		{
			class Tablets_open
			{
				soundSet="Tablets_open_SoundSet";
				id=201;
			};
			class Tablets_catch
			{
				soundSet="Tablets_catch_SoundSet";
				id=202;
			};
			class Tablets_close
			{
				soundSet="Tablets_close_SoundSet";
				id=203;
			};
			class pickup
			{
				soundSet="purificationtablets_pickup_SoundSet";
				id=797;
			};
			class drop
			{
				soundset="purificationtablets_drop_SoundSet";
				id=898;
			};
		};
	};
};
class TabletBottleBase : TabletsBase{};
class TabletsTetracycline : TabletsBase
{
	scope=2;
	displayName="#syb_tetracycline";
	medAntibioticLevel=2;
	medAntibioticsTimeSec=900;
	medAntibioticsStrength=1.5;
	overdosedIncrement=0.2;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_brown_co.paa"};
};
class TabletsCharcoal : TabletsBase
{
	scope=2;
	displayName="#syb_charcoal";
	medStomatchhealLevel=1;
	medStomatchhealTimeSec=60;
	overdosedIncrement=0.0;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_black_co.paa"};
};
class TabletsAnalgin : TabletsBase
{
	scope=2;
	displayName="#syb_analgin";
	medPainkillerLevel=1;
	medPainkillerTimeSec=300;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_green_co.paa"};
};
class TabletsNaiz : TabletsBase
{
	scope=2;
	displayName="#syb_naiz";
	medPainkillerLevel=1;
	medPainkillerTimeSec=1400;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_brown_co.paa"};
};
class TabletsAertal : TabletsBase // ? White round
{
	scope=2;
	displayName="#syb_aertal";
	medPainkillerLevel=1;
	medPainkillerTimeSec=1300;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_blue_co.paa"};
};
class TabletsNimesil : TabletsBase
{
	scope=2;
	displayName="#syb_nimesil";
	medPainkillerLevel=1;
	medPainkillerTimeSec=1300;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_green_co.paa"};
};
class TabletsPentalgin : TabletsBase
{
	scope=2;
	displayName="#syb_pentalgin";
	medPainkillerLevel=1;
	medPainkillerTimeSec=800;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_white_co.paa"};
};
class TabletsMovalis : TabletsBase
{
	scope=2;
	displayName="#syb_movalis";
	medPainkillerLevel=1;
	medPainkillerTimeSec=800;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_sepia_co.paa"};
};
class TabletsCytramon : TabletsBase
{
	scope=2;
	displayName="#syb_cytramon";
	medPainkillerLevel=1;
	medPainkillerTimeSec=400;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_green_co.paa"};
};
class TabletsParacetamol : TabletBottleBase
{
	scope=2;
	displayName="#syb_paracetamol";
	medPainkillerLevel=1;
	medPainkillerTimeSec=1000;
	medAntibioticLevel=1;
	medAntibioticsTimeSec=200;
	medAntibioticsStrength=0.5;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_blue_co.paa"};
};
class TabletsIbuprofen : TabletBottleBase
{
	scope=2;
	displayName="#syb_ibuprofen";
	medPainkillerLevel=1;
	medPainkillerTimeSec=800;
	medAntibioticLevel=2;
	medAntibioticsTimeSec=400;
	medAntibioticsStrength=0.8;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_white_co.paa"};
};
class TabletsNurofen : TabletsBase
{
	scope=2;
	displayName="#syb_nurofen";
	medPainkillerLevel=1;
	medPainkillerTimeSec=800;
	medAntibioticLevel=2;
	medAntibioticsTimeSec=600;
	medAntibioticsStrength=1.0;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_brown_co.paa"};
};
class TabletsAmoksiklav : TabletsBase
{
	scope=2;
	displayName="#syb_amoksiklav";
	medAntibioticLevel=2;
	medAntibioticsTimeSec=1200;
	medAntibioticsStrength=1.5;
	overdosedIncrement=0.25;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_sepia_co.paa"};
};
class TabletsAmpicylin : TabletsBase
{
	scope=2;
	displayName="#syb_ampicilin";
	medAntibioticLevel=2;
	medAntibioticsTimeSec=900;
	medAntibioticsStrength=1.3;
	overdosedIncrement=0.23;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_blue_co.paa"};
};
class TabletsPiperacylin : TabletsBase
{
	scope=2;
	displayName="#syb_piperacyclin";
	medAntibioticLevel=2;
	medAntibioticsTimeSec=1100;
	medAntibioticsStrength=1.4;
	overdosedIncrement=0.25;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_green_co.paa"};
};
class TabletsTrihopol : TabletsBase
{
	scope=2;
	displayName="#syb_trihopol";
	medAntibioticLevel=1;
	medAntibioticsTimeSec=400;
	medAntibioticsStrength=0.8;
	overdosedIncrement=0.15;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_green_co.paa"};
};
class TabletsCyprolet : TabletsBase
{
	scope=2;
	displayName="#syb_cyprolet";
	medAntibioticLevel=1;
	medAntibioticsTimeSec=500;
	medAntibioticsStrength=0.8;
	overdosedIncrement=0.15;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_white_co.paa"};
};
class TabletsAmoksivan : TabletsBase
{
	scope=2;
	displayName="#syb_amoksivan";
	medAntibioticLevel=2;
	medAntibioticsTimeSec=600;
	medAntibioticsStrength=1.2;
	overdosedIncrement=0.28;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_sepia_co.paa"};
};
class TabletsAmibaktam : TabletsBase
{
	scope=2;
	displayName="#syb_amibaktam";
	medAntibioticLevel=1;
	medAntibioticsTimeSec=300;
	medAntibioticsStrength=0.5;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_white_co.paa"};
};
class TabletsMezimForte : TabletsBase
{
	scope=2;
	displayName="#syb_mezim_forte";
	medStomatchhealLevel=1;
	medStomatchhealTimeSec=120;
	overdosedIncrement=0.05;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_brown_co.paa"};
};
class TabletsZerukal : TabletsBase
{
	scope=2;
	displayName="#syb_zerukal";
	medStomatchhealLevel=1;
	medStomatchhealTimeSec=180;
	overdosedIncrement=0.05;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_white_co.paa"};
};
class TabletsNifuroksazid : TabletsBase
{
	scope=2;
	displayName="#syb_nifuroksazid";
	medStomatchhealLevel=1;
	medStomatchhealTimeSec=300;
	overdosedIncrement=0.05;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_green_co.paa"};
};
class TabletsPolisorb : TabletsBase
{
	scope=2;
	displayName="#syb_polisorb";
	medStomatchhealLevel=1;
	medStomatchhealTimeSec=300;
	overdosedIncrement=0.05;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_blue_co.paa"};
};
class TabletsKarbopekt : TabletsBase
{
	scope=2;
	displayName="#syb_karbopekt";
	medStomatchhealLevel=1;
	medStomatchhealTimeSec=300;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_sepia_co.paa"};
};
class TabletsEnterofuril : TabletsBase
{
	scope=2;
	displayName="#syb_enterofuril";
	medStomatchhealLevel=1;
	medStomatchhealTimeSec=250;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_brown_co.paa"};
};
class TabletsErsefuril : TabletsBase
{
	scope=2;
	displayName="#syb_ersefuril";
	medStomatchhealLevel=1;
	medStomatchhealTimeSec=400;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_white_co.paa"};
};
class TabletsSalofalk : TabletsBase
{
	scope=2;
	displayName="#syb_salofalk";
	medStomatchhealLevel=1;
	medStomatchhealTimeSec=250;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_brown_co.paa"};
};
class TabletsFtalazol : TabletsBase
{
	scope=2;
	displayName="#syb_ftalazol";
	medStomatchhealLevel=1;
	medStomatchhealTimeSec=250;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_white_co.paa"};
};
class TabletsMesalazin : TabletsBase
{
	scope=2;
	displayName="#syb_mesalazin";
	medStomatchhealLevel=1;
	medStomatchhealTimeSec=380;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_blue_co.paa"};
};
class TabletsNoopept : TabletsBase
{
	scope=2;
	displayName="#syb_noopept";
	medPainkillerLevel=1;
	medPainkillerTimeSec=60;
	medConcussionHeal=1;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_blue_co.paa"};
};
class TabletsVikasol : TabletsBase
{
	scope=2;
	displayName="#syb_vikasol";
	medBloodHemostatic=1;
	medBloodHemostaticTimeSec=180;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_white_co.paa"};
};
class TabletsDycinon : TabletsBase
{
	scope=2;
	displayName="#syb_dycinon";
	medBloodHemostatic=1;
	medBloodHemostaticTimeSec=240;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_white_co.paa"};
};
class TabletsIrovit : TabletsBase
{
	scope=2;
	displayName="#syb_irovit";
	medBloodHematopoiesis=1;
	medBloodHematopoiesisTimeSec=120;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_green_co.paa"};
};
class TabletsTardiferon : TabletsBase
{
	scope=2;
	displayName="#syb_tardiferon";
	medBloodHematopoiesis=1;
	medBloodHematopoiesisTimeSec=180;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_brown_co.paa"};
};
class TabletsHeferol : TabletsBase
{
	scope=2;
	displayName="#syb_heferol";
	medBloodHematopoiesis=1;
	medBloodHematopoiesisTimeSec=220;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_sepia_co.paa"};
};
class TabletsSorbiferDurulis : TabletsBase
{
	scope=2;
	displayName="#syb_surbifer_durulis";
	medBloodHematopoiesis=1;
	medBloodHematopoiesisTimeSec=300;
	medBloodHemostatic=1;
	medBloodHemostaticTimeSec=300;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_white_co.paa"};
};
class TabletsPotassiumIodide : TabletsBase
{
	scope=2;
	displayName="#syb_potassium_iodide";
	medRadioprotectionLevel=1;
	medRadioprotectionTimer=60;
	overdosedIncrement=0.2;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_white_co.paa"};
};
class TabletsPotassiumHexacyanoferrate : TabletsBase
{
	scope=2;
	displayName="#syb_potassium_hexacyanoferrate";
	medRadioprotectionLevel=1;
	medRadioprotectionTimer=90;
	overdosedIncrement=0.3;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_black_co.paa"};
};
class TabletsCystamine : TabletsBase
{
	scope=2;
	displayName="#syb_cystamine";
	medRadioprotectionLevel=1;
	medRadioprotectionTimer=120;
	overdosedIncrement=0.3;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_brown_co.paa"};
};
class TabletsB190 : TabletsBase
{
	scope=2;
	displayName="#syb_b190";
	medRadioprotectionLevel=1;
	medRadioprotectionTimer=140;
	overdosedIncrement=0.3;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_blue_co.paa"};
};
class TabletsMexamine : TabletsBase
{
	scope=2;
	displayName="#syb_mexamine";
	medRadioprotectionLevel=2;
	medRadioprotectionTimer=30;
	overdosedIncrement=0.6;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_green_co.paa"};
};
class TabletsAgteminol : TabletsBase
{
	scope=2;
	displayName="#syb_agteminol";
	medAntidepresantLevel=1;
	medAntidepresantTimer=60;
	overdosedIncrement=0.2;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_white_co.paa"};
};
class TabletsAdepress : TabletsBase //weis rund
{
	scope=2;
	displayName="#syb_adepress";
	medAntidepresantLevel=1;
	medAntidepresantTimer=70;
	overdosedIncrement=0.2;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_sepia_co.paa"};
};
class TabletsActaparoxetine : TabletsBase
{
	scope=2;
	displayName="#syb_aktaparoksetyn";
	medAntidepresantLevel=1;
	medAntidepresantTimer=40;
	overdosedIncrement=0.2;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_green_co.paa"};
};
class TabletsAmitriptyline : TabletsBase
{
	scope=2;
	displayName="#syb_amitriptilin";
	medAntidepresantLevel=1;
	medAntidepresantTimer=100;
	overdosedIncrement=0.2;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_brown_co.paa"};
};
class TabletsVenlafaxine : TabletsBase
{
	scope=2;
	displayName="#syb_venlafaxyn";
	medAntidepresantLevel=1;
	medAntidepresantTimer=90;
	overdosedIncrement=0.2;
	hiddenSelectionsTextures[]={"intenz\syberiaclient\medical\data\tablets_blue_co.paa"};
};
