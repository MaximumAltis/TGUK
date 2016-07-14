/*
*    Format:
*        licenses: ARRAY (This is for limiting spawn to certain things)
*           0: License Name
*           1: License Check Type
*                false: If license isn't set
*                true: If license is set
*           Example:
*                licenses[] = { { "pilot", true }, { "rebel", false } }; //Shows up for players with pilot and without rebel license.
*
*        level: ARRAY (This is for limiting spawn to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL / INVERSE)
*                SCALAR: VALUE => VALUE
*                BOOL: VALUE EXISTS
*                EQUAL: VALUE == VALUE
*                INVERSE: VALUE <= VALUE
*            2: What to compare to (-1 = Check Disabled)
*
*/
class CfgSpawnPoints {
    class Civilian {
        class Kavala {
            displayName = "George Town";
            spawnMarker = "civ_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Lijnhaven";
            spawnMarker = "civ_spawn_4";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Katkoula";
            spawnMarker = "civ_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };

    class Cop {
        class Kavala {
            displayName = "Georgetown HQ";
            spawnMarker = "cop_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Lijnhaven HQ";
            spawnMarker = "Police_Spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\fuelstation_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		
        class Air {
            displayName = "Air HQ";
            spawnMarker = "cop_spawn_4";
            icon = "\a3\ui_f\data\map\Markers\NATO\b_air.paa";
            licenses[] = { { "cAir", true } };
            level[] = { "life_coplevel", "SCALAR", 2 };
        };

    };

    class Medic {
        class Kavala {
            displayName = "Georgetown Hospital";
            spawnMarker = "medic_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		class Athira {
            displayName = "Lijnhaven Hospital";
            spawnMarker = "medic_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };
};
