{

 gROOT->ProcessLine(".L makeResPlots.C+");
 //TTree* regTestTree = HistFuncs::makeChain("egRegTree","/eos/cms/store/cmst3/group/lightbylight/Pranati/LByL_2023/resultsEleV1_Run3_2023_UPC/regEleEcalTrkRun3_2023_UPC_RealIC_stdVar_stdCuts_ntrees1500_applied.root"); 
 //regTestTree->AddFriend("regCorr = egRegTreeFriend","/eos/cms/store/cmst3/group/lightbylight/Pranati/LByL_2023/resultsEleV1_Run3_2023_UPC/regEleEcalTrkRun3_2023_UPC_RealIC_stdVar_stdCuts_ntrees1500_applied.root");
 
 //Photon
//  TTree* regTestTree = HistFuncs::makeChain("egRegTree","/eos/cms/store/group/phys_heavyions/pjana/LByL_2023_Regression/resultsPhoV1_Run3_2023_UPC/regPhoEcalRun3_2023_UPC_RealIC_RealTraining_stdVar_stdCuts_ntrees1500_applied.root"); 
//   regTestTree->AddFriend("regCorr = egRegTreeFriend","/eos/cms/store/group/phys_heavyions/pjana/LByL_2023_Regression/resultsPhoV1_Run3_2023_UPC/regPhoEcalRun3_2023_UPC_RealIC_RealTraining_stdVar_stdCuts_ntrees1500_applied.root");
 
 //Low pt GSD electron
//  TTree* regTestTree = HistFuncs::makeChain("egRegTree","/eos/cms/store/group/phys_heavyions/pjana/LByL_2023_Regression/resultsEleV1_Run3_2023_UPC_LowPtGsdEle/regEleEcalTrkRun3_2023_UPC_LowPtGsdEle_RealIC_stdVar_stdCuts_ntrees1500_applied.root"); 
//  regTestTree->AddFriend("regCorr = egRegTreeFriend","/eos/cms/store/group/phys_heavyions/pjana/LByL_2023_Regression/resultsEleV1_Run3_2023_UPC_LowPtGsdEle/regEleEcalTrkRun3_2023_UPC_LowPtGsdEle_RealIC_stdVar_stdCuts_ntrees1500_applied.root");
 
//  //Electron
 TTree* regTestTree = HistFuncs::makeChain("egRegTree","/eos/cms/store/group/phys_heavyions/pjana/LByL_2023_Regression/resultsEleV1_Run3_2023_UPC/regEleEcalTrkRun3_2023_UPC_RealIC_stdVar_stdCuts_ntrees1500_applied.root"); 
 regTestTree->AddFriend("regCorr = egRegTreeFriend","/eos/cms/store/group/phys_heavyions/pjana/LByL_2023_Regression/resultsEleV1_Run3_2023_UPC/regEleEcalTrkRun3_2023_UPC_RealIC_stdVar_stdCuts_ntrees1500_applied.root");
 
 //Real only 
 //TTree* regTestTree = HistFuncs::makeChain("egRegTree","/eos/cms/store/group/phys_heavyions/pjana/LByL_2023_Regression/resultsEleV1_Run3_2023_UPC/regEleEcalTrkRun3_2023_UPC_RealIC_stdVar_stdCuts_ntrees1500_applied.root"); 
 //regTestTree->AddFriend("regCorr = egRegTreeFriend","/eos/cms/store/group/phys_heavyions/pjana/LByL_2023_Regression/RealOnlyRegression_Electron/regEleEcalTrkRun3_2023_UPC_RealIC_stdVar_stdCuts_ntrees1500_applied.root");
 
 cout << "Test"<< endl;
}
