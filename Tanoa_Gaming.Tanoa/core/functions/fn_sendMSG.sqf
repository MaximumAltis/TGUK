#include "..\..\script_macros.hpp"
private["_type"];
_type = [_this,0,0,[0]] call BIS_fnc_param;

switch (_type) do {
	//Private MSG
	case 0: {
		private["_msg","_to"];
		ctrlShow[3015,false];
		_msg = ctrlText 3003;
		if(lbCurSel 3004 isEqualTo -1) exitWith {hint "You must pick a players name to message!!"; ctrlShow[3015,true];};
		_to = call compile format["%1",(lbData[3004,(lbCurSel 3004)])];
		if(isNull _to) exitWith {ctrlShow[3015,true];};
		if(isNil "_to") exitWith {ctrlShow[3015,true];};
		if(_msg isEqualTo "") exitWith {hint "You must type a message out!";ctrlShow[3015,true];};

		hint format["Player %1 has sent the following message: %2",name _to,_msg];
		[_msg,name player,0,player] remoteExecCall ["life_fnc_getMSG",_to];
		[] call life_fnc_cellphone;
		ctrlShow[3015,true];
	};
	//THW anfrage
	case 1: {
		ctrlShow[3022,false];
		_msg = ctrlText 3003;
		_to = "NHS Units";
		if(_msg isEqualTo "") exitWith {hint "You must type a message out!";ctrlShow[3022,true];};

		[_msg,name player,1,mapGridPosition player,player] remoteExecCall ["life_fnc_getMSG",independent];
		[] call life_fnc_cellphone;
		hint format["You have sent a message to the NHS.",_to,_msg];
		ctrlShow[3022,true];
	};
	//COP anfrage
	case 2: {
		ctrlShow[3016,false];
		_msg = ctrlText 3003;
		_to = "TPD";
		if(_msg isEqualTo "") exitWith {hint "You must enter a message!";ctrlShow[3016,true];};

		[_msg,name player,2,mapGridPosition player,player] remoteExecCall ["life_fnc_getMSG",west];
		[] call life_fnc_cellphone;
		hint format["You %1 sent the following message: %2",_to,_msg];
		ctrlShow[3016,true];
	};
	//Admin anfrage
	case 3: {
		ctrlShow[3017,false];
		_msg = ctrlText 3003;
		_to = "The Admins";
		if(_msg isEqualTo "") exitWith {hint "You must enter a message!";ctrlShow[3017,true];};

		[_msg,name player,3,mapGridPosition player,player] remoteExecCall ["life_fnc_getMSG",-2];
		[] call life_fnc_cellphone;
		hint format["You %1 sent the following message: %2",_to,_msg];
		ctrlShow[3017,true];
	};
	//Admin pvt
	case 4: {
		if(isServer) exitWith {};
		if(FETCH_CONST(life_adminlevel) < 1) then {hint "You are not an admin!";};
		private["_msg","_to"];
		ctrlShow[3020,false];
		_msg = ctrlText 3003;
		_to = call compile format["%1",(lbData[3004,(lbCurSel 3004)])];
		if(isNull _to) exitWith {ctrlShow[3020,true];};
		if(isNil "_to") exitWith {ctrlShow[3020,true];};
		if(_msg isEqualTo "") exitWith {hint "You must enter a message!";ctrlShow[3020,true];};

		[_msg,name player,4] remoteExecCall ["life_fnc_getMSG",_to];
		[] call life_fnc_cellphone;
		hint format["Admin message sent out to: %1 - Message: %2",name _to,_msg];
		ctrlShow[3020,true];
	};
	//Admin all
	case 5: {
		if(isServer) exitWith {};
		if(FETCH_CONST(life_adminlevel) < 1) then {hint "You are not an admin!";};
		private["_msg","_from"];
		ctrlShow[3021,false];
		_msg = ctrlText 3003;
		if(_msg isEqualTo "") exitWith {hint "You must enter a message!";ctrlShow[3021,true];};

		[_msg,name player,5] remoteExecCall ["life_fnc_getMSG",-2];
		[] call life_fnc_cellphone;
		hint format["Admin message to all players: %1",_msg];
		ctrlShow[3021,true];
	};
};