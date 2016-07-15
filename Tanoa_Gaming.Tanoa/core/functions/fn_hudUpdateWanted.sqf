#include "..\..\script_macros.hpp"
/*
    Author: GetSomePanda / Panda
    SteamID: 76561198145366418
    File Name: fn_hudUpdateWanted.sqf
    Information: Updates wanted bounty everytime it changes to the hud.
*/
disableSerialization;
 
waitUntil {!isNull (uiNamespace getVariable ["osefStatusBar",displayNull])};
 
if(isNil "bountyToAdd") then
{
    bountyToAdd = 0;
};
 
if(life_first_wUpdate) then
{
    life_first_wUpdate = false;
}
else
{
    waitUntil {bountyToAdd != 0 || myBounty isEqualTo -1};
    if(myBounty isEqualTo -1) then
    {
        myBounty = 0;
    }
    else
    {
        myBounty = myBounty + bountyToAdd;
    };
};
 
//Add commas to the number so 1000 will be 1,000 . I know this is a ugly way of doing it but cba.
stringedMyBounty = nil;
 
 
aFunction =
{
    _numArr = toArray (_this call BIS_fnc_numberText);
    _numArr = _numArr apply {[_x,44] select (_x / 32 isEqualTo 1)};
    stringedMyBounty = toString _numArr
};
 
 
myBounty call aFunction;
waitUntil{!isNil "stringedMyBounty"};
((uiNamespace getVariable "osefStatusBar")displayCtrl 1203)ctrlSetStructuredText parseText
            format["<t shadow='1' shadowColor='#000000'><img size='1.6' shadowColor='#000000' image='icons\bank1.paa'/>%1",stringedMyBounty];
uiSleep 1;
bountyToAdd = 0;
stringedMyBounty = nil;
 
[] spawn life_fnc_hudUpdateWanted;