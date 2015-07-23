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
		units[] = {"Jtog_Food_Box"};
		weapons[] = {"Jtog_Mre_Meat", "Jtog_Drink_Water", "Jtog_Mre_Chili_With_Beans", "Jtog_Mre_Vegi_Burger", "Jtog_Mre_Meatballs"};
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

  //Basic class
  class Jtog_Item_Base_Class: ItemCore {
    type = 4096;//4;
    detectRange = -1;
    simulation = "ItemMineDetector";
    author = "flaver";
  };

  //========================================
  //                FOOD
  //========================================

  class Jtog_Mre_Meat: Jtog_Item_Base_Class {
    displayname = "[1st JTOG] MRE Meat";
    descriptionshort = "Its so delicious";
    model = "\a3\structures_f_epa\Items\Medical\HeatPack_F.p3d";
    picture = "\AGM_Medical\UI\AGM_bandage_ca.paa";
    scope = 2;
    class ItemInfo: InventoryItem_Base_F {
      mass = 10;
    };

  };

  class Jtog_Mre_Chili_With_Beans: Jtog_Item_Base_Class {
    displayname = "[1st JTOG] MRE Chili with Beans";
    descriptionshort = "Its so delicious";
    model = "\a3\structures_f_epa\Items\Medical\HeatPack_F.p3d";
    picture = "\AGM_Medical\UI\AGM_bandage_ca.paa";
    scope = 2;
    class ItemInfo: InventoryItem_Base_F {
      mass = 10;
    };

  };

  class Jtog_Mre_Vegi_Burger: Jtog_Item_Base_Class {
    displayname = "[1st JTOG] MRE Vegi Burger";
    descriptionshort = "Its for pussys";
    model = "\a3\structures_f_epa\Items\Medical\HeatPack_F.p3d";
    picture = "\AGM_Medical\UI\AGM_bandage_ca.paa";
    scope = 2;
    class ItemInfo: InventoryItem_Base_F {
      mass = 10;
    };

  };

  class Jtog_Mre_Meatballs: Jtog_Item_Base_Class {
    displayname = "[1st JTOG] MRE Meatballs";
    descriptionshort = "Its so delicious";
    model = "\a3\structures_f_epa\Items\Medical\HeatPack_F.p3d";
    picture = "\AGM_Medical\UI\AGM_bandage_ca.paa";
    scope = 2;
    class ItemInfo: InventoryItem_Base_F {
      mass = 10;
    };

  };

  //========================================
  //                WATER
  //========================================

  class Jtog_Drink_Water: Jtog_Item_Base_Class {
    displayname = "[1st JTOG] 1L water bottel";
    descriptionshort = "WAATTTEEERRR";
    model = "\A3\structures_f_epa\Items\Food\BottlePlastic_V2_F.p3d";
    picture = "jtog_hunger_buddy_items\UI\Jtog_Drink_Water_ca.paa";
    scope = 2;
    class ItemInfo: InventoryItem_Base_F {
      mass = 10;
    };
  };


};

class CfgVehicles {
    //External class
    class Box_NATO_Support_F;

    class Jtog_Food_Box: Box_NATO_Support_F {
      author = "[1st JTOG] flaver";
      displayName = "[1st JTOG] Food Box";
      transportmaxmagazines = 128;
      transportmaxbackpacks = 0;
      maximumload = 2000;

      class TransportMagazines {};
      class TransportWeapons {};
      class TransportItems {
        class _xx_JTOG_MRE_Meat {
          count = 10;
          name = "JTOG_MRE_Meat";
        };
        class _xx_Jtog_Mre_Chili_With_Beans {
          count = 10;
          name = "Jtog_Mre_Chili_With_Beans";
        };
        class _xx_Jtog_Mre_Vegi_Burger {
          count = 10;
          name = "Jtog_Mre_Vegi_Burger";
        };
        class _xx_Jtog_Mre_Meatballs {
          count = 10;
          name = "Jtog_Mre_Meatballs";
        };
        class _xx_JTOG_DRINK_Water {
          count = 20;
          name = "JTOG_DRINK_Water";
        };
      };
    };
};