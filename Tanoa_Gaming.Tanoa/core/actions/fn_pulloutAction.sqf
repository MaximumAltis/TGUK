#include "..\..\script_macros.hpp"
/*
    File: fn_pulloutAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Pulls civilians out of a car if it's stopped.
*/
private["_crew"];
_veh = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_crew = crew _veh;

if(_veh distance player > 4.5) exitWith {};
if(speed _veh > 1) exitWith {};

/*	if(side _x != west) then {
			_x setVariable ["transporting",false,true]; _x SVAR ["Escorting",false,true];
			[_x] remoteExecCall ["life_fnc_pulloutVeh",_x];
	};
} forEach _crew;*/

{
	switch(playerSide) do {
		case independent: { //do nothing you're a damn medic
		};

		case west: { //im a cop i can pull anyone out
			_x setVariable ["transporting",false,true];
			_x setVariable ["Escorting",false,true];
			[_x] remoteExecCall ["life_fnc_pulloutVeh", _x];
	};

		case civilian: { //im a civ, i pull out when she has zip ties on huehuehue
			if(_x getVariable ["restrained",true,true];) then {
				_x setVariable ["transporting",false,true];
				_x setVariable ["Escorting",false,true];
				[_x] remoteExecCall ["life_fnc_pulloutVeh", _x];
			};
		};
	};
} forEach _crew;
