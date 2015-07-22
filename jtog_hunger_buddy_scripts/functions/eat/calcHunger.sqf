/*
 * Author: flaver
 * Calcs the hunger of a unit
 *
 * Arguments: None
 * 
 * Return Value:
 * NONE
 *
 */
 
 //My privates
 private['_player', '_weight', '_speed', '_hunger', '_const', '_lost'];
 
 //select needed values
 _speed = _this select 0;
 _const = 77;
 _weight = player getVariable "jtog_hb_weight";
 _hunger = player getVariable "jtog_hb_hunger";
 _str = [_weight, "kg", ""] call CBA_fnc_replace;
 _weight = parseNumber _str;
 _player = _weight + _const;
 
 //Check now the weight of the player
 if(_player < 120) then {
	
	_lost = ((_speed * 100)/_player)-_speed;
	
 } else {
	
	_lost = (_speed * 100)/_player;
	
 };
 
 //Calc new hunger
 _hunger = _hunger - _lost;
 
 //Set the new hunger
player setVariable["jtog_hb_hunger", round _hunger];
