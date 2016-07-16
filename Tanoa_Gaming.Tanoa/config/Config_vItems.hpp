/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coconut", "sugar", "waterBottle", "tbacon", "redgull", "bloodbag", "artifactoldp", "artifactnewp","goldp", "pickaxe", "toolkit", "fuelFull", "storageSmall", "storageBig", "goldbar" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "tbacon", "redgull", "bloodbag", "toolkit", "fuelFull", "defibrillator" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "tbacon", "redgull", "bloodbag", "pickaxe", "toolkit", "fuelFull", "lockpick", "ziptie", "boltCutter", "blastingCharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "turtle_raw", "turtle_soup" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "waterBottle", "tbacon", "redgull", "pickaxe", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "heroin_processed", "marijuana", "cocaine_processed" };
    };
	
	class lumber2 {
        name = "STR_Shops_Lumber";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "lumber2", "lumber_processed"};
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salema_Raw", "salema", "mackerel_Raw", "mackerel", "tuna_Raw", "tuna"  };
    };

    class mineral  {
        name = "STR_Shops_Minerals";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "mineral", "mineral_processed" };
    };

    class tobacco {
        name = "STR_Shops_Diamond";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "tabaccounprocessed", "tobacco_processed" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts", "redgull", "bloodbag", "toolkit", "fuelFull", "spikeStrip", "defuseKit"  };
    };
	
	class hunting {
        name = "STR_Shops_Cop223";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "sheep_raw", "sheep", "goat_raw", "goat"  };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 3;
        buyPrice = 10500;
        sellPrice = 8000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };
	
	class ziptie {
        variable = "ziptie";
        displayName = "STR_Item_Ziptie";  //TODO: Localize
        weight = 1;
        buyPrice = 15000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\zipties.paa";
    };
	
	class bloodbag {
        variable = "bloodbag";
        displayName = "STR_Item_Bloodbag";
        weight = 2;
        buyPrice = 25000;
        sellPrice = 18000;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 5;
        buyPrice = 14750;
        sellPrice = 11000;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 3500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 8500;
        sellPrice = 5000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 5;
        buyPrice = 23750;
        sellPrice = 15850;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 2;
        buyPrice = 9000;
        sellPrice = 7500;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 18;
        buyPrice = -1;
        sellPrice = 950000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 350000;
        sellPrice = 100000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
       illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
       displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
      variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
       icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 125000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
   };

    //Mined Items
	class coconut {
		variable = "coconut";
        displayName = "STR_Item_coconut";
        weight = 2;
        buyPrice = 1550;
        sellPrice = 475;
        illegal = false;
        edible = 10;
        icon = "";
	}

    class sugar {
        variable = "sugar";
        displayName = "STR_Item_sugar";
        weight = 2;
        buyPrice = 1550;
        sellPrice = 575;
        illegal = false;
        edible = 10;
        icon = "";
    };
	
	class lumber2 {
		variable = "lumber2";
        displayName = "STR_Item_Lumber";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1550;
        illegal = false;
        edible = -1;
        icon = "";
    };
	
	class lumber_processed {
		variable = "lumber_processed";
        displayName = "STR_Item_Lumber2";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2750;
        illegal = false;
        edible = -1;
        icon = "";
    };
	
	class tabaccounprocessed {
        variable = "tabaccounprocessed";
        displayName = "STR_Item_tobaccco";
        weight = 4;
        buyPrice = -1;
        sellPrice = 1250;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class tobacco_processed {
        variable = "tobacco_processed";
        displayName = "STR_Item_tobaccco3";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2950;
        illegal = false;
        edible = -1;
        icon = "";
    };
	
	class mineral {
		variable = "mineral";
		displayName = "STR_Item_Mineral213";
		weight = 7;
        buyPrice = -1;
        sellPrice = 1875;
        illegal = false;
        edible = -1;
        icon = "";
	}
	
	class mineral_processed {
		variable = "mineral_processed";
		displayName = "STR_Item_Mineral123213213";
		weight = 5;
        buyPrice = -1;
        sellPrice = 3930;
        illegal = false;
        edible = -1;
        icon = "";
	}

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 5;
        buyPrice = -1;
        sellPrice = 5450;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 2;
        buyPrice = -1;
        sellPrice = 4000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 6750;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 1500;
        sellPrice = 200;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };
	
	//cathable huntin

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 2;
        buyPrice = 1750;
        sellPrice = 1500;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 1950;
        sellPrice = 1500;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 2;
        buyPrice = 1250;
        sellPrice = 1500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 2750;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 3;
        buyPrice = 3000;
        sellPrice = 2570;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 5;
        buyPrice = -1;
        sellPrice = 2450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 4;
        buyPrice = 4000;
        sellPrice = 3450;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 2450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 5;
        buyPrice = 4000;
        sellPrice = 3450;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };
	
//shipwrecks

class artifactold {
        variable = "artifactold";
        displayName = "STR_Item_artifactold";
        weight = 12;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class artifactoldp {
        variable = "artifactoldp";
        displayName = "STR_Item_artifactold2";
        weight = 12;
        buyPrice = -1;
        sellPrice = 115000;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class artifactnew {
        variable = "artifactnew";
        displayName = "STR_Item_artifactnew";
        weight = 12;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };
	
	class artifactnewp {
        variable = "artifactnewp";
        displayName = "STR_Item_artifactnew2";
        weight = 12;
        buyPrice = -1;
        sellPrice = 150000;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class gold {
        variable = "gold";
        displayName = "STR_Item_goldflake";
        weight = 12;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class goldp {
        variable = "goldp";
        displayName = "STR_Item_goldflake2";
        weight = 12;
        buyPrice = -1;
        sellPrice = 250000;
        illegal = false;
       edible = -1;
        icon = "";
    };
};
