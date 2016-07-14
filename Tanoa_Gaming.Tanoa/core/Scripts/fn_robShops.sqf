#include "..\..\script_macros.hpp"
/*
file: fn_robShops.sqf
Author: MrKraken
Made from MrKrakens bare-bones shop robbing tutorial on www.altisliferpg.com forums
Description:
Executes the rob shob action!
Idea developed by PEpwnzya v1.0
*/
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
//_kassa = 1000; //The amount the shop has to rob, you could make this a parameter of the call (https://community.bistudio.com/wiki/addAction). Give it a try and post below ;)
_action = [_this,2] call BIS_fnc_param;//Action name

if(side _robber != civilian) exitWith { hint "You are supposed to be a Civil Servant. Get back to work." };
if(_robber distance _shop > 10) exitWith { hint "You need to be within 5 meters of the cashier to rob him!" };

if !(_kassa) then { _kassa = 10000; };
if (_rip) exitWith { hint "Robbery already in progress!" };
if (vehicle player != _robber) exitWith { hint "Get out of your vehicle!" };

if !(alive _robber) exitWith {};
if (currentWeapon _robber isEqualTo "") exitWith { hint "How are you going to rob me when you do not have a weapon?." };
if (_kassa isEqualTo 0) exitWith { hint "There is no cash in the register!" };

_rip = true;
_kassa = 10000 + round(random 10000);
_shop removeAction _action;
_shop switchMove "AmovPercMstpSsurWnonDnon";
_chance = random(100);
if(_chance >= 85) then {[1,format["ALARM! - Fuel station: %1 is being robbed!", _shop]] remoteExec ["life_fnc_broadcast",west]; };

_cops = (west countSide playableUnits);
if(_cops < 3) exitWith{[_vault,-1] remoteExec ["disableSerialization;",2]; hint "There currently aren't enough Police Officers avaliable to respond to calls, it ain't that easy.";};
disableSerialization;
3 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Robbery in progress, stay close (10m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_rip) then
{
For "_i" from 0 to 1 step 0 do {
sleep 0.85;
_cP = _cP + 0.01;
_progress progressSetPosition _cP;
_pgText ctrlSetText format["Robbery in progress, stay close (10m) (%1%2)...",round(_cP * 100),"%"];
_Pos = position player; // by ehno: get player pos
				                _marker = createMarker ["Marker200", _Pos]; //by ehno: Place a Maker on the map
				                "Marker200" setMarkerColor "ColorRed";
				                "Marker200" setMarkerText "ROBBERY IN PROGRESS!";
				                "Marker200" setMarkerType "mil_warning";
if(_cP >= 1) exitWith {};
if(_robber distance _shop > 10.5) exitWith { };
if!(alive _robber) exitWith {};
};
if!(alive _robber) exitWith { _rip = false; };
if(_robber distance _shop > 10.5) exitWith { deleteMarker "Marker200"; _shop switchMove ""; hint "You need to stay within 10 meters to rob the registry! - The cash registerr has now been locked."; 3 cutText ["","PLAIN"]; _rip = false; };
3 cutText ["","PLAIN"];

titleText[format["You have stolen £%1, now get out of here before the cops arrive!",[_kassa] call life_fnc_numberText],"PLAIN"];
deleteMarker "Marker200"; // by ehno delete maker
life_cash = life_cash + _kassa;

_rip = false;
life_use_atm = false;
sleep (30 + random(180));
life_use_atm = true;
if!(alive _robber) exitWith {};
[getPlayerUID _robber,name _robber,"211"] remoteExec ["life_fnc_wantedAdd",2];
};
sleep 300;
_action = _shop addAction["Rob Gas Station",life_fnc_robShops];
_shop switchMove "";