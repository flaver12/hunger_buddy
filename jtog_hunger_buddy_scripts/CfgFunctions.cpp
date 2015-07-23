/*
 * Author: flaver
 * Here will be all defined functions
 *
 * Arguments: None
 *
 * Return Value:
 * NONE
 *
 */

 //All general functions
 class General{

	class initMod {file="\jtog_hunger_buddy_scripts\functions\init.sqf";};
	class loadItems{file="\jtog_hunger_buddy_scripts\functions\loadItems.sqf"};

 };

 //All functions that has to deal with eat
 class Eat{

	class calcHunger{file="\jtog_hunger_buddy_scripts\functions\eat\calcHunger.sqf";};
	class getHunger{file="\jtog_hunger_buddy_scripts\functions\eat\getHunger.sqf";};
	class eatFood{file="\jtog_hunger_buddy_scripts\functions\eat\eatFood.sqf";};

 };

  //All functions that has to deal with drink
 class Drink{

	class calcDrink{file="\jtog_hunger_buddy_scripts\functions\drink\calcDrink.sqf"};
	class getDrink{file="\jtog_hunger_buddy_scripts\functions\drink\getDrink.sqf";};

 };
