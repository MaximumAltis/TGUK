#include "..\..\script_macros.hpp"
/*
	File: fn_radar.sqf
	Author: Silly Aussie kid named Jaydon
	Edited: Dark
	Description:
	Looks like weird but radar?
*/
if(playerSide != west) exitWith {};
private ["_speed","_vehicle"];
_vehicle = cursorObject;
_speed = round speed _vehicle;

if(playerSide != west) exitWith {};

if(!(vehicle player != player)) then
{
	if((_vehicle isKindOf "Car") && (currentWeapon player) isEqualTo "hgun_P07_snds_F") then
	{
		switch (true) do
		{
			case ((_speed > 33 && _speed <= 120)) :
			{
				hint parseText format ["<t color='#ffffff'><t size='2'><t align='center'>" +(localize "STR_Cop_Radar")+ "<br/><t color='#33CC33'><t align='center'><t size='1'>" +(localize "STR_Cop_VehSpeed"),round  _speed];
			};

			case ((_speed > 120)) :
			{
				hint parseText format ["<t color='#ffffff'><t size='2'><t align='center'>" +(localize "STR_Cop_Radar")+ "<br/><t color='#FF0000'><t align='center'><t size='1'>" +(localize "STR_Cop_VehSpeed"),round  _speed];
			};
		};
	};
}
else
{
	_speed = 0;
	_info = "";
	_vehicle = [];
	_owner =[];
	_cars = [];
	{
		if (alive _x) then{
			_cars set [(count _cars),_x];
		};
	} forEach nearestObjects [vehicle player,["Car"],100];

	if(count _cars < 2) exitWith { hint parseText format ["<t color='#5A80EB'><t align='center'><t size='1.5'>ERROR!</t></t><br/><t color='#FF0000'><t size='1'>No vehicles in range!</t></t>"]; };
	_vehicle = (_cars select 1);
	_type = getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");
	if(count (crew (_vehicle)) isEqualTo 0) exitWith {hint parseText format ["<t color='#5A80EB'><t align='center'><t size='1.5'>ERROR!</t></t><br/><t color='#FF0000'><t size='1'>No moving vehicles in range!</t></t>"];};
	_speed = round speed (_vehicle);
	_owner = [_vehicle GetVariable "vehicle_info_owners"] call life_fnc_vehicleOwners;

	// Format speed & owner below here
	if(_speed > 110) then
	{
		_info = format ["<t color='#5A80EB'><t size='1.5'><t align='center'>Radar<br/><t color='#FF0000'><t align='center'><t size='1'>Speed %1 km/h", _speed];
	}
	else
	{
		_info = format ["<t color='#5A80EB'><t size='1.5'><t align='center'>Radar<br/><t color='#33CC33'><t align='center'><t size='1'>Speed %1 km/h", _speed];
	};

	if(isNil {_owner}) then
	{
		_info = _info + format ["<br/><t color='#FFD700'><t size='1.5'><t align='center'>Owner:<br/><t color='#33CC33'><t align='center'><t size='1.8'> NOT FOUND!"];
	}
	else
	{
		_info = _info + format ["<br/><t color='#5A80EB'><t size='1.5'><t align='center'>Owner:<br/><t color='#33CC33'><t align='center'><t size='1'> %1", _owner];
	};

	_info = _info + format ["<br/><t color='#5A80EB'><t size='1.5'><t align='center'>Vehicle:<br/><t color='#33CC33'><t align='center'><t size='1'> %1", _type];

	hint parseText _info;
};