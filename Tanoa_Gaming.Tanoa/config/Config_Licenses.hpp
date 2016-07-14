/*
*    class:
*        variable = Variable Name
*        displayName = License Name
*        price = License Price
*        illegal = Illegal License
*        side = side indicator
*/
class Licenses {
    //Civilian Licenses
    class driver {
        variable = "driver";
        displayName = "STR_License_Driver";
        price = 22000;
        illegal = false;
        side = "civ";
    };

    class boat {
        variable = "boat";
        displayName = "STR_License_Boat";
        price = 22000;
        illegal = false;
        side = "civ";
    };

    class pilot {
        variable = "pilot";
        displayName = "STR_License_Pilot";
        price = 175000;
        illegal = false;
        side = "civ";
    };

    class trucking {
        variable = "trucking";
        displayName = "STR_License_Truck";
        price = 35000;
        illegal = false;
        side = "civ";
    };

    class gun {
        variable = "gun";
        displayName = "STR_License_Firearm";
        price = 45000;
        illegal = false;
        side = "civ";
    };

    class dive {
        variable = "dive";
        displayName = "STR_License_Diving";
        price = 22000;
        illegal = false;
        side = "civ";
    };

    class home {
        variable = "home";
        displayName = "STR_License_Home";
        price = 7500000;
        illegal = false;
        side = "civ";
    };

    //Processing Licenses
	class lumber {
		variable = "lumber";
		displayName = "STR_License_Lumber";
        price = 65000;
        illegal = false;
        side = "civ";
	};
	class mineral {
		variable="mineral";
		displayName = "STR_License_minerals";
		price = 70000;
		illegal = false;
		side = "civ";
		
	};
    class tobacco {
        variable = "tobacco";
        displayName = "STR_License_tobacco";
        price = 73000;
        illegal = false;
        side = "civ";
    };

    class medmarijuana {
        variable = "medmarijuana";
        displayName = "STR_License_Medmarijuana";
        price = 15000;
        illegal = false;
        side = "civ";
    };

    //Illegal Licenses
    class cocaine {
        variable = "cocaine";
        displayName = "STR_License_Cocaine";
        price = 500000;
        illegal = true;
        side = "civ";
    };

    class heroin {
        variable = "heroin";
        displayName = "STR_License_Heroin";
        price = 375000;
        illegal = true;
        side = "civ";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_License_Marijuana";
        price = 290000;
        illegal = true;
        side = "civ";
    };

    class rebel {
        variable = "rebel";
        displayName = "STR_License_Rebel";
        price = 1350000;
        illegal = true;
        side = "civ";
    };

    //Cop Licenses
    class cAir {
        variable = "cAir";
        displayName = "STR_License_Pilot";
        price = 15000;
        illegal = false;
        side = "cop";
    };

    class cg {
        variable = "cg";
        displayName = "STR_License_CG";
        price = 8000;
        illegal = false;
        side = "cop";
    };

    //Medic Licenses
    class mAir {
        variable = "mAir";
        displayName = "STR_License_Pilot";
        price = 15000;
        illegal = false;
        side = "med";
    };
};
