#include "..\..\script_macros.hpp"
private["_type"];
_msg = [_this,0,"",[""]] call BIS_fnc_param;
_from = [_this,1,"",[""]] call BIS_fnc_param;
_type = [_this,2,0,[0]] call BIS_fnc_param;
if(_from isEqualTo "") exitWith {};


switch (_type) do {
	case 0 : {
		private["_message"];
		_back = [_this,3,objNull,[objNull]] call BIS_fnc_param;
		if(!("ItemRadio" in (assignedItems  player))) exitWith {["1",player,6] remoteExecCall ["life_fnc_getMSG",_back];};
		_message = format[">>>Message From %1: %2",_from,_msg];
		hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>New message<br/><br/><t color='#33CC33'><t align='left'><t size='1'>to: <t color='#ffffff'>You<br/><t color='#33CC33'>From: <t color='#ffffff'>%1<br/><br/><t color='#33CC33'>Message:<br/><t color='#ffffff'>%2",_from,_msg];

		["TextMessage",[format["You have gotten %1 a new message",_from]]] call bis_fnc_showNotification;
		systemChat _message;
	};

	case 1: {
		if(side player != independent) exitWith {};
		private["_message","_loc","_unit"];
		_loc = [_this,3,"",[""]] call BIS_fnc_param;
		_unit = [_this,4,objNull,[objNull]] call BIS_fnc_param;
		_message = format["!!!THW ANFRAGE: %1",_msg];
		hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>THW Anfrage<br/><br/><t color='#33CC33'><t align='left'><t size='1'>to: <t color='#ffffff'>You<br/><t color='#33CC33'>From: <t color='#ffffff'>%1<br/><t color='#33CC33'>Coords: <t color='#ffffff'>%2<br/><br/><t color='#33CC33'>Message:<br/><t color='#ffffff'>%3",_from,_loc,_msg];

		["TextMessage",[format["NHS Request for %1",_from]]] call bis_fnc_showNotification;
	};

	case 2 : {
		if(side player != west) exitWith {};
		private["_message","_loc","_unit"];
		_loc = [_this,3,"",[""]] call BIS_fnc_param;
		_unit = [_this,4,objNull,[objNull]] call BIS_fnc_param;
		_message = format["TPD Reporting %1: %2",_from,_msg];
		if(isNil "_loc") then {_loc = "Unknown";};
		hint parseText format ["<t color='#316dff'><t size='2'><t align='center'>New Message<br/><br/><t color='#33CC33'><t align='left'><t size='1'>to: <t color='#ffffff'>All Police<br/><t color='#33CC33'>From: <t color='#ffffff'>%1<br/><t color='#33CC33'>Coords: <t color='#ffffff'>%2<br/><br/><t color='#33CC33'>Message:<br/><t color='#ffffff'>%3",_from,_loc,_msg];

		["PoliceDispatch",[format["Eine Neue Meldung von: %1",_from]]] call bis_fnc_showNotification;
		systemChat _message;
	};

	case 3 : {
		if(FETCH_CONST(life_adminlevel) < 1) exitWith {};
		private["_message","_loc","_unit"];
		_loc = [_this,3,"",[""]] call BIS_fnc_param;
		_unit = [_this,4,objNull,[objNull]] call BIS_fnc_param;
		_message = format["???Admin Request From %1: %2",_from,_msg];
		if(isNil "_loc") then {_loc = "Unknown";};
		hint parseText format ["<t color='#ffcefe'><t size='2'><t align='center'>Admin request<br/><br/><t color='#33CC33'><t align='left'><t size='1'>to: <t color='#ffffff'>Admins<br/><t color='#33CC33'>From: <t color='#ffffff'>%1<br/><t color='#33CC33'>Coords: <t color='#ffffff'>%2<br/><br/><t color='#33CC33'>Message:<br/><t color='#ffffff'>%3",_from,_loc,_msg];

		["AdminDispatch",[format["%1 has requested an admin!",_from]]] call bis_fnc_showNotification;
		systemChat _message;
	};

	case 4 : {
		private["_message"];
		_message = format["!!! Admin Message: %1",_msg];
		_admin = format["Sent From: %1", _from];
		hint parseText format ["<t color='#FF0000'><t size='2'><t align='center'>Admin message<br/><br/><t color='#33CC33'><t align='left'><t size='1'>to: <t color='#ffffff'>You<br/><t color='#33CC33'>From: <t color='#ffffff'>An Admin<br/><br/><t color='#33CC33'>Message:<br/><t color='#ffffff'>%1",_msg];

		["AdminMessage",["Youve received a message from the admin!"]] call bis_fnc_showNotification;
		systemChat _message;
		if(FETCH_CONST(life_adminlevel) > 0) then {systemChat _admin;};
	};

	case 5 : {
		private["_message","_admin"];
		_message = format["!!!ADMIN MESSAGE: %1",_msg];
		_admin = format["Gesendet von: %1", _from];
		hint parseText format ["<t color='#FF0000'><t size='2'><t align='center'>Admin message<br/><br/><t color='#33CC33'><t align='left'><t size='1'>to: <t color='#ffffff'>All Players<br/><t color='#33CC33'>From: <t color='#ffffff'>The Admins<br/><br/><t color='#33CC33'>Message:<br/><t color='#ffffff'>%1",_msg];

		["AdminMessage",["You Have Received A Message From An Admin!"]] call bis_fnc_showNotification;
		systemChat _message;
		if(FETCH_CONST(life_adminlevel) > 0) then {systemChat _admin;};
	};

	case 6: {
		hint parseText "<t color='#FF0000'>Peep, peep.. No connection under this number.</t><br/>Please try again later!";
	};
};