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
	class jtog_hunger_buddy_scripts {
		units[] = {};
		requiredVersion = 0.60;
		requiredAddons[] = {CBA_MAIN,"a3_modules_f","jtog_hunger_buddy_items"};
		version 	= "0.0.1";
		author[] 	= {"flaver"};
		authorUrl 	= "https://github.com/flaver12";
	};

};

/*
#include "defines.hpp";
#include "RscTitles.hpp"
*/

//Define our own category
class CfgFactionClasses {

	//Set up for the category
	class HUNGERBUDDY {
		displayName="1st JTOG Hunger Buddy";
		priority = 0.1;
    	side = 7;
	};
};


//Functions wrapper
class CfgFunctions {
	
	class jtog_hunger_buddy_scripts {
		#include <\jtog_hunger_buddy_scripts\CfgFunctions.cpp>
	};
};

//Define the module
class CfgVehicles {

	//Wrapper for base module
	class Module_F;
	
	//Create a new module
	class jtog_ModuleRBUSupport: Module_F {
		author 		= "flaver";
		category  	= "HUNGERBUDDY";
		displayName	= "Hunger Buddy init";
		function 	= "jtog_hunger_buddy_scripts_fnc_initMod";
		scope		= 2;
		isGlobal	= 1;

		class Arguments {};

	};
	
	//Defines for agm
	class Man;
	class CAManBase: Man {
		class AGM_Actions {};
		class AGM_SelfActions {

			class JTOG_HB {
				
				displayName = "Hunger Buddy";
				condition = "_player getVariable['jtog_hb_init', false]";
				statement = "";
				showDisabled = 0;
				enableInside = 1;
				icon = "AGM_Medical\UI\Medical_Icon_ca.paa";
				priority = 6;
				subMenu[] = {"JTOG_HB", 1};
				hotkey = "T";

				class JTOG_HB_HUNGER_CHECK {
				  displayName = "$STR_jtog_hunger_buddy_scripts_menu_CheckHunger";
				  condition = "_player getVariable['jtog_hb_init', false]";
				  statement = "[_player] call jtog_hunger_buddy_scripts_fnc_getHunger; ";
				  icon = "AGM_Medical\UI\diagnose_ca.paa";
				  showDisabled = 0;
				  enableInside = 1;
				  priority = 1;
				};
				class JTOG_HB_DRINK_CHECK {
				  displayName = "$STR_jtog_hunger_buddy_scripts_menu_CheckHunger";
				  condition = "_player getVariable['jtog_hb_init', false]";
				  statement = "[_player] call jtog_hunger_buddy_scripts_fnc_getDrink; ";
				  icon = "AGM_Medical\UI\diagnose_ca.paa";
				  showDisabled = 0;
				  enableInside = 1;
				  priority = 1;
				}
				
			};
			
		};
	};
};