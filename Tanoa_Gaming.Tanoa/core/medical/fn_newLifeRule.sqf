#include "..\..\script_macros.hpp"
/*
	File: fn_new_Life_Rule.sqf
	Author: Altislife.co.uk for framework, NLR Timer edited by Repentz
	Description: It's an NLR Timer?
*/

private["_uiDisp","_time","_timer"];

disableSerialization;

7 cutRsc ["life_nlrtimer","PLAIN"];

_uiDisp = GVAR_UINS "life_nlrtimer";

_timer = _uiDisp displayCtrl 38301;

_time = time + (20 * 60);

life_nlrtimer_running = true;

For "_i" from 0 to 1 step 0 do {

      if(isNull _uiDisp) then {

            7 cutRsc ["life_nlrtimer","PLAIN"];

            _uiDisp = GVAR_UINS "life_nlrtimer";

            _timer = _uiDisp displayCtrl 38301;

      };

      if(round(_time - time) < 1) exitWith {};

      if(life_nlrtimer_stop) exitWith {life_nlrtimer_stop = false;};

      _timer ctrlSetText format["NLR: %1",[(_time - time),"MM:SS.MS"] call BIS_fnc_secondsToString];

      sleep 0.08;

};

life_nlrtimer_running = false;

7 cutText["","PLAIN"];