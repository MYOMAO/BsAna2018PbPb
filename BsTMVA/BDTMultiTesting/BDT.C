#include "uti.h"
#include "parameters.h"
#include "TMVA_BDT_PbPb_pt_7p0_15p0.class.C"
#include "TMVA_BDT_PbPb_pt_15p0_20p0.class.C"
#include "TMVA_BDT_PbPb_pt_20p0_50p0.class.C"

//#include "TMVA_BDT_PbPb_15_50_varStage1.class.C"
#define MAX_XB       10000

void BDT(TString infname, TString ofname)
{
	TFile* inf = new TFile(infname);
	//	TTree* t = (TTree*)inf->Get("Bfinder/ntphi");
	TTree* t = (TTree*)inf->Get("Bfinder/ntphi");
	//	t->AddFriend("mvaTree");


	Int_t           Bsize;
	Float_t         Bchi2cl[MAX_XB];   //[Bsize]
	Float_t         BsvpvDistance[MAX_XB];   //[Bsize]
	Float_t         BsvpvDisErr[MAX_XB];   //[Bsize]
	Float_t         Balpha[MAX_XB];   //[Bsize]   
	Float_t         Btrk1Pt[MAX_XB];   //[Bsize]   
	Float_t         Btrk2Pt[MAX_XB];   //[Bsize]   
	Float_t         Btrk1Eta[MAX_XB];   //[Bsize]   
	Float_t         Btrk2Eta[MAX_XB];   //[Bsize]   
	Float_t         Btrk1Dxy[MAX_XB];   //[Bsize]   
	Float_t         Btrk2Dxy[MAX_XB];   //[Bsize]   
	Float_t         Btrk1D0Err[MAX_XB];   //[Bsize]   
	Float_t         Btrk2D0Err[MAX_XB];   //[Bsize]   
	Float_t         Btktkmass[MAX_XB]; 
	Float_t         Bd0[MAX_XB]; 
	Float_t         Bd0Err[MAX_XB]; 
	Float_t         Bdtheta[MAX_XB]; 
	Float_t         Bpt[MAX_XB]; 

	t->SetBranchAddress("Bsize", &Bsize);
	t->SetBranchAddress("Balpha", Balpha);
	t->SetBranchAddress("Bchi2cl", Bchi2cl);
	t->SetBranchAddress("BsvpvDistance", BsvpvDistance);
	t->SetBranchAddress("BsvpvDisErr", BsvpvDisErr);
	//  t->SetBranchAddress("MVA", MVA);
	t->SetBranchAddress("Bd0", Bd0);
	t->SetBranchAddress("Bd0Err", Bd0Err);
	t->SetBranchAddress("Btrk1Pt", Btrk1Pt);
	t->SetBranchAddress("Btrk2Pt", Btrk2Pt);
	t->SetBranchAddress("Bd0", Bd0);
	t->SetBranchAddress("Bd0Err", Bd0Err);
	t->SetBranchAddress("Bdtheta", Bdtheta);
	t->SetBranchAddress("Btktkmass", Btktkmass);
	t->SetBranchAddress("Btrk1Dxy", Btrk1Dxy);
	t->SetBranchAddress("Btrk2Dxy", Btrk2Dxy);
	t->SetBranchAddress("Btrk1Eta", Btrk1Eta);
	t->SetBranchAddress("Btrk2Eta", Btrk2Eta);
	t->SetBranchAddress("Btrk1D0Err", Btrk1D0Err);
	t->SetBranchAddress("Btrk2D0Err", Btrk2D0Err);
	t->SetBranchAddress("Bpt", Bpt);



	std::vector<std::string> theInputVars;
	std::string a1 = "Btrk1Pt";
	std::string a2 = "Btrk2Pt";

	std::string a3 = "Btrk1Eta";
	std::string a4 = "Btrk2Eta";
	std::string a5 = "Btrk1Dxy/Btrk1D0Err";
	std::string a6 = "Btrk2Dxy/Btrk2D0Err";
	std::string a7 = "abs(Btktkmass-1.019455)";
	std::string a8 = "BsvpvDistance/BsvpvDisErr";
	std::string a9 = "Balpha";
	std::string a10 = "Bd0/Bd0Err";
	std::string a11 = "cos(Bdtheta)";
	std::string a12 = "Bchi2cl";

	theInputVars.push_back(a1);
	theInputVars.push_back(a2);
	theInputVars.push_back(a3);
	theInputVars.push_back(a4);
	theInputVars.push_back(a5);
	theInputVars.push_back(a6);
	theInputVars.push_back(a7);
	theInputVars.push_back(a8);
	theInputVars.push_back(a9);
	theInputVars.push_back(a10);
	theInputVars.push_back(a11);
	theInputVars.push_back(a12);


	std::vector<double> inputValues;


	TFile* outf = new TFile(ofname,"recreate");
	TTree* mvaTree = new TTree("BDT","BDT");	

	double BDT[NBins][MAX_XB];
	mvaTree->Branch("Bsize",&Bsize,"Bsize/I");
	for(int i = 0; i < NBins; i++){
		mvaTree->Branch(Form("BDT_pt_%d_%d",ptBins[i],ptBins[i+1]),BDT[i],Form("BDT_pt_%d_%d[Bsize]/D",ptBins[i],ptBins[i+1]));
	}
	std::cout<<std::endl;
	std::cout<<"  Input file: "<<infname<<std::endl;
	std::cout<<"  Calculating MVA values ..."<<std::endl;
	for(int i=0;i< t->GetEntries();i++)
	{
		if(i%100==0) std::cout<<std::setiosflags(std::ios::left)<<"  [ \033[1;36m"<<std::setw(10)<<i<<"\033[0m"<<" / "<<std::setw(10)<<t->GetEntries()<<" ] "<<"\033[1;36m"<<Form("%.0f",100.*i/t->GetEntries())<<"%\033[0m"<<"\r"<<std::flush;
		t->GetEntry(i);
		for(int j=0;j<Bsize;j++)
		{

			inputValues.clear();

			for(int k = 0; k < NBins; k++){
				BDT[k][j] = -999;
			}

			inputValues.push_back(Btrk1Pt[j]);
			inputValues.push_back(Btrk2Pt[j]);

			inputValues.push_back(Btrk1Eta[j]);
			inputValues.push_back(Btrk2Eta[j]);
			inputValues.push_back(Btrk1Dxy[j]/Btrk1D0Err[j]);
			inputValues.push_back(Btrk2Dxy[j]/Btrk2D0Err[j]);
			inputValues.push_back(abs(Btktkmass[j]-1.019455));
			inputValues.push_back(BsvpvDistance[j]/BsvpvDisErr[j]);
			inputValues.push_back(Balpha[j]);
			inputValues.push_back(Bd0[j]/Bd0Err[j]);
			inputValues.push_back(cos(Bdtheta[j]));
			inputValues.push_back(Bchi2cl[j]);

			if(Bpt[j] > ptBins[0] && Bpt[j] < ptBins[1]){
				ReadBDT mva(theInputVars);
				BDT[0][j] = mva.GetMvaValue(inputValues);      
			}
			if(Bpt[j] > ptBins[1] && Bpt[j] < ptBins[2]){
				ReadBDT2 mva(theInputVars);
				BDT[1][j] = mva.GetMvaValue(inputValues);      
			}
			if(Bpt[j] > ptBins[2] && Bpt[j] < ptBins[3]){
				ReadBDT3 mva(theInputVars);
				BDT[2][j] = mva.GetMvaValue(inputValues);      
			}	

		}

		mvaTree->Fill();
	}
	std::cout<<std::endl<<"  Processed "<<"\033[1;31m"<<t->GetEntries()<<"\033[0m event(s)."<<std::endl;
	outf->cd();
	outf->Write();
	outf->Close();
}


/*
   int main(int argc, char* argv[])
   {
   if(argc==6)
   {
   BDT(argv[1],argv[2],atof(argv[3]),atof(argv[4]),argv[5]);
   return 0;
   }
   else
   {
   std::cout<<"  Error: invalid argument number - BDT()"<<std::endl;
   return 1;
   }
   }
   */
