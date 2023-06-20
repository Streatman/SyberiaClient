class MedContainerSmall: Container_Base
{
	scope=2;
	displayName="#syb_medcontainer_small_name";
	descriptionShort="#syb_medcontainer_small_desc";
	model="\dz\gear\containers\FirstAidKit.p3d";
	rotationFlags=17;
	weight=140;
	itemSize[]={3,3};
	itemsCargoSize[]={9,3};
	inventorySlot[]+={"FirstAidKit"};
	allowOwnedCargoManipulation=1;
	randomQuantity=2;
	canBeDigged=1;
	isMeleeWeapon=1;
	
	ITEM_DAMAGE_SYSTEM(80, "DZ\gear\containers\data\FirsAidKit.rvmat", "DZ\gear\containers\data\FirsAidKit_damage.rvmat", "DZ\gear\containers\data\FirsAidKit_destruct.rvmat");

	class AnimEvents
	{
		class SoundWeapon
		{
			class pickUpItem_Light
			{
				soundSet="pickUpCourierBag_Light_SoundSet";
				id=796;
			};
			class pickUpItem
			{
				soundSet="pickUpCourierBag_SoundSet";
				id=797;
			};
		};
	};
};

class MedContainerMedium: Container_Base
{
	scope=2;
	displayName="#syb_medcontainer_middle_name";
	descriptionShort="#syb_medcontainer_middle_desc";
	model="intenz\syberiaclient\medical\medium_first_aid_kit.p3d";
	rotationFlags=17;
	weight=250;
	itemSize[]={4,3};
	itemsCargoSize[]={9,4};
	inventorySlot[]+={"FirstAidKit"};
	allowOwnedCargoManipulation=1;
	randomQuantity=2;
	canBeDigged=1;
	isMeleeWeapon=1;
	
	ITEM_DAMAGE_SYSTEM(100, "intenz\syberiaclient\medical\data\medium_first_aid_kit.rvmat", "intenz\syberiaclient\medical\data\medium_first_aid_kit_damage.rvmat", "intenz\syberiaclient\medical\data\medium_first_aid_kit_destruct.rvmat");

	class AnimEvents
	{
		class SoundWeapon
		{
			class pickUpItem_Light
			{
				soundSet="pickUpCourierBag_Light_SoundSet";
				id=796;
			};
			class pickUpItem
			{
				soundSet="pickUpCourierBag_SoundSet";
				id=797;
			};
		};
	};
};

class MedContainerLarge: Container_Base
{
	scope=2;
	displayName="#syb_medcontainer_large_name";
	descriptionShort="#syb_medcontainer_large_desc";
	model="IntenZ\gear\MetalCase\MetalCase.p3d";
	rotationFlags=17;
	weight=500;
	itemSize[]={4,4};
	itemsCargoSize[]={9,5};
	allowOwnedCargoManipulation=1;
	randomQuantity=2;
	canBeDigged=1;
	isMeleeWeapon=1;
	hiddenSelections[]=
	{
		"camoGround"
	};
	hiddenSelectionsTextures[]=
	{
		"IntenZ\gear\MetalCase\Data\MetalCase_Medic_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"IntenZ\gear\MetalCase\Data\MetalCase_medic.rvmat"
	};
	
	ITEM_DAMAGE_SYSTEM(100, "IntenZ\gear\MetalCase\Data\MetalCase_tools.rvmat", "IntenZ\gear\MetalCase\Data\MetalCase_tools_damage.rvmat", "IntenZ\gear\MetalCase\Data\MetalCase_tools_destruct.rvmat");
	
	class AnimEvents
	{
		class SoundWeapon
		{
			class pickUpItem_Light
			{
				soundSet="pickUpCourierBag_Light_SoundSet";
				id=796;
			};
			class pickUpItem
			{
				soundSet="pickUpCourierBag_SoundSet";
				id=797;
			};
		};
	};
};