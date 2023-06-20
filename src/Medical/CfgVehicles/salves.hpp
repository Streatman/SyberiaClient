class SalveBase : Inventory_Base
{
	descriptionShort="#syb_salve";
	model="\dz\gear\medical\VitaminBottle.p3d";
	rotationFlags=17;
	itemSize[]={1,2};
	weight=120;
	quantityBar=1;
	varQuantityInit=5;
	varQuantityMin=0;
	varQuantityMax=5;
	varQuantityDestroyOnMin=1;
	absorbency=0;
	overdosedIncrement=0.01;
	medicalItem=1;
	hiddenSelections[]={"zbytek"};
	medHematomaHeal=1;
	ITEM_DAMAGE_SYSTEM(150, "DZ\gear\medical\data\vitamin_bottle.rvmat", "DZ\gear\medical\data\vitamin_bottle_damage.rvmat", "DZ\gear\medical\data\vitamin_bottle_destruct.rvmat");
};

class SalveKapsikam : SalveBase
{
	scope=2;
	displayName="#syb_kapsikam";
	medHematomaHealTimeSec=300;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\salve_blue_co.paa" };
};

class SalveFinalgon : SalveBase
{
	scope=2;
	displayName="#syb_finalgon";
	medHematomaHealTimeSec=600;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\salve_red_co.paa" };
};

class SalveViprosal : SalveBase
{
	scope=2;
	displayName="#syb_viprosal";
	medHematomaHealTimeSec=400;
	hiddenSelectionsTextures[]={ "intenz\syberiaclient\medical\data\salve_orange_co.paa" };
};