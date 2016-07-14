#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

//Handle the tazer first (Top-Priority).
if(!isNull _source) then {
	if(_source != _unit) then {
		_curWep = currentWeapon _source;
		if(_projectile in ["B_9x21_Ball","B_556x45_dual"]) then {
			if (_curWep in ["hgun_P07_snds_F","arifle_SDAR_F"]) then {
				if(side _source isEqualTo west) then {
					if (playerSide isEqualTo civilian) then {
						private["_distance"];
						_distance = if(_projectile isEqualTo "B_556x45_dual") then {100} else {35};
						_damage = false;
						if(_unit distance _source < _distance) then {
							if(!life_istazed) then {
								if(!life_isknocked) then {
									if(!(_unit GetVariable ["restrained",false])) then {
										if (vehicle player != player) then {
											if (typeOf (vehicle player) isEqualTo "B_Quadbike_01_F") then {
												player action ["Eject",vehicle player];
												[_unit,_source] spawn life_fnc_tazed;
											};
										} else {
											[_unit,_source] spawn life_fnc_tazed;
										};
									};
								};
							};
						};
					};
				};

				//Temp fix for super tasers on cops.
				if(side _source isEqualTo west) then {
					if (playerSide isEqualTo west OR playerSide isEqualTo independent) then {
						_damage = false;
					};
				};
			};
		};
	};
};

if (vehicle _unit isEqualTo _unit) then {
	if ( !(_source isKindOf "Air" OR _source isKindOf "Car" OR _source isKindOf "Boat") ) then	{
		_isVehicle = vehicle _source;
		
		if (_isVehicle isKindOf "Air" OR _isVehicle isKindOf "Car" OR _isVehicle isKindOf "Boat") then	{
			if (_source isEqualTo driver _isVehicle) then {
				_damage = false;
				hint "Since you were VDM'd you did not take damage";
			};
		};
	};
};

//[] spawn life_fnc_hudUpdate;
_damage;