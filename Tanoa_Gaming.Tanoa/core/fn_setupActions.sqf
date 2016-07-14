/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        //Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']];
    };
};

//Bloodbag Self
life_actions = life_actions + [player addAction["<t color='#FF0000'>Self Bloodbag</t>",life_fnc_bloodbagself,"",1.5,false,true,"",'player isKindOf "Man" && alive player && (damage player) > 0.01 && (life_inv_bloodbag > 0)']];

//Bloodbag Others
life_actions = life_actions + [player addAction["<t color='#FF0000'>Give Bloodbag</t>",life_fnc_bloodbag,"",1.5,true,true,"",'!isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && alive cursorTarget && (damage cursorTarget) > 0.01 && cursorTarget distance player < 3.5 && (life_inv_bloodbag > 0)']];