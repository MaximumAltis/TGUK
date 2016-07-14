#include "..\script_macros.hpp"
/*
    File: fn_initCiv.sqf
    Author: Bryan "Tonic" Boardwine
    Description:
    Initializes the civilian.
*/
private["_spawnPos"];
waitUntil {!(isNull (findDisplay 46))};

if (life_is_alive && !life_is_arrested) then {
    /* Spawn at our last position */
    player setVehiclePosition [life_civ_position, [], 0, "CAN_COLLIDE"];
} else {
    if (!life_is_alive && !life_is_arrested) then {
        if (LIFE_SETTINGS(getNumber,"save_civilian_positionStrict") isEqualTo 1) then {
            _handle = [] spawn life_fnc_civLoadout;
            waitUntil {scriptDone _handle};
            CASH = 0;
            [0] call SOCK_fnc_updatePartial;
        };
		rulesok = false;
		if(!createDialog "agb") exitWith {};
		waitUntil{!isNull (findDisplay 32154)}; //Wait for the spawn selection to be open.
		waitUntil{isNull (findDisplay 32154)}; //Wait for the spawn selection to be done.
		if(!rulesok)then {
			player enableSimulation false;
			["Aborted",false,true] call BIS_fnc_endMission;
			sleep 35;
		};
		rulesok = false;
        [] call life_fnc_spawnMenu;
        waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
        waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
    } else {
        if (life_is_arrested) then {
            life_is_arrested = false;
            [player,true] spawn life_fnc_jail;
        };
    };
};
life_is_alive = true;
player addRating 9999999;