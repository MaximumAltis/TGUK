/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
	class lumber {
		MaterialsReq[] = {{"lumber2",1}};
        MaterialsGive[] = {{"lumber_processed",1}};
        Text = "STR_Process_lumber";
        NoLicenseCost = 50000;
	}
    class mineral {
        MaterialsReq[] = {{"mineral",1}};
        MaterialsGive[] = {{"mineral_processed",1}};
        Text = "STR_Process_mineral";
        NoLicenseCost = 57000;
    };
	class tobacco {
        MaterialsReq[] = {{"tabaccounprocessed",1}};
        MaterialsGive[] = {{"tobacco_processed",1}};
        Text = "STR_Process_tobacco";
        NoLicenseCost = 65000;
    };

    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 97000;
    };

    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 105000;
    };

    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 90000;
    };
};
