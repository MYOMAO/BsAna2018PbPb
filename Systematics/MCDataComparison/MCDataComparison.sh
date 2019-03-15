

doppComparison=0
doPbPbComparison=1



#ppData="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/D0Local/skim_Dntuple_crab_pp_MinimumBias1to20_AOD_D0Dsy1p1_tkpt0p5eta2p0_04122016.root"
#ppMC="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/D0Local/ntD_EvtBase_20161206_DfinderMC_pp_20160502_dPt0tkPt0p5_D0_prompt_Dpt1Dy1p5tkPt0p5Decay2p9Dalpha0p14Skim_pthatweight.root"
#PbPbData="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/D0Local/ntD_EvtBase_20170328_DfinderData_PAMinimumBias1-8_PbPb_20170328_PARun2016B_PromptReco_v1_D0_dPt0tkPt0p2_Dalpha0p14Dchi20p05_LowDsvpv6Dchi20p15_HightkPt0p5.root"
#PbPbMC="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/PbPbMC/Prompt/PbPbPrompt.root"


#ppData="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/NewAnalysisSamples/ppData/ppAll.root"
#ppMC="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/NewAnalysisSamples/ppMC/Pthat0/Pthat0.root"

#ppData="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/TMVAVeryLowCheck/Data_D0_pp_TMVA_BDTG_pp.root"
#ppMC="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/Unskim2/ppUnskim2.root"

ppData="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/ppReweightStudy/Data/PD23.root"
ppMC="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/ppReweightStudy/MC/MC.root"


#PbPbData="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/2018Ana/BTMVA/TMVAMerge2/Data_D0_pp_TMVA_BDTG_pp.root"
#PbPbMC="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/2018Ana/BTMVA/TMVAMerge2/MC_D0_pp_TMVA_BDTG_pp.root"

PbPbMC="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/2018Ana/BsTMVA/TMVAHigh4Bins/MC_Bs_pp_TMVA_BDT_pp.root"
PbPbData="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/2018Ana/BsTMVA/TMVAHigh4Bins/Data_Bs_pp_TMVA_BDT_pp.root"



CommonCut=('Btrk1Pt > 1 && Btrk2Pt > 1 && Bchi2cl > 0.05 && BsvpvDistance/BsvpvDisErr > 2 && abs(Btrk1Eta-0.0) < 2.4  && abs(Btrk2Eta-0.0) < 2.4 &&  abs(By-0.0) < 2.4')
#CommonCut="(Dalpha < 0.20 && (DsvpvDistance/DsvpvDisErr) > 2.5 && Dchi2cl > 0.05 && Dtrk1Pt > 0.5 && Dtrk2Pt > 0.5 && Dy < 1 && Dy > -1 && abs(Dtrk1Eta) < 2.0  && abs(Dtrk2Eta) < 2.0 && (Dtrk1PtErr/Dtrk1Pt) < 0.3 && (Dtrk2PtErr/Dtrk2Pt) < 0.3)"


SignalCut="$CommonCut && (abs(Bmass - 5.36682 ) < 0.08 )"
SideBandCut="$CommonCut && (abs(Bmass - 5.36682 ) > 0.20 &&  abs(Bmass - 5.36682) < 0.30)"
GenCut=" $CommonCut && (abs(Bmass - 5.36682 ) < 0.08 && Bgen == 23333)"


