class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
            { "O_Truck_03_fuel_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "B_Truck_01_covered_F", { "", "", -1 } },
			{ "B_Truck_01_fuel_F", { "", "", -1 } },
			{ "O_Truck_03_device_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
			{ "I_Heli_Transport_02_F", { "", "", -1 } },
			{ "C_Plane_civil_01_F", { "", "", -1 } },
			{ "C_Plane_civil_01_racing_F", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Scooter_transport_01_F", { "", "", -1 } },
            { "C_Rubberboat", { "", "", -1 } },
            { "O_SDV_01_F", { "", "", -1 } },
			{ "C_Boat_Civil_01_F", { "", "", -1 } },
			{ "C_Boat_transport_02_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_repair_F", { "", "", -1 } },
            { "B_G_Van_01_transport_F", { "", "", -1 } },
            { "B_G_Van_01_fuel_F", { "", "", -1 } },
			{ "I_C_Offroad_02_unarmed_F", { "", "", -1 } },
			{ "O_T_LSV_02_unarmed_F", { "", "", -1 } },
			{ "O_LSV_02_unarmed_F", { "", "", -1 } },
			{ "B_G_Offroad_01_armed_F", { "", "", -1 } },
			{ "O_MRAP_02_F", { "", "", -1 } },
			{ "I_MRAP_03_F", { "", "", -1 } }
        };
    };
	
	class reb_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "I_Heli_light_03_unarmed_F", { "", "", -1 } },
            { "B_Heli_Transport_03_unarmed_F", { "", "", -1 } },
            { "B_T_VTOL_01_vehicle_F", { "", "", -1 } },
            { "B_T_VTOL_01_infantry_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_bench_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_box_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_fuel_F", { "", "", -1 } },
			{ "C_Heli_Light_01_civil_F", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Van_01_box_F", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "B_Quadbike_01_F", { "life_coplevel", "SCALAR", 1 } },
			{ "C_Hatchback_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "C_Offroad_02_unarmed_F", { "life_coplevel", "SCALAR", 3 } }, //jeep
            { "C_SUV_01_F", { "life_coplevel", "SCALAR", 4 } },
			{ "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 5 } },
			{ "B_MRAP_01_F", { "life_coplevel", "SCALAR", 6 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "I_Heli_light_03_unarmed_F", { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "C_Scooter_transport_01_F", { "", "", -1 } },
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "life_coplevel", "SCALAR", 3 } },
            { "I_C_Boat_transport_02_F", { "", "", -1 } },
			{ "B_SDV_01_F", { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
		vFuelSpace = 12500;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
			{ "Civilian", "civ", {
                "\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"
            } },
            { "Camo", "civ", {
                "\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"
            } }
		};
    };

    class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 500;
		vFuelSpace = 12500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 2800000;
        textures[] = {
			{ "Black", "civ", {
                "\A3\air_f_heli\Heli_Transport_03\Data\heli_transport_03_ext01_black_co.paa",
				"\A3\air_f_heli\Heli_Transport_03\Data\heli_transport_03_ext02_black_co.paa"
            } },
			{ "Dark Green", "civ", {
                "\A3\air_f_heli\Heli_Transport_03\Data\heli_transport_03_ext01_co.paa",
				"\A3\air_f_heli\Heli_Transport_03\Data\heli_transport_03_ext02_co.paa"
            } }
		};
    };

    class O_Heli_Transport_04_F {
        vItemSpace = 100;
		vFuelSpace = 12500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = { { "Camo", "civ", {
                "\A3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_01_co.paa",
				"\A3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_02_co.paa"
            } }
		};
    };

    class O_Heli_Transport_04_bench_F {
        vItemSpace = 250;
		vFuelSpace = 12500;
        licenses[] = { {"pilot"}, {"cAir"}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class O_Heli_Transport_04_box_F {
        vItemSpace = 700;
		vFuelSpace = 12500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 2600000;
        textures[] = { };
    };

    class O_Heli_Transport_04_fuel_F {
        vItemSpace = 500;
		vFuelSpace = 12500;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 1750000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
		vFuelSpace = 12500;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 3000;
        textures[] = { { "Black", "cop", {
                "\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
            } }
			};
    };

    class O_Truck_03_transport_F {
        vItemSpace = 400;
		vFuelSpace = 12500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 550000;
        textures[] = { { "HEX", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa"
            } },
            { "HEX Green", "civ", {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"
            } } };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
		vFuelSpace = 12500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 450000;
        textures[] = { { "HEX", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa"
            } },
            { "HEX Grün", "civ", {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"
            } } };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 90;
		vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = { };
    };
	
	class B_G_Offroad_01_repair_F {
        vItemSpace = 90;
		vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
		vFuelSpace = 12500;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
		vFuelSpace = 12500;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
		vFuelSpace = 12500;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 500;
		vFuelSpace = 12500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 900;
		vFuelSpace = 12500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = { };
    };

    class B_Truck_01_covered_F {
        vItemSpace = 600;
		vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = { };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 750;
		vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1050000;
        textures[] = { };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
		vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};
will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class O_MRAP_02_F {
        vItemSpace = 45;
		vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 3000000;
        textures[] = {};
    };
	
	class I_MRAP_03_F : O_MRAP_02_F{};

    class C_Offroad_01_F {
        vItemSpace = 90;
		vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue \ White ", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } }
        };
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 50;
		vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 115000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
			{ "Police", "cop", {
                "textures\Police_Hatchback_BLUE.paa"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 40;
		vFuelSpace = 12500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 2750;
        textures[] = {
            { "Digi Desert", "civ", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
			{ "Police", "cop", {
                "textures\NEWPOLICEQUAD.PAA"
            } },
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 300;
		vFuelSpace = 12500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 300;
		vFuelSpace = 12500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 175000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 250;
		vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 450000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_indp_co.paa",
				"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_indp_co.paa"
            } },
            { "Desert Digi", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_opfor_co.paa",
				"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_opfor_co.paa"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 500;
		vFuelSpace = 12500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {
            { "HEX", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_CO.paa"
            } },
            { "HEX Green", "civ", {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cover_ghex_CO.paa"
            } }
        };
    };

    class O_Truck_03_fuel_F {
        vItemSpace = 500;
		vFuelSpace = 12500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 675000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

     class C_Hatchback_01_F {
        vItemSpace = 50;
		vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 7500;
        textures[] = {
            { "White Police", "cop", {
                "textures\police_HatchBack_white.paa"
            } },
			{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 90;
		vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 24500;
        textures[] = {
           { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
			{ "Police", "cop", {
                "textures\NEWSUVBLUE.paa"
            } },
			{ "HC Police", "cop", {
                "textures\NEWSUVWHITE.paa"
            } },
			{ "Medic", "med", {
                "textures\NEWSUVMEDIC.paa"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 120;
		vFuelSpace = 12500;
        licenses[] = { {"driver" }, {""}, {""}, {""} };
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_G_Van_01_transport_F {
        vItemSpace = 120;
		vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 125;
        vFuelSpace = 12500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 65000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class B_G_Van_01_fuel_F {
        vItemSpace = 125;
        vFuelSpace = 12500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 65000;
        textures[] = {
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        vFuelSpace = 12500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {};
    };
	
	class B_MRAP_01_F {
        vItemSpace = 150;
        vFuelSpace = 12500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {};
    };
	class B_Heli_Light_01_F {
        vItemSpace = 100;
        vFuelSpace = 12500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {{ "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
			{ "Police", "cop", {
                "textures\police_HummingbirdWhite.paa"
            } }
		};
    };	
	class C_Heli_Light_01_civil_F {
        vItemSpace = 100;
        vFuelSpace = 12500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = { { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
			};
    };
	
	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 300;
        vFuelSpace = 12500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {{ "Black", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "Orca", "civ", {
                "\A3\air_f_heli\Heli_Light_02\Data\heli_light_02_ext_opfor_v2_co.paa"
            } }
			};
    };
	
	class I_Heli_Transport_02_F {
        vItemSpace = 400;
        vFuelSpace = 12500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {{ "Digi Green", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\heli_transport_02_1_indp_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\heli_transport_02_2_indp_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\heli_transport_02_3_indp_co.paa"
            } }};
    };
	
	class I_Heli_light_03_unarmed_F {
        vItemSpace = 400;
        vFuelSpace = 12500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {{ "Dark", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
			{ "Police", "cop", {
                "textures\police_Hellcat.paa"
            } }
		};
    };
	
	class B_SDV_01_F {
        vItemSpace = 10;
        vFuelSpace = 12500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {};
    };
	
	class O_SDV_01_F {
        vItemSpace = 10;
        vFuelSpace = 12500;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };
	
	class C_Plane_civil_01_F {
        vItemSpace = 550;
        vFuelSpace = 12500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };
	
	class C_Plane_civil_01_racing_F {
        vItemSpace = 550;
        vFuelSpace = 12500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };
	
	class B_T_VTOL_01_vehicle_F {
        vItemSpace = 850;
       vFuelSpace = 12500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 7000000;
        textures[] = {};
    };
	
	class B_T_VTOL_01_infantry_F {
        vItemSpace = 850;
        vFuelSpace = 12500;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 7000000;
        textures[] = {};
    };
	
	class C_Offroad_02_unarmed_F {
        vItemSpace = 90;
        vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 14500;
        textures[] = {
			{ "Police", "cop", {
                "textures\NEWPOLICE4X4.paa"
            } },
			{ "Dark", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
		};
    };
	
	class I_C_Offroad_02_unarmed_F {
        vItemSpace = 90;
        vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 14500;
        textures[] = {};
    };
	
	class O_LSV_02_unarmed_F {
        vItemSpace = 160;
        vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };
	
	class O_T_LSV_02_unarmed_F {
        vItemSpace = 160;
        vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };
	
	
	class B_T_LSV_01_unarmed_F {
        vItemSpace = 160;
        vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };
	
	class B_CTRG_LSV_01_light_F {
        vItemSpace = 160;
        vFuelSpace = 12500;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };
	
	class C_Boat_transport_02_F {
        vItemSpace = 450;
       vFuelSpace = 12500;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };
	
	class I_C_Boat_transport_02_F {
        vItemSpace = 150;
        vFuelSpace = 12500;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };
	
	class C_Scooter_transport_01_F {
        vItemSpace = 25;
        vFuelSpace = 12500;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };
};