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
		version 	= "0.0.4";
		author[] 	= {"flaver"};
		authorUrl 	= "https://github.com/flaver12";
	};

};

//Functions wrapper
class CfgFunctions {
	
	class jtog_hunger_buddy_scripts {
		#include <\jtog_hunger_buddy_scripts\CfgFunctions.cpp>
	};
};
