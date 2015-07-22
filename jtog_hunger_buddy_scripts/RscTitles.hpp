class RscTitles {
	
	titles[] = {test_abc};
	
	class test_abc {
		
		idd = -1;
		movingenable = 1;
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		name = "test_abc";
		onLoad = "uiNamespace setVariable['test_abc', _this select 0]";
		onUnLoad = "uiNamespace setVariable['test_abc', nil]";
		
		class controls {
			
			class hunger_value: RscText {
				idc = 10000001;
				text = "Hunger"
				x = 0.95975 * safezoneW + safezoneX;
				y = 0.72 * safezoneH + safezoneY;
				h = 0.048 * safezoneH;
				sizeEx = "0.02/ (getResolution select 5)";
			};
			
		};
		
	};
	
};