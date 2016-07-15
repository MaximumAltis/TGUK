/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "core\Scripts\removeMarkers.sqf";	
[] execVM "core\Scripts\fog.sqf";
// Load no side chat script - this warns and kicks players who are abusing side chat
[] execVM "core\Scripts\noSideChat.sqf";

// Load fast rope script for helis
[] execVM "core\Scripts\fastrope.sqf";

// Loads weather script
// [] execVM "core\Scripts\weather.sqf";

//--- Disable some features of the ArmA engine.
enableRadio false; //--- Radio messages
enableSentences false; //--- Radio messages
enableEnvironment true; //--- Environment
disableRemoteSensors true; //--- Raycasting

[] spawn //Disables ~ key
{
	if (local player) then
	{
		waitUntil {not(isNull (findDisplay 46))};
		(findDisplay 46) displayAddEventHandler
		[
			"KeyDown","if
				(
					((_this select 1) in actionKeys 'ForceCommandingMode')
				)
				then
				{
					true;
				};
		"];
	};
};
StartProgress = true;