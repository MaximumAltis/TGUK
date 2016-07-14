#include "..\..\script_macros.hpp"
/*
	File: fn_licMenu.sqf
	Adapted: Maximum
	Purpose: Pull text for info
*/
private["_lic","_side","_struct","_shortname"];
disableSerialization;

_side = switch(playerSide) do {case west:{"cop"}; case civilian:{"civ"}; case independent:{"med"};};

_lic = CONTROL(7123,2014);
_price = CONTROL(7123,2015);
_mylic = _display displayCtrl 55131;
_struct = "";

{
	_shortname = _x;
  _displayName = M_CONFIG(getText,"Licenses",_shortname,"displayName");
  _displayName = localize _displayName;
  _price = M_CONFIG(getNumber,"Licenses",_shortname,"price");
  _sideFlag = M_CONFIG(getText,"Licenses",_shortname,"side");
  _hasLicense = (LICENSE_VALUE(_shortname,_sideFlag));
  if(!_hasLicense) then {
  _lic lbAdd format["%1 ($%2)", _displayname, _price];
  _lic lbSetData [(lbSize _lic) - 1, _shortname];
  } else {
  _mylic lbAdd format["%1", _displayname];
  _mylic lbSetData [(lbSize _mylic) - 1, _shortname];
  };
}foreach _buyables;

if(EQUAL(_struct,"")) then {
	_struct = "No Licenses";
};

_lic ctrlSetStructuredText parseText format["
<t size='0.8px'>
%1
</t>
",_struct];

_price ctrlSetStructuredText parseText ("<t size='0.8'>
General Licenses<br/>
<t color='#FFB124'>Driver:</t> £22000<br/>
<t color='#FFB124'>Boating:</t> £22000<br/>
<t color='#FFB124'>Trucking:</t> £35000<br/>
<t color='#FFB124'>Pilots:</t> £175000<br/>
<t color='#FFB124'>Gun:</t> £45000<br/>
<t color='#FFB124'>Diving:</t> £22000<br/>
<t color='#FFB124'>Home:</t> £0<br/>
<t color='#FFB124'>Eigentumsurkunde:</t> £0<br/><br/>

Legal Money Making Licenses<br/>
<t color='#FFB124'>Lumber:</t> £65000<br/>
<t color='#FFB124'>Mineral:</t> £70000<br/>
<t color='#FFB124'>Tobacco:</t> £73000<br/><br/>

Illegal Money Making Licenses<br/>
<t color='#FFB124'>Marijuana:</t> £290000<br/>
<t color='#FFB124'>Heroin:</t> £375000<br/>
<t color='#FFB124'>Cocaine:</t> £500000<br/><br/>;

Rebel License<br/>
<t color='#FFB124'>twet:</t> £1350000<br/><br/>