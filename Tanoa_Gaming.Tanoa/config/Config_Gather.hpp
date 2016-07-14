class CfgGather {
    zoneSize = 30;
    class Resources {
        class coconut {
            amount = 1;
            zones[] = { "coconut_tree_1","coconut_tree_2","coconut_tree_3","coconut_tree_4","coconut_tree_5","coconut_tree_6" };
            item = "";
        };

        class sugar {
            amount = 1;
            zones[] = { "sugar_canes_1", "sugar_canes_2", "sugar_canes_3", "sugar_canes_4", "sugar_canes_5", "sugar_canes_6" };
            item = "";
        };
		
		class tabaccounprocessed {
			amount = 1;
			zones[] = { "Salt_mine1_21","Salt_mine1_20" };
			item = "";
		};

        class heroin_unprocessed {
            amount = 1;
            zones[] = { "heroin_1","heroin_2" };
            item = "";
        };

        class cocaine_unprocessed {
            amount = 1;
            zones[] = { "cocaine_1","cocaine_2" };
            item = "";
        };

        class cannabis {
            amount = 1;
            zones[] = { "weed_1","weed_2","weed_area","weed_area_1" };
            item = "";
        };
		
		class lumber2 {
			amount = 1;
			zones[] = { "Wood_Clear","Wood_Clear_3"};
			item = "";
		};
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {
        class mineral {
            amount = 1;
            zones[] = { "minerals" };
            item = "pickaxe";
            mined[] = {"mineral"};
        };
    };
};