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
player setVariable["jtog_hb_hunger", 100];
player setVariable["jtog_hb_drink", 100];
//Use here agm function to get the weight
_weight = [player] call AGM_Movement_fnc_getWeight;
player setVariable["jtog_hb_weight", _weight];
player setVariable["jtog_hb_init", true];

//Add check for walk

while {true} do { 
   
    _speed = speed player; 
    
	if(_speed > 5) then {
		
		//Call function for hunger stuff
		[_speed] call jtog_hunger_buddy_scripts_fnc_calcHunger;
		
		//Call function for water
		[_speed] call jtog_hunger_buddy_scripts_fnc_calcDrink;
	};
	
    sleep 2; 
};  