/*
	Function by Maximum @ TanoaGaming.co.uk 
	Fills the Info Box with the content and subjects list
*/
private ["_start"];
_start = [_this,0,0,[0]] call BIS_fnc_param;

//InfoMenus
if(_start isEqualTo 0) exitWith {
disableSerialization;
createDialog "infoMenu";
switch(playerSide) do {case west:{ctrlShow[2011,false];ctrlShow[2016,false];};case independent:{ctrlShow[2011,false];ctrlShow[2016,false];};};

_InfoMenus = ((findDisplay 41500) displayCtrl 2300);
lbClear _InfoMenus;

_InfoMenus lbAdd "Welcome"; lbSetValue [2300, (lbSize _InfoMenus)-1, 0];
_InfoMenus lbAdd "Rules"; lbSetValue [2300, (lbSize _InfoMenus)-1, 1];
_InfoMenus lbAdd "Information"; lbSetValue [2300, (lbSize _InfoMenus)-1, 2];
_InfoMenus lbAdd "Key Binds"; lbSetValue [2300, (lbSize _InfoMenus)-1, 3];
_InfoMenus lbAdd "License Prices"; lbSetValue [2300, (lbSize _InfoMenus)-1, 4];
_InfoMenus lbAdd "Market Prices"; lbSetValue [2300, (lbSize _InfoMenus)-1, 5];
_InfoMenus lbAdd "Changelog"; lbSetValue [2300, (lbSize _InfoMenus)-1, 6];lbSetColor[2300,(lbSize _InfoMenus)-1,[1,0,0.082,1]];
_InfoMenus lbAdd "Staff"; lbSetValue [2300, (lbSize _InfoMenus)-1, 7];


_InfoMenus lbSetCurSel 1;
};

//Infos
if(_start isEqualTo 1) exitWith {
private ["_index","_infoText"];
_index = ((findDisplay 41500) displayCtrl 2300) lbValue (lbCurSel 2300);

//if(_index isEqualTo 0) exitWith {};


_infoText = call {
// Welcome
if(_index isEqualTo 0) exitWith {
"Welcome to the TanoaGaming.co.uk Tanoa Life Server, We hope you enjoy your stay <br/>
";
};

//Regeln
if(_index isEqualTo 1) exitWith {"You are asked to always keep up with the rules page: :<br/><a color='#FFB124' href='http://www.TanoaGaming.co.uk'>Rules Page</a>"};


//Server
if(_index isEqualTo 2) exitWith {
"TanoaGaming.co.uk Information<br/>
<t color='#298B68'>Verison Number:</t> 4.4r3<br/>
<t color='#298B68'>Release Date:</t> 6-28-2016<br/>
Restart Times<br/>
<t color='#FF0000'>0:00 | 4:00 | 8:00 | 12:00 | 16:00 | 20:00</t>
";
};

//Keys
if(_index isEqualTo 3) exitWith {
"<t color='#298B68'>Y</t> Player Menu<br/>
<t color='#298B68'>U</t>Unlock Vehicles<br/>
<t color='#298B68'>T</t> Vehicle Trunk Inventory<br/>
<t color='#298B68'>1-4</t> Hand gestures<br/>
<t color='#298B68'>Shift + R</t> Restrain (coming soon for civs)<br/>
<t color='#298B68'>Shift + B</t> Surrender<br/>
<t color='#298B68'>Shift + G</t> Knockout<br/>
<t color='#298B68'>Shift + Space</t> Jump<br/>
<t color='#298B68'>Shift + H</t> Holster Weapon<br/>
<t color='#298B68'>Windows Key</t> Gather Virtual Items<br/>
<t color='#298B68'>Windows Key</t> Interaction Menu<br/>";
};

//Prices
if(_index isEqualTo 4) exitWith {
"General Licenses<br/>
<t color='#298B68'>Driver:</t> £22,000<br/>
<t color='#298B68'>Boat:</t> £22,000<br/>
<t color='#298B68'>Pilot:</t> £175,000<br/>
<t color='#298B68'>Trucking:</t> £35,000<br/>
<t color='#298B68'>Diving:</t> £22,000<br/>
<t color='#298B68'>Gun Owners:</t> £45,000<br/>
<t color='#298B68'>Home Owners:</t> £7,500,000<br/><br/>

Legal Processing Licenses<br/>
<t color='#298B68'>Lumber:</t> £65,000<br/>
<t color='#298B68'>Mineral:</t> £70,000<br/>
<t color='#298B68'>Tobacco:</t> £73,000<br/><br/>

Illegal Processing Licenses<br/>
<t color='#298B68'>Marijuana:</t> £290,000<br/>
<t color='#298B68'>Heroin:</t> £375,000<br/>
<t color='#298B68'>Cocaine:</t> £500,000<br/><br/>

Guerrilla Licenses<br/>
<t color='#298B68'>Guerrilla License:</t> £1,350,000";
};

if(_index isEqualTo 5) exitWith {
"Buy Prices<br/>
<t color='#FFB124'>Driver:</t> 750$<br/>
<t color='#FFB124'>Boat:</t> 25.000$<br/>
<t color='#FFB124'>Pilot:</t> 75.000$<br/>
<t color='#FFB124'>Trucking:</t> 100.000<br/>
<t color='#FFB124'>Diving:</t> 22.000<br/>
<t color='#FFB124'>Gun Owners:</t> 2.000<br/>
<t color='#FFB124'>Home Owners:</t> 45.000<br/><br/>

Sell Prices<br/>
<t color='#FFB124'>Basic Guerrilla License:</t> £45,000<br/>
<t color='#FFB124'>Advance Guerrilla License:</t> £65,000$<br/>
<t color='#FFB124'>Guerrilla Pilot License:</t> £75.000";
};

if(_index isEqualTo 6) exitWith {
"<t size='1.2px' align='center' color='#FFB124'>Please report all bugs on the forums</t><br/>
<t align='center' color='#FFB124'>Failure to do so might result in your ban</t><br/><br/>

<t align='center' color='#FF0000'>Below is the changelog.</t><br/><br/>

<t align='center'><t size='2px' align='center' color='#FF0000'>TANOA RELEASE</t><br/><br/>
Please check the forums for the latest patch notes.<br/><br/>

<t align='center'><t size='1.5px' align='center' color='#FFB124'>--------------------------------------</t>
";
};

if(_index isEqualTo 7) exitWith {
"<t size='1.2px' align='center' color='#FFB124'>Staff Center</t><br/><br/>

<t align='center' color='#FF0000'>Please listen and obey all staff.</t><br/><br/>

<t align='center'><t size='2px' align='center' color='#FF0000'>HEAD ADMIN</t><br/><br/>
Stephan<br/><br/>

<t align='center'><t size='1.5px' align='center' color='#FFB124'>--------------------------------------</t><br/>

<t align='center'><t size='2px' align='center' color='#FF8000'>ADMINS</t><br/><br/>
Kirby<br/>
Winters<br/><br/>

<t align='center'><t size='1.5px' align='center' color='#FFB124'>--------------------------------------</t><br/>

<t align='center'><t size='2px' align='center' color='#E3FF00'>MODERATORS</t><br/><br/>
Lloydy<br/><br/>

<t align='center'><t size='1.5px' align='center' color='#FFB124'>--------------------------------------</t>
";
};
};

//Add Infos
((findDisplay 41500) displayCtrl 2304) ctrlSetStructuredText parseText ("<t size='0.8'>" + _infoText);
};
[] spawn life_fnc_InfoMenu;