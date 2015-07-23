/*
 * Author: flaver
 * GUI for eat
 *
 * Arguments: None
 *
 * Return Value:
 * NONE
 *
 */

//Include here own defines
#include "defines.hpp"

class jtog_hunger_buddy_scripts_eatGui {

	idd = 101060;
	movingenabled = 0;
	//onLoad = "[1500] spawn AW_fnc_loadItems";

	class ControlsBackground {

		class jtog_hb_hunger_background: JtogRscText {
			idc = 1000;
			x = 0.340129 * safezoneW + safezoneX;
			y = 0.257938 * safezoneH + safezoneY;
			w = 0.319741 * safezoneW;
			h = 0.286074 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};

	};

	class Controls {

		class jtog_hb_hunger_ok: JtogRscButton {
			idc = 1600;
			text = "Eat"; //--- ToDo: Localize;
			x = 0.546414 * safezoneW + safezoneX;
			y = 0.444986 * safezoneH + safezoneY;
			w = 0.087671 * safezoneW;
			h = 0.0550141 * safezoneH;
		};

		class jtog_hb_hunger_lb: JtogRscListBox {
			idc = 1500;
			x = 0.365915 * safezoneW + safezoneX;
			y = 0.312952 * safezoneH + safezoneY;
			w = 0.26817 * safezoneW;
			h = 0.121031 * safezoneH;
		};

		class jtog_hb_hunger_close: JtogRscButton {
			idc = 1601;
			text = "X"; //--- ToDo: Localize;
			x = 0.639242 * safezoneW + safezoneX;
			y = 0.268941 * safezoneH + safezoneY;
			w = 0.0154713 * safezoneW;
			h = 0.0220057 * safezoneH;
		};


	};

};