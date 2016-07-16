class agb
{
    idd = 32154;
    name = "agb";
    movingEnable = false;
    enableSimulation = false;
    
    class controlsBackground
    {
        class RscTitleBackground : Life_RscText
        {
            colorBackground[] = {1,0.537,0,0.7};
            idc = -1;
            text = "Server Rules:";
            x = 0.329844 * safezoneW + safezoneX;
            y = 0.258 * safezoneH + safezoneY;
            w = 0.340312 * safezoneW;
            h = 0.022 * safezoneH;
        };
        
        class RscBackground : Life_RscText
        {
            colorBackground[] = {0, 0, 0, 0.6};
            idc = -1;
            x = 0.329844 * safezoneW + safezoneX;
            y = 0.28 * safezoneH + safezoneY;
            w = 0.340312 * safezoneW;
            h = 0.462 * safezoneH;
        };
		
        class RsclolStatus : Life_RscStructuredText
        {
            idc = -1;
            colorBackground[] = {0, 0, 0, 0};
            sizeEx = 0.0001;
            text = "<t size = '1'>Please read the forums before playing on this server!<br/>The link can be found here:<br/><a color='#298B68' href='http://www.tanoagaming.co.uk'>Click Here</a><br/><br/>Teamspeak 3 Server<br/><t color='#298B68'>Name:</t> [UK/EU] TanoaGaming.co.uk Teamspeak<br/><t color='#298B68'>IP:</t> 92.222.176.65<br/><t color='#298B68'>Port:</t> 8346<br/><br/>DirectLinks:<br/>Homepage:</a> http://www.TanoaGaming.co.uk<br/><br/>Restarts<br/><t color='#298B68'>0:00, 04:00, 08:00, 12:00, 16:00, 20:00 </t><br/><br/><t color='#FF0000'>By playing on TanoaGaming.co.uk you are accepting these rules and agree to abide by them.</t></t>";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.319687 * safezoneW;
			h = 0.451 * safezoneH;
		};
    };
	
    class Controls
    {
        class naz : Life_RscButtonMenu
        {
            idc = -1;
            text = "Decline";
            colorBackground[] = {1,0,0,0.7};
            onButtonClick = "closeDialog 0;";
            x = 0.329844 * safezoneW + safezoneX;
            y = 0.742 * safezoneH + safezoneY;
            w = 0.113437 * safezoneW;
            h = 0.022 * safezoneH;
        };
        
        class az : Life_RscButtonMenu
        {
            idc = -1;
            text = "Accept";
            colorBackground[] = {0,1,0,0.7};
            onButtonClick = "rulesok = true; closeDialog 0;";
            x = 0.546406 * safezoneW + safezoneX;
            y = 0.742 * safezoneH + safezoneY;
            w = 0.12375 * safezoneW;
            h = 0.022 * safezoneH; 
        };
    };
};