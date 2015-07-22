/*
 * Author: flaver
 * Basic config for the mode
 *
 * Arguments: None
 *
 * Return Value:
 * NONE
 *
 */

//Patches class
 class CfgPatches {

 	//Config for the addon
	class jtog_hunger_buddy_items {
		units[] = {"JTOG_Food_Box"};
		weapons[] = {"JTOG_MRE_Meat"};
		requiredAddons[] = {CBA_MAIN};
    version   = "0.0.1";
    author[]  = {"flaver"};
    authorUrl   = "https://github.com/flaver12";
	};

};

class CfgWeapons {

  //External classes form the awesome bihoma;)
  class ItemCore;
  class InventoryItem_Base_F;
  class InventoryFirstAidKitItem_Base_F;
  class MedikitItem;

  class JTOG_MRE_Meat: ItemCore {
    displayname = "[1st JTOG] MRE with Meat";
    descriptionshort = "Its so delicious";
    model = "\A3\Structures_F\Items\Food\TacticalBacon_F.p3d";
    picture = "\AGM_Medical\UI\AGM_bandage_ca.paa";
    scope = 2;
    class ItemInfo: InventoryItem_Base_F {
      mass = 10;
    };

  };


};

class CfgVehicles {
    //External class
    class Box_NATO_Support_F;

    class JTOG_Food_Box: Box_NATO_Support_F {
      author = "[1st JTOG] flaver";
      displayName = "[1st JTOG] Food Box";
      transportmaxmagazines = 128;
      transportmaxbackpacks = 0;
      maximumload = 2000;

      class TransportMagazines {};
      class TransportWeapons {};
      class TransportItems {
        class _xx_JTOG_MRE_Meat {
          count = 64;
          name = "JTOG_MRE_Meat";
        };
      };
    };
};