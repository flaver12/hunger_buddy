/*
 * Author: flaver
 * Get the current hunger
 *
 * Arguments: None
 * 
 * Return Value:
 * NONE
 *
 */
 
 private['_currentHunger'];
 
 _player = _this select 0;
 
 _currentHunger = _player getVariable "jtog_hb_hunger";
 
 hint format["%1", _currentHunger];