#include "..\..\script_macros.hpp"
/*
	File: fn_selfbloodbag.sqf
	Author: [midgetgrimm]
	Second Author: Jesse Schultz

	Description:
	Self bloodbaging
*/
if(player != vehicle player) exitWith {hint "You must exit your vehicle to bloodbag"};
life_interrupted = false;
if(life_action_inUse) exitWith {};
if((player GetVariable ["Escorting",false]) or (player GetVariable ["Transporting",false]) or (player GetVariable ["restrained",false])) exitWith {};
if((damage player) < 0.01) exitWith {};
if(life_inv_bloodbag < 1) exitWith {hint "You need a bloodbag to heal..."};

//hint "You start your own blood transfusion";
player SetVariable["bloodBagged",true,true];
life_action_inUse = true;

if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
	[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
	player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
	player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
};

sleep 6;
if(!alive player OR life_istazed) exitWith {life_action_inUse = false; player SetVariable["bloodBagged",false,true];};
if(life_interrupted) exitWith {life_interrupted = false; titleText["Action cancelled","PLAIN"]; life_action_inUse = false; player SetVariable["bloodBagged",false,true];};
player setdamage 0;
hint "Transfusion was successful";
life_action_inUse = false;
player SetVariable ["bloodBagged",false,true];
[false,"bloodbag",1] call life_fnc_handleInv;