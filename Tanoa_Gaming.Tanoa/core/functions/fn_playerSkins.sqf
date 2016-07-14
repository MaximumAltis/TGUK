#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private["_skinName"];

switch (playerSide) do {
    //case civilian: {
      //  if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
           // if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
          //      player setObjectTextureGlobal [0, ""];
         //   };
         //   if (uniform player isEqualTo "U_C_Poloshirt_burgundy") then {
         //       player setObjectTextureGlobal [0, ""];
         //   };
        //    if (uniform player isEqualTo "U_C_Poloshirt_stripped") then {
        //        player setObjectTextureGlobal [0, ""];
        //    };
         //   if (uniform player isEqualTo "U_C_Poloshirt_tricolour") then {
        //        player setObjectTextureGlobal [0, ""];
       //     };
       //     if (uniform player isEqualTo "U_C_Poloshirt_salmon") then {
        //        player setObjectTextureGlobal [0, ".jpg"];
        //    };
         //   if (uniform player isEqualTo "U_C_Poloshirt_redwhite") then {
         //       player setObjectTextureGlobal [0, ""];
          //  };
          //  if (uniform player isEqualTo "U_C_Commoner1_1") then {
          //      player setObjectTextureGlobal [0, ""];
           // };
       // };
   // };

    case west: {
	
		 if (uniform player isEqualTo "U_B_GEN_Commander_F" && (FETCH_CONST(life_coplevel) == 1)) then { 
                player setObjectTextureGlobal [0, "textures\COPUNIFORMLow.jpg"];
         };
		 
		 if (uniform player isEqualTo "U_B_GEN_Commander_F" && (FETCH_CONST(life_coplevel) == 2)) then { 
                player setObjectTextureGlobal [0, "textures\COPUNIFORMLow.jpg"];
         };
		 
		 if (uniform player isEqualTo "U_B_GEN_Commander_F" && (FETCH_CONST(life_coplevel) == 3)) then { 
                player setObjectTextureGlobal [0, "textures\COPUNIFORMmedium.jpg"];
         };
		 
		 if (uniform player isEqualTo "U_B_GEN_Commander_F" && (FETCH_CONST(life_coplevel) == 4)) then { 
                player setObjectTextureGlobal [0, "textures\COPUNIFORMmedium.jpg"];
         };
		 
		 if (uniform player isEqualTo "U_B_GEN_Commander_F" && (FETCH_CONST(life_coplevel) == 5)) then { 
                player setObjectTextureGlobal [0, "textures\COPUNIFORMSGTINSP.jpg"];
         };
		 
		 if (uniform player isEqualTo "U_B_GEN_Commander_F" && (FETCH_CONST(life_coplevel) == 6)) then { 
                player setObjectTextureGlobal [0, "textures\COPUNIFORMSGTINSP.jpg"];
         };
		 
		 if (uniform player isEqualTo "U_B_GEN_Commander_F" && (FETCH_CONST(life_coplevel) == 7)) then { 
                player setObjectTextureGlobal [0, "textures\COPUNIFORMSGTINSP.jpg"];
         };
		 
		 if (uniform player isEqualTo "U_B_GEN_Commander_F" && (FETCH_CONST(life_coplevel) == 8)) then { 
                player setObjectTextureGlobal [0, "textures\COPUNIFORMHigh.jpg"];
         };
		 
		 if (uniform player isEqualTo "U_B_GEN_Commander_F" && (FETCH_CONST(life_coplevel) == 9)) then { 
                player setObjectTextureGlobal [0, "textures\COPUNIFORMHigh.jpg"];
         };
		 
		 if (uniform player isEqualTo "U_B_GEN_Commander_F" && (FETCH_CONST(life_coplevel) == 10)) then { 
                player setObjectTextureGlobal [0, "textures\COPUNIFORMHigh.jpg"];
         };
		 
		 if (uniform player isEqualTo "U_B_GEN_Commander_F" && (FETCH_CONST(life_coplevel) == 11)) then { 
                player setObjectTextureGlobal [0, "textures\COPUNIFORMHigh.jpg"];
         };
		 
		 if (uniform player isEqualTo "U_B_GEN_Commander_F" && (FETCH_CONST(life_coplevel) == 12)) then { 
                player setObjectTextureGlobal [0, "textures\COPUNIFORMHigh.jpg"];
         };
		 
		 if (uniform player isEqualTo "U_B_GEN_Commander_F" && (FETCH_CONST(life_coplevel) == 13)) then { 
                player setObjectTextureGlobal [0, "textures\COPUNIFORMHigh.jpg"];
         };
		 
		 if (unitBackpack player isEqualTo "B_AssaultPack_cbr") then {
                player setObjectTextureGlobal [0, ""];
         };
    };

    case independent: {
        if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
            player setObjectTextureGlobal [0, "textures\paramedic_unifrom.jpg"];
        };
		
		if (unitBackpack player isEqualTo "B_Carryall_cbr") then {
                player setObjectTextureGlobal [0, ""];
        };
    };
};
