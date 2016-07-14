#include "..\..\script_macros.hpp"

disableSerialization;
player allowDamage false;
disableUserInput true;
showChat false;
hint "";
[LIFE_ID_PlayerTags,"onEachFrame"] spawn BIS_fnc_removeStackedEventHandler;
1 fadeSound 0;
1 fadeSpeech 0;
[] call SOCK_fnc_updateRequest;
_ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
_outroCam = "camera" camCreate (player modelToWorldVisual [-5,0,1.85]);
_outroCam cameraEffect ["internal","back"];
_outroCam camSetFov 2.000;
_outroCam camSetTarget vehicle player;
_outroCam camSetRelPos [0,-1,1.85];
_outroCam camCommit 0;
waitUntil {camCommitted _outroCam};
_outroCam camSetFov 2;
_outroCam camSetRelPos [0,-5,1.85];
_outroCam camCommit 1;
8 cutFadeOut 3;
waitUntil {camCommitted _outroCam};
_outroCam camSetFov 9;
_outroCam camSetRelPos [0,-5,1050.85];
_outroCam camCommit 1.5;
waitUntil {camCommitted _outroCam};

for "_x" from 0 to 5 do {
  //_x cutRsc ["outro","PLAIN"];
};

sleep 0.85;

cutText ["","BLACK",1];
sleep 1;
3 cutRsc ["SplashNoise","BLACK"];
sleep 0.25;

_name = name player;

[
    format[
    "<t size='1.3' color='#00C10D'>Thank you for visiting the TanoaGaming.co.uk Tanoa Life Server!</t><br/>We hope to see you again soon, %1 ! </t>",_name],
    0,
    0.2,
    10,
    0,
    0,
    8
] spawn BIS_fnc_dynamicText;
private["_activeHC"];
sleep 4;
_activeHC = false;
[[player],"TON_fnc_cleanupRequest",_activeHC,false] spawn life_fnc_MP;
showChat true;
disableUserInput false;
["",0,0.2,10,0,0,8] spawn BIS_fnc_dynamicText;
failMission "Left";
_outroCam cameraEffect ["terminate","back"];
camDestroy _outroCam;