if [ $doppComparison -eq 1 ]; then
#SignalCut="Dalpha < 0.10 && (DsvpvDistance/DsvpvDisErr) > 4 && Dchi2cl > 0.10 && Dtrk1Pt > 1 && Dtrk2Pt > 1 && Dy < 1 && Dy > -1 && abs(Dtrk1Eta) < 1.5  && abs(Dtrk2Eta) < 1.5 && (Dtrk1PtErr/Dtrk1Pt) < 0.3 && (Dtrk2PtErr/Dtrk2Pt) < 0.3 && Dpt > 2 && Dpt < 20 && abs(Bmass - 1.865) < 0.02"
#SideBandCut="Dalpha < 0.10 && (DsvpvDistance/DsvpvDisErr) > 4 && Dchi2cl > 0.10 && Dtrk1Pt > 1 && Dtrk2Pt > 1 && Dy < 1 && Dy > -1 && abs(Dtrk1Eta) < 1.5  && abs(Dtrk2Eta) < 1.5 && (Dtrk1PtErr/Dtrk1Pt) < 0.3 && (Dtrk2PtErr/Dtrk2Pt) < 0.3 && Dpt > 2 && Dpt < 20 && abs(Bmass - 1.865) > 0.06 &&  abs(Bmass - 1.865) < 0.12"
#GenCut="Dalpha < 0.20 && (DsvpvDistance/DsvpvDisErr) > 4 && Dchi2cl > 0.10 && Dtrk1Pt > 1 && Dtrk2Pt > 1 && Dy < 1 && Dy > -1 && abs(Dtrk1Eta) < 1.5  && abs(Dtrk2Eta) < 1.5 && (Dtrk1PtErr/Dtrk1Pt) < 0.3 && (Dtrk2PtErr/Dtrk2Pt) < 0.3 && Dpt > 2 && Dpt < 20 && abs(Bmass - 1.865) < 0.025 && Dgen == 23333"



g++ MCDataComparison.C $(root-config --cflags --libs) -g -o MCDataComparison.exe 
./MCDataComparison.exe "pp" "$ppData"  "$ppMC" "$SignalCut" "$SideBandCut" "$GenCut"
rm MCDataComparison.exe
fi


#if [ $doppComparison -eq 1 ]; then
#	root -b -l -q MCDataComparison.C++'(''"'pp'"','"'$ppData'"','"'$ppMC'"','"'$SignalCut'"','"'$SideBandCut'"','"'$GenCut'"'')'
#fi


if [ $doPbPbComparison -eq 1 ]; then
#SignalCut="Dalpha < 0.10 && (DsvpvDistance/DsvpvDisErr) > 4 && Dchi2cl > 0.10 && Dtrk1Pt > 1 && Dtrk2Pt > 1 && Dy < 1.465 && Dy > -0.535 && abs(Dtrk1Eta-0.465) < 1.5  && abs(Dtrk2Eta-0.465) < 1.5 && (Dtrk1PtErr/Dtrk1Pt) < 0.3 && (Dtrk2PtErr/Dtrk2Pt) < 0.3 && Dpt > 2 && Dpt < 20 && abs(Dmass - 1.865) < 0.02"
#SideBandCut="Dalpha < 0.10 && (DsvpvDistance/DsvpvDisErr) > 4 && Dchi2cl > 0.10 && Dtrk1Pt > 1 && Dtrk2Pt > 1 && Dy < 1.465 && Dy > -0.535 && abs(Dtrk1Eta-0.465) < 1.5  && abs(Dtrk2Eta-0.465) < 1.5 && (Dtrk1PtErr/Dtrk1Pt) < 0.3 && (Dtrk2PtErr/Dtrk2Pt) < 0.3 && Dpt > 2 && Dpt < 20 && abs(Dmass - 1.865) > 0.06 &&  abs(Dmass - 1.865) < 0.12"
#GenCut="Dalpha < 0.10 && (DsvpvDistance/DsvpvDisErr) > 4 && Dchi2cl > 0.10 && Dtrk1Pt > 1 && Dtrk2Pt > 1 && Dy < 1.465 && Dy > -0.535 && abs(Dtrk1Eta-0.465) < 1.5  && abs(Dtrk2Eta-0.465) < 1.5 && (Dtrk1PtErr/Dtrk1Pt) < 0.3 && (Dtrk2PtErr/Dtrk2Pt) < 0.3 && Dpt > 2 && Dpt < 20 && abs(Dmass - 1.865) < 0.02 && Dgen == 23333"


g++ MCDataComparison.C $(root-config --cflags --libs) -g -o MCDataComparison.exe 
./MCDataComparison.exe "PbPb" "$PbPbData"  "$PbPbMC" "$SignalCut" "$SideBandCut" "$GenCut"
rm MCDataComparison.exe
fi
