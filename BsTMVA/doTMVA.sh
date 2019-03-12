#!/bin/bash

DOTMVA=0
DOMAKEVAR=0
DOMERGE=0
DOREADXML=1
# modify OUTPUTDIR to a path you can write in #
#OUTPUTDIR="/raid5/data/szhaozho/2019CMSTask/BTMVA/TMVAMerge"
OUTPUTDIR="/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/2018Ana/BsTMVA/TMVAHigh/"
if [ ! -d $OUTPUTDIR ]
then
    mkdir -p $OUTPUTDIR
fi


PTMIN=(7 15 30)
PTMAX=(15 30 50)
#PTMIN=( 15 )
#PTMAX=( 30 )

RAA=(0.30 0.50 0.70)

MVA=('BDT')
weightfunctiongen=('pthatweight')
weightfunctionreco=('pthatweight')



COLSYST=('pp')
#LUMI=(1.908195e-03)
LUMI=(56.564165324)
OUTPUTSNAME=('MC_Bs_pp')
OUTPUTBNAME=('Data_Bs_pp')


#INPUTSNAME=('/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/ToCopy/MakeBDT/MC/crab_Bfinder_20190115_Hydjet_Pythia8_BsToJpsiPhi_20181231_pt5tkpt0p7dls2_v3_pthatweight_BDTMerged.root')
#INPUTSNAME=('/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/ToCopy/MC/crab_Bfinder_20190115_Hydjet_Pythia8_BsToJpsiPhi_Pthat10_20181231_pt5tkpt0p7dls2_v3.root')

#INPUTSNAME=('/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/ToCopy/MC/crab_Bfinder_20190115_Hydjet_Pythia8_BsToJpsiPhi_Pthat5_20181231_pt5tkpt0p7dls2_v3.root')
#INPUTBNAME=('/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/ToCopy/Data/New/crab_Bfinder_20181220_HIDoubleMuon_HIRun2018A_PromptReco_v1v2_1031_NoJSON_skimhltBsize_ntphi_NewBDTMerged.root')
#INPUTBNAME=('/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/ToCopy/Data/New/crab_Bfinder_20181220_HIDoubleMuon_HIRun2018A_PromptReco_v1v2_1031_NoJSON_skimhltBsize_ntphi.root')
#INPUTBNAME=('/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/ToCopy/Data/New/crab_Bfinder_20181220_HIDoubleMuon_HIRun2018A_PromptReco_v1_1031_NoJSON_skimhltBsize_ntphi.root')


INPUTSNAME=('/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/ToCopy/MC/crab_Bfinder_20190115_Hydjet_Pythia8_BsToJpsiPhi_20181231_pt5tkpt0p7dls2_v3_pthatweight.root')
INPUTBNAME=('/export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/ToCopy/Data/New/crab_Bfinder_20181220_HIDoubleMuon_HIRun2018A_PromptReco_v1v2_1031_NoJSON_skimhltBsize_ntphi.root')

CUT=('Btrk1Pt > 1 && Btrk2Pt > 1 && Bchi2cl > 0.05 && BsvpvDistance/BsvpvDisErr > 2 && Bpt > 5 && abs(Btrk1Eta-0.0) < 2.4  && abs(Btrk2Eta-0.0) < 2.4')


MYCUTS=("(${CUT[0]}&&Bgen==23333)")

MYCUTB=("${CUT[0]}&& abs(Bmass - 5.36682 ) > 0.20 &&  abs(Bmass - 5.36682) < 0.30")

MYCUTG=("(Gy>-1.00&&Gy<1.00)");


# do not touch the lines below if you don't know what they mean #

