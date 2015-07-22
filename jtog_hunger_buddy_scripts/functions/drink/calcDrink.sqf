/*
 * Author: flaver
 * Calcs the drink of a unit
 *
 * Arguments: None
 * 
 * Return Value:
 * NONE
 *
 */
 
 private['_speed', '_drink', '_const', '_str', '_player', '_weight', '_lost'];
 
 _speed = _this select 0;
 _weight = player getVariable "jtog_hb_weight";
 _drink = player getVariable "jtog_hb_drink";
 _const = 77;
 _str = [_weight, "kg", ""] call CBA_fnc_replace;
 _weight = parseNumber _str;
 _player = _weight + _const;
 
 //Check now the weight of the player
 if(_player < 120) then {
	
	_lost = ((_speed * 100)/_player)-3;
	
 } else {
	
	_lost = (_speed * 100)/_player-1;
	
 };
 
 //Calc new drink
 _drink = _drink - _lost;
 
 if(_drink > 0) then {
	//Set the new hunger
	player setVariable["jtog_hb_drink", round _drink];
 };