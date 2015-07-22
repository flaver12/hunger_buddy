/*
 * Author: flaver
 * Get the current drink
 *
 * Arguments: None
 * 
 * Return Value:
 * NONE
 *
 */

 
private['_currentDrink', '_player'];
 
 _player = _this select 0;
 
 _currentDrink = _player getVariable "jtog_hb_drink";
 
hint format["%1", _currentDrink];