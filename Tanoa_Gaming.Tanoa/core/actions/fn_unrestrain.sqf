#include "..\..\script_macros.hpp"
/*
    File: fn_unrestrain.sqf
    Author:

    Description:

*/
private["_unit"];
_unit = param [0,objNull,[objNull]];
if (isNull _unit || !(_unit getVariable ["restrained",false])|| !(isNil(_unit getVariable["restrainedType",""]))) exitWith {}; //Error check?


_success = false;
switch playerSide do
{
	case west:
	{
		_unit setVariable ["restrained",false,true];
		_unit setVariable ["Escorting",false,true];
		_unit setVariable ["transporting",false,true];
		detach _unit;
		_success = true;
		[0,"STR_NOTF_Unrestrain",true,[_unit getVariable ["realname",name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
	};
	case independent:
	{
		if(_unit getVariable ["restrainedType",""] == "zip") then
		{
			_unit setVariable ["restrained",false,true];
			_unit setVariable ["Escorting",false,true];
			_unit setVariable ["transporting",false,true];
			detach _unit;
			_success = true;
		};
	};
	case civilian:
	{
		if(_unit getVariable ["restrainedType",""] == "zip") then
		{
			_unit setVariable ["restrained",false,true];
			_unit setVariable ["Escorting",false,true];
			_unit setVariable ["transporting",false,true];
			detach _unit;
			_success = true;
		};
	};
};

if(_success) then {
	if(_unit getVariable ["restrainedType",""] == "zip") then
	{
		[1,"%1's zipties were cut by %2",true,[_unit GetVariable ["realname",name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
	}
	else
	{
		[1,"STR_NOTF_Unrestrain",true,[_unit GetVariable ["realname",name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
	};
};