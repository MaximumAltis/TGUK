#define INFINITE 1e+1000
#define ST_RIGHT 0x01
class osefStatusBar {
    idd = -1;
    onLoad = "uiNamespace setVariable ['osefStatusBar', _this select 0]";
    fadein = 0;
    fadeout = 0;
    duration = INFINITE;
    movingEnable = 0;
    controlsBackground[] = {};
    objects[] = {};
    class controls {
        class statusBarText {
			idc = 555556;
			x = safezoneX + safezoneW - 0.67;
			y = safezoneY + safezoneH - 0.08;
			w = 0.67;
			h = 0.056;
			shadow = 2;
			colorBackground[] = { 0, 0, 0, 0.3 };
			font = "PuristaSemibold";
			size = 0.03;
			type = 13;
			style = 1;
			text="";
			class Attributes {
				align="left";
				color = "#CCCCCC";//#5fe60c
            };
        };
		
		class LIFE_TGUK_LOGO: life_RscPicture	{
        idc = 2207;

        text = "textures\watermark2.paa"; //--- ToDo: Localize;
        x = -8.01657e-005 * safezoneW + safezoneX;
        y = 0.9071 * safezoneH + safezoneY;
        w = 0.0579474 * safezoneW;
        h = 0.0970164 * safezoneH;
		};
		
        class statusBarCash {
			idc = 555557;
			x = safezoneX + safezoneW - 0.18;
			y = safezoneY + safezoneH - 0.24;
			w = 0.18;
			h = 0.056;
			shadow = 2;
			colorBackground[] = { 0, 0, 0, 0.3 };
			font = "PuristaSemibold";
			size = 0.05;
			type = 13;
			style = 1;
			text="";
			class Attributes {
				align="left";
				color = "#CCCCCC";//#5fe60c
            };
        };
		
        class statusBarBank {
			idc = 1203;
			x = safezoneX + safezoneW - 0.18;
			y = safezoneY + safezoneH - 0.17;
			w = 0.18;
			h = 0.056;
			shadow = 2;
			colorBackground[] = { 0, 0, 0, 0.3 };
			font = "PuristaSemibold";
			size = 0.05;
			type = 13;
			style = 1;
			text="";
			class Attributes {
				align="left";
				color = "#CCCCCC";//#5fe60c
            };
        };
    };
};
