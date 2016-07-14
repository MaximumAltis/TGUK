#include "..\..\script_macros.hpp"
/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: MAXIMUM
    
    Description:
    Loads the cops out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//clothing specific
if (FETCH_CONST(life_coplevel) == 1) then {
player addUniform "U_B_GEN_Commander_F";
player addHeadgear "H_Cap_police";
player addGoggles "G_Aviator";
player addVest "V_Rangemaster_belt";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
};

if (FETCH_CONST(life_coplevel) == 2) then {
player addUniform "U_B_GEN_Commander_F";
player addMagazine "16Rnd_9x21_Mag";
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addHeadgear "H_Cap_police";
player addGoggles "G_Aviator";
player addVest "V_TacVest_blk_POLICE";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
};

if (FETCH_CONST(life_coplevel) == 3) then {
player addUniform "U_B_GEN_Commander_F";
player addMagazine "16Rnd_9x21_Mag";
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addHeadgear "H_Cap_police";
player addGoggles "G_Aviator";
player addVest "V_TacVest_blk_POLICE";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
};

if (FETCH_CONST(life_coplevel) == 4) then {
player addUniform "U_B_GEN_Commander_F";
player addMagazine "16Rnd_9x21_Mag";
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addHeadgear "H_Beret_blk";
player addGoggles "G_Aviator";
player addVest "V_TacVest_blk_POLICE";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
};

if (FETCH_CONST(life_coplevel) == 5) then {
player addUniform "U_B_GEN_Commander_F";
player addMagazine "16Rnd_9x21_Mag";
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addHeadgear "H_Beret_blk";
player addGoggles "G_Aviator";
player addVest "V_TacVest_gen_F";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
};

if (FETCH_CONST(life_coplevel) == 6) then {
player addUniform "U_B_GEN_Commander_F";
player addMagazine "16Rnd_9x21_Mag";
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addHeadgear "H_Beret_02";
player addGoggles "G_Aviator";
player addVest "V_PlateCarrier1_blk";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
};

if (FETCH_CONST(life_coplevel) == 7) then {
player addUniform "U_B_GEN_Commander_F";
player addMagazine "16Rnd_9x21_Mag";
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addHeadgear "H_Beret_Colonel";
player addGoggles "G_Aviator";
player addVest "V_PlateCarrier1_blk";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
};

if (FETCH_CONST(life_coplevel) == 8) then {
player addUniform "U_B_GEN_Commander_F";
player addMagazine "16Rnd_9x21_Mag";
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addHeadgear "H_Beret_Colonel";
player addGoggles "G_Aviator";
player addVest "V_PlateCarrier1_blk";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
};

if (FETCH_CONST(life_coplevel) == 9) then {
player addUniform "U_B_GEN_Commander_F";
player addMagazine "16Rnd_9x21_Mag";
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addHeadgear "H_Beret_gen_F";
player addGoggles "G_Aviator";
player addVest "V_PlateCarrier2_blk";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
};

if (FETCH_CONST(life_coplevel) == 10) then {
player addUniform "U_B_GEN_Commander_F";
player addMagazine "16Rnd_9x21_Mag";
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addHeadgear "H_Beret_gen_F";
player addGoggles "G_Aviator";
player addVest "V_PlateCarrier2_blk";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
};

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;