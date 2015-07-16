#include<\jtog_hunger_buddy_scripts\macros.hpp>
/*
 * Author: flaver
 * the init of the mod, be careful what you change here 
 *
 * Arguments: None
 * 
 * Return Value:
 * NONE
 *
 */

//Get the values form the module 
_logic 		= _this select 0;
_units 		= _this select 1;
_activated 	= _this select 2;

//Check if module is called or not
if!(_activated) exitWith {};

//init variables for player

player PUBLIC_VAR("jtog_hb_init", true);