##
nPT=${#PTMIN[@]}
nMVA=${#MVA[@]}
nCOL=${#COLSYST[@]}

#
NC='\033[0m'

#
function float_to_string()
{
    if [[ $# -ne 1 ]]
    then
        echo -e "\033[1;31merror:${NC} invalid argument number - float_to_string()"
        exit 1
    fi
    part1=`echo $1 | awk -F "." '{print $1}'`
    part2=`echo $1 | awk -F "." '{print $2}'`
    rt_float_to_string=${part1:-0}p${part2:-0}
    echo $rt_float_to_string
}

#
FOLDERS=("myTMVA/weights" "myTMVA/ROOT" "mva/MVAfiles" "readxml/plots" "readxml/results")
for i in ${FOLDERS[@]}
do
    if [ ! -d $i ]
    then
        mkdir -p $i
    fi
done
#

# TMVAClassification.C #
if [ $DOTMVA -eq 1 ]
then
    cd myTMVA/
    g++ TMVAClassification.C $(root-config --cflags --libs) -l TMVA -g -o TMVAClassification.exe
    j=0
    while ((j<$nCOL))
    do
        i=0
        while ((i<$nPT))
        do
            tPT=pt_$(float_to_string ${PTMIN[i]})_$(float_to_string ${PTMAX[i]})
            echo -e "-- Processing \033[1;33mTMVAClassification.C${NC}, \033[1;32m${COLSYST[j]}${NC}, \033[1;32m${PTMIN[i]} - ${PTMAX[i]} GeV/c${NC}"
            set -x
            ./TMVAClassification.exe "${INPUTSNAME[j]}" "${INPUTBNAME[j]}" "${COLSYST[j]}" "${MYCUTS[j]}" "${MYCUTB[j]}" ${PTMIN[i]} ${PTMAX[i]}
	    k=0
	    while ((k<$nMVA))
	    do
                TEND=TMVA_${MVA[k]}_${COLSYST[j]}_${tPT}
	        mv weights/TMVAClassification_${MVA[k]}.weights.xml weights/${TEND}.weights.xml
	        mv weights/TMVAClassification_${MVA[k]}.class.C weights/${TEND}.class.C
                mv ROOT/TMVA.root ROOT/${TEND}.root
	        k=$(($k+1))
	    done
            set +x
	    i=$(($i+1))
            echo
        done
        j=$(($j+1))
    done    
    rm TMVAClassification.exe
    cd ..
fi

# Tree Variables #
if [ $DOMAKEVAR -eq 1 ]
then
    k=0
    echo "START 1"
    while ((k<$nMVA))
    do
        echo "START 2"
        j=0
        if [[ ${MVA[k]} != Cuts* ]]
        then            
            while ((j<$nCOL))
            do
	       echo "START 3"
                i=0
	        while ((i<$nPT))
	        do
		   echo "START 4"
                    tPT=pt_$(float_to_string ${PTMIN[i]})_$(float_to_string ${PTMAX[i]})
                    TEND=TMVA_${MVA[k]}_${COLSYST[j]}_${tPT}
                    echo -e "-- Processing \033[1;33m${MVA[k]}.C${NC}, \033[1;32m${COLSYST[j]}${NC}, \033[1;32m${PTMIN[i]} - ${PTMAX[i]} GeV/c${NC}"
                    if [ -f "myTMVA/weights/${TEND}.class.C" ]
                    then
			   echo "START 5"
		        cd mva/
                        g++ classmaker.C $(root-config --cflags --libs) -g -o classmaker.exe
                        set -x
                        ./classmaker.exe "../myTMVA/weights/${TEND}.class.C"
                        set +x
                        rm classmaker.exe
		        cd macros/
                        g++ ${MVA[k]}.C $(root-config --cflags --libs) -l TMVA -g -o ${MVA[k]}.exe
				 #	g++ ${MVA[k]}2.C $(root-config --cflags --libs) -l TMVA -g -o ${MVA[k]}2.exe

                        set -x
                        ./${MVA[k]}.exe "${INPUTSNAME[j]}" "../MVAfiles/mvafiles_${OUTPUTSNAME[j]}_${TEND}" ${PTMIN[i]} ${PTMAX[i]} "${MVA[k]}" 
                        ./${MVA[k]}.exe "${INPUTBNAME[j]}" "../MVAfiles/mvafiles_${OUTPUTBNAME[j]}_${TEND}" ${PTMIN[i]} ${PTMAX[i]} "${MVA[k]}"  
                        set +x
                        rm ${MVA[k]}.exe
		        cd ..
                        #rm header.h
                        cd ..
                    else
                        echo -e "\033[1;31merror:${NC} no weight file: myTMVA/weights/${TEND}.class.C"
                    fi
                    echo
	            i=$(($i+1))
	        done
                j=$(($j+1))
            done
        fi
        k=$(($k+1))
    done
fi

# Merge mva trees #
if [ $DOMERGE -eq 1 ]
then
    k=0
    while ((k<$nMVA))
    do
        if [[ "${MVA[k]}" != Cuts* ]]
        then
            j=0
            while ((j<$nCOL))
            do
                OUTPUTS="${OUTPUTDIR}/${OUTPUTSNAME[j]}_TMVA_${MVA[k]}_${COLSYST[j]}.root"
                echo -e "-- Processing \033[1;33mmerge${NC}, \033[1;32m${COLSYST[j]}${NC} MC, \033[1;32m${OUTPUTS}${NC}"
                if [ -f $OUTPUTS ]
                then
                    echo -e "\033[1;31merror:${NC} target merged file exists: $OUTPUTS"
                else
                    HADDINPUTS=""
                    i=0
                    while ((i<$nPT))
                    do
                        tPT=pt_$(float_to_string ${PTMIN[i]})_$(float_to_string ${PTMAX[i]})
                        TEND=TMVA_${MVA[k]}_${COLSYST[j]}_${tPT}
                        if [ -f "mva/MVAfiles/mvafiles_${OUTPUTSNAME[j]}_${TEND}.root" ]
                        then
                            HADDINPUTS="${HADDINPUTS} mva/MVAfiles/mvafiles_${OUTPUTSNAME[j]}_${TEND}.root"
                        else
                            echo -e "\033[1;31merror:${NC} no input file: mva/MVAfiles/mvafiles_${OUTPUTSNAME[j]}_${TEND}.root"
                        fi
                        i=$(($i+1))
                    done
                    if [[ $HADDINPUTS != "" ]]
                    then
                        set -x
                        hadd $OUTPUTS ${INPUTSNAME[j]} $HADDINPUTS
                        set +x
                    else
                        echo -e "\033[1;31merror:${NC} no input files for $OUTPUTS"
                    fi
                fi
                echo
                OUTPUTB="${OUTPUTDIR}/${OUTPUTBNAME[j]}_TMVA_${MVA[k]}_${COLSYST[j]}.root"
                echo -e "-- Processing \033[1;33mmerge${NC}, \033[1;32m${COLSYST[j]}${NC} data, \033[1;32m${OUTPUTB}${NC}"
                if [ -f $OUTPUTB ]
                then
                    echo -e "\033[1;31merror:${NC} target merged file exists: $OUTPUTB"
                else
                    HADDINPUTB=""
                    i=0
                    while ((i<$nPT))
                    do
                        tPT=pt_$(float_to_string ${PTMIN[i]})_$(float_to_string ${PTMAX[i]})
                        TEND=TMVA_${MVA[k]}_${COLSYST[j]}_${tPT}
                        if [ -f "mva/MVAfiles/mvafiles_${OUTPUTBNAME[j]}_${TEND}.root" ]
                        then
                            HADDINPUTB="${HADDINPUTB} mva/MVAfiles/mvafiles_${OUTPUTBNAME[j]}_${TEND}.root"
                        else
                            echo -e "\033[1;31merror:${NC} no input file: mva/MVAfiles/mvafiles_${OUTPUTBNAME[j]}_${TEND}.root"
                        fi
                        i=$(($i+1))
                    done
                    if [[ $HADDINPUTB != "" ]]
                    then
                        set -x
                        hadd $OUTPUTB ${INPUTBNAME[j]} $HADDINPUTB
                        set +x
                    else
                        echo -e "\033[1;31merror:${NC} no input files for $OUTPUTB"
                    fi
                fi
                echo
                j=$(($j+1))
            done
        fi
        k=$(($k+1))
    done
fi

# readxml*.cc #
if [ $DOREADXML -eq 1 ]
then
    cd readxml/
    g++ readxml.cc $(root-config --cflags --libs) -l TMVA -l XMLIO -g -o readxml.exe
    g++ readxml_Cuts.cc $(root-config --cflags --libs) -l TMVA -l XMLIO -g -o readxml_Cuts.exe
	g++ readxml_MLP.cc $(root-config --cflags --libs) -l TMVA -l XMLIO -g -o readxml_MLP.exe
    j=0
    while ((j<$nCOL))
    do
        i=0
        while ((i<$nPT))
        do
            k=0
            while ((k<$nMVA))
            do
                tPT=pt_$(float_to_string ${PTMIN[i]})_$(float_to_string ${PTMAX[i]})
                TEND=TMVA_${MVA[k]}_${COLSYST[j]}_${tPT}
                echo -e "-- Processing \033[1;33mreadxml*.cc${NC}, \033[1;32m${COLSYST[j]}${NC}, \033[1;32m${MVA[k]}${NC}, \033[1;32m${PTMIN[i]} - ${PTMAX[i]} GeV/c${NC}"
                if [[ "${MVA[k]}" != Cuts* ]]
                then 
                    OUTPUTS="${OUTPUTDIR}/${OUTPUTSNAME[j]}_TMVA_${MVA[k]}_${COLSYST[j]}.root"
                    OUTPUTB="${OUTPUTDIR}/${OUTPUTBNAME[j]}_TMVA_${MVA[k]}_${COLSYST[j]}.root"
                    if [ ! -f $OUTPUTS ]
                    then
                        echo -e "\033[1;31merror:${NC} no merged input file: $OUTPUTS"
                        echo
                    elif [ ! -f $OUTPUTB ]
                    then
                        echo -e "\033[1;31merror:${NC} no merged input file: $OUTPUTB"
                        echo
                    elif [ ! -f "../myTMVA/weights/${TEND}.weights.xml" ]
                    then
                        echo -e "\033[1;31merror:${NC} no weight file: myTMVA/weights/${TEND}.weights.xml"
                    #else
						elif [[ "${MVA[k]}" != MLP* ]]
						then	
                        set -x
						echo "Running BDT"
                        ./readxml.exe "$OUTPUTS" "$OUTPUTB" "$TEND" "../myTMVA/weights/${TEND}.weights.xml" "${COLSYST[j]}" "${MYCUTS[j]}" "${MYCUTB[j]}" "${MYCUTG[j]}" "${weightfunctiongen}" "${weightfunctionreco}" "${MVA[k]}" ${PTMIN[i]} ${PTMAX[i]} ${LUMI[j]} ${RAA[j]}
                        set +x
					else					
						set -x
						echo "Running MLP"
						./readxml_MLP.exe "$OUTPUTS" "$OUTPUTB" "$TEND" "../myTMVA/weights/${TEND}.weights.xml" "${COLSYST[j]}" "${MYCUTS[j]}" "${MYCUTB[j]}" "${MYCUTG[j]}" "${weightfunctiongen}" "${weightfunctionreco}" "${MVA[k]}" ${PTMIN[i]} ${PTMAX[i]} ${LUMI[j]} ${RAA[j]}
						set +x		
					
                    fi
                else
                    if [ ! -f "../myTMVA/weights/${TEND}.weights.xml" ]
                    then
                        echo -e "\033[1;31merror:${NC} no weight file: myTMVA/weights/${TEND}.weights.xml"
                    else
                        set -x
						echo "Run CutSa"
                        ./readxml_Cuts.exe "${INPUTSNAME[j]}" "${INPUTBNAME[j]}" "$TEND" "../myTMVA/weights/${TEND}.weights.xml" "${COLSYST[j]}" "${MYCUTS[j]}" "${MYCUTB[j]}" "${MYCUTG[j]}" "${weightfunctiongen}" "${weightfunctionreco}" "${MVA[k]}" ${PTMIN[i]} ${PTMAX[i]} ${LUMI[j]} ${RAA[j]}
                        set +x
                    fi
                fi
                echo
                k=$(($k+1))
            done
            i=$(($i+1))
        done
        j=$(($j+1))
    done
    rm readxml_Cuts.exe
    rm readxml.exe
    cd ..
fi
