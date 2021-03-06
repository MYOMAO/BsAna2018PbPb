// Class: ReadBDT
// Automatically generated by MethodBase::MakeClass
//

/* configuration options =====================================================

#GEN -*-*-*-*-*-*-*-*-*-*-*- general info -*-*-*-*-*-*-*-*-*-*-*-

Method         : BDT::BDT
TMVA Release   : 4.2.0         [262656]
ROOT Release   : 6.02/13       [393741]
Creator        : zzshi
Date           : Tue Mar 26 11:15:27 2019
Host           : Linux vocms029.cern.ch 2.6.32-504.12.2.el6.x86_64 #1 SMP Thu Mar 12 07:33:00 CET 2015 x86_64 x86_64 x86_64 GNU/Linux
Dir            : /export/d00/scratch/zzshi/CMSSW_7_5_8_patch3/Merge/2018Ana/BsTMVA/myTMVA
Training events: 4298
Analysis type  : [Classification]


#OPT -*-*-*-*-*-*-*-*-*-*-*-*- options -*-*-*-*-*-*-*-*-*-*-*-*-

# Set by User:
V: "False" [Verbose output (short form of "VerbosityLevel" below - overrides the latter one)]
H: "False" [Print method-specific help message]
NTrees: "2000" [Number of trees in the forest]
MaxDepth: "4" [Max depth of the decision tree allowed]
MinNodeSize: "5.0%" [Minimum percentage of training events required in a leaf node (default: Classification: 5%, Regression: 0.2%)]
nCuts: "40000" [Number of grid points in variable range used in finding optimal cut in node splitting]
BoostType: "AdaBoost" [Boosting type for the trees in the forest (note: AdaCost is still experimental)]
UseBaggedBoost: "True" [Use only a random subsample of all events for growing the trees in each boost iteration.]
AdaBoostBeta: "7.000000e-01" [Learning rate  for AdaBoost algorithm]
BaggedSampleFraction: "5.000000e-01" [Relative size of bagged event sample to original size of the data sample (used whenever bagging is used (i.e. UseBaggedBoost, Bagging,)]
SeparationType: "giniindex" [Separation criterion for node splitting]
# Default:
VerbosityLevel: "Default" [Verbosity level]
VarTransform: "None" [List of variable transformations performed before training, e.g., "D_Background,P_Signal,G,N_AllClasses" for: "Decorrelation, PCA-transformation, Gaussianisation, Normalisation, each for the given class of events ('AllClasses' denotes all events of all classes, if no class indication is given, 'All' is assumed)"]
CreateMVAPdfs: "False" [Create PDFs for classifier outputs (signal and background)]
IgnoreNegWeightsInTraining: "False" [Events with negative weights are ignored in the training (but are included for testing and performance evaluation)]
AdaBoostR2Loss: "quadratic" [Type of Loss function in AdaBoostR2]
Shrinkage: "1.000000e+00" [Learning rate for GradBoost algorithm]
UseRandomisedTrees: "False" [Determine at each node splitting the cut variable only as the best out of a random subset of variables (like in RandomForests)]
UseNvars: "4" [Size of the subset of variables used with RandomisedTree option]
UsePoissonNvars: "True" [Interpret "UseNvars" not as fixed number but as mean of a Possion distribution in each split with RandomisedTree option]
UseYesNoLeaf: "False" [Use Sig or Bkg categories, or the purity=S/(S+B) as classification of the leaf node -> Real-AdaBoost]
NegWeightTreatment: "inverseboostnegweights" [How to treat events with negative weights in the BDT training (particular the boosting) : IgnoreInTraining;  Boost With inverse boostweight; Pair events with negative and positive weights in traning sample and *annihilate* them (experimental!)]
Css: "1.000000e+00" [AdaCost: cost of true signal selected signal]
Cts_sb: "1.000000e+00" [AdaCost: cost of true signal selected bkg]
Ctb_ss: "1.000000e+00" [AdaCost: cost of true bkg    selected signal]
Cbb: "1.000000e+00" [AdaCost: cost of true bkg    selected bkg ]
NodePurityLimit: "5.000000e-01" [In boosting/pruning, nodes with purity > NodePurityLimit are signal; background otherwise.]
DoBoostMonitor: "False" [Create control plot with ROC integral vs tree number]
UseFisherCuts: "False" [Use multivariate splits using the Fisher criterion]
MinLinCorrForFisher: "8.000000e-01" [The minimum linear correlation between two variables demanded for use in Fisher criterion in node splitting]
UseExclusiveVars: "False" [Variables already used in fisher criterion are not anymore analysed individually for node splitting]
DoPreselection: "False" [and and apply automatic pre-selection for 100% efficient signal (bkg) cuts prior to training]
SigToBkgFraction: "1.000000e+00" [Sig to Bkg ratio used in Training (similar to NodePurityLimit, which cannot be used in real adaboost]
PruneMethod: "nopruning" [Note: for BDTs use small trees (e.g.MaxDepth=3) and NoPruning:  Pruning: Method used for pruning (removal) of statistically insignificant branches ]
PruneStrength: "0.000000e+00" [Pruning strength]
PruningValFraction: "5.000000e-01" [Fraction of events to use for optimizing automatic pruning.]
nEventsMin: "0" [deprecated: Use MinNodeSize (in % of training events) instead]
UseBaggedGrad: "False" [deprecated: Use *UseBaggedBoost* instead:  Use only a random subsample of all events for growing the trees in each iteration.]
GradBaggingFraction: "5.000000e-01" [deprecated: Use *BaggedSampleFraction* instead: Defines the fraction of events to be used in each iteration, e.g. when UseBaggedGrad=kTRUE. ]
UseNTrainEvents: "0" [deprecated: Use *BaggedSampleFraction* instead: Number of randomly picked training events used in randomised (and bagged) trees]
NNodesMax: "0" [deprecated: Use MaxDepth instead to limit the tree size]
##


#VAR -*-*-*-*-*-*-*-*-*-*-*-* variables *-*-*-*-*-*-*-*-*-*-*-*-

NVar 12
Btrk1Pt                       Btrk1Pt                       Btrk1Pt                       Btrk1Pt                                                         'F'    [1.00010251999,2.51966071129]
Btrk2Pt                       Btrk2Pt                       Btrk2Pt                       Btrk2Pt                                                         'F'    [1.0000474453,2.569409132]
Btrk1Eta                      Btrk1Eta                      Btrk1Eta                      Btrk1Eta                                                        'F'    [-2.39925146103,2.39882063866]
Btrk2Eta                      Btrk2Eta                      Btrk2Eta                      Btrk2Eta                                                        'F'    [-2.39945220947,2.39319419861]
Btrk1Dxy/Btrk1D0Err           Btrk1Dxy_D_Btrk1D0Err         Btrk1Dxy/Btrk1D0Err           Btrk1Dxy/Btrk1D0Err                                             'F'    [-4.45186138153,5.34792757034]
Btrk2Dxy/Btrk2D0Err           Btrk2Dxy_D_Btrk2D0Err         Btrk2Dxy/Btrk2D0Err           Btrk2Dxy/Btrk2D0Err                                             'F'    [-7.59269952774,5.458984375]
abs(Btktkmass-1.019455)       abs_Btktkmass_M_1.019455_     abs(Btktkmass-1.019455)       abs(Btktkmass-1.019455)                                         'F'    [2.82363885162e-07,0.0149948159233]
BsvpvDistance/BsvpvDisErr     BsvpvDistance_D_BsvpvDisErr   BsvpvDistance/BsvpvDisErr     BsvpvDistance/BsvpvDisErr                                       'F'    [2.00000071526,33.5897865295]
Balpha                        Balpha                        Balpha                        Balpha                                                          'F'    [0.00274250656366,3.13987970352]
Bd0/Bd0Err                    Bd0_D_Bd0Err                  Bd0/Bd0Err                    Bd0/Bd0Err                                                      'F'    [2.7661075592,3876.41235352]
cos(Bdtheta)                  cos_Bdtheta_                  cos(Bdtheta)                  cos(Bdtheta)                                                    'F'    [-0.999999880791,1]
Bchi2cl                       Bchi2cl                       Bchi2cl                       Bchi2cl                                                         'F'    [0.0500221401453,0.997967600822]
NSpec 0


============================================================================ */

#include <vector>
#include <cmath>
#include <string>
#include <iostream>

#define NN new BDTNode
   
#ifndef BDTNode__def
#define BDTNode__def
   
class BDTNode {
   
public:
   
   // constructor of an essentially "empty" node floating in space
   BDTNode ( BDTNode* left,BDTNode* right,
                          int selector, double cutValue, bool cutType, 
                          int nodeType, double purity, double response ) :
   fLeft         ( left         ),
   fRight        ( right        ),
   fSelector     ( selector     ),
   fCutValue     ( cutValue     ),
   fCutType      ( cutType      ),
   fNodeType     ( nodeType     ),
   fPurity       ( purity       ),
   fResponse     ( response     ){
   }

   virtual ~BDTNode();

   // test event if it decends the tree at this node to the right
   virtual bool GoesRight( const std::vector<double>& inputValues ) const;
   BDTNode* GetRight( void )  {return fRight; };

   // test event if it decends the tree at this node to the left 
   virtual bool GoesLeft ( const std::vector<double>& inputValues ) const;
   BDTNode* GetLeft( void ) { return fLeft; };   

   // return  S/(S+B) (purity) at this node (from  training)

   double GetPurity( void ) const { return fPurity; } 
   // return the node type
   int    GetNodeType( void ) const { return fNodeType; }
   double GetResponse(void) const {return fResponse;}

private:

   BDTNode*   fLeft;     // pointer to the left daughter node
   BDTNode*   fRight;    // pointer to the right daughter node
   int                     fSelector; // index of variable used in node selection (decision tree)   
   double                  fCutValue; // cut value appplied on this node to discriminate bkg against sig
   bool                    fCutType;  // true: if event variable > cutValue ==> signal , false otherwise
   int                     fNodeType; // Type of node: -1 == Bkg-leaf, 1 == Signal-leaf, 0 = internal 
   double                  fPurity;   // Purity of node from training
   double                  fResponse; // Regression response value of node
}; 
   
//_______________________________________________________________________
   BDTNode::~BDTNode()
{
   if (fLeft  != NULL) delete fLeft;
   if (fRight != NULL) delete fRight;
}; 
   
//_______________________________________________________________________
bool BDTNode::GoesRight( const std::vector<double>& inputValues ) const
{
   // test event if it decends the tree at this node to the right
   bool result;
     result = (inputValues[fSelector] > fCutValue );
   if (fCutType == true) return result; //the cuts are selecting Signal ;
   else return !result;
}
   
//_______________________________________________________________________
bool BDTNode::GoesLeft( const std::vector<double>& inputValues ) const
{
   // test event if it decends the tree at this node to the left
   if (!this->GoesRight(inputValues)) return true;
   else return false;
}
   
#endif
   
#ifndef IClassifierReader__def
#define IClassifierReader__def

class IClassifierReader {

 public:

   // constructor
   IClassifierReader() : fStatusIsClean( true ) {}
   virtual ~IClassifierReader() {}

   // return classifier response
   virtual double GetMvaValue( const std::vector<double>& inputValues ) const = 0;

   // returns classifier status
   bool IsStatusClean() const { return fStatusIsClean; }

 protected:

   bool fStatusIsClean;
};

#endif

class ReadBDT : public IClassifierReader {

 public:

   // constructor
   ReadBDT( std::vector<std::string>& theInputVars ) 
      : IClassifierReader(),
        fClassName( "ReadBDT" ),
        fNvars( 12 ),
        fIsNormalised( false )
   {      
      // the training input variables
      const char* inputVars[] = { "Btrk1Pt", "Btrk2Pt", "Btrk1Eta", "Btrk2Eta", "Btrk1Dxy/Btrk1D0Err", "Btrk2Dxy/Btrk2D0Err", "abs(Btktkmass-1.019455)", "BsvpvDistance/BsvpvDisErr", "Balpha", "Bd0/Bd0Err", "cos(Bdtheta)", "Bchi2cl" };

      // sanity checks
      if (theInputVars.size() <= 0) {
         std::cout << "Problem in class \"" << fClassName << "\": empty input vector" << std::endl;
         fStatusIsClean = false;
      }

      if (theInputVars.size() != fNvars) {
         std::cout << "Problem in class \"" << fClassName << "\": mismatch in number of input values: "
                   << theInputVars.size() << " != " << fNvars << std::endl;
         fStatusIsClean = false;
      }

      // validate input variables
      for (size_t ivar = 0; ivar < theInputVars.size(); ivar++) {
         if (theInputVars[ivar] != inputVars[ivar]) {
            std::cout << "Problem in class \"" << fClassName << "\": mismatch in input variable names" << std::endl
                      << " for variable [" << ivar << "]: " << theInputVars[ivar].c_str() << " != " << inputVars[ivar] << std::endl;
            fStatusIsClean = false;
         }
      }

      // initialize min and max vectors (for normalisation)
      fVmin[0] = 0;
      fVmax[0] = 0;
      fVmin[1] = 0;
      fVmax[1] = 0;
      fVmin[2] = 0;
      fVmax[2] = 0;
      fVmin[3] = 0;
      fVmax[3] = 0;
      fVmin[4] = 0;
      fVmax[4] = 0;
      fVmin[5] = 0;
      fVmax[5] = 0;
      fVmin[6] = 0;
      fVmax[6] = 0;
      fVmin[7] = 0;
      fVmax[7] = 0;
      fVmin[8] = 0;
      fVmax[8] = 0;
      fVmin[9] = 0;
      fVmax[9] = 0;
      fVmin[10] = 0;
      fVmax[10] = 0;
      fVmin[11] = 0;
      fVmax[11] = 0;

      // initialize input variable types
      fType[0] = 'F';
      fType[1] = 'F';
      fType[2] = 'F';
      fType[3] = 'F';
      fType[4] = 'F';
      fType[5] = 'F';
      fType[6] = 'F';
      fType[7] = 'F';
      fType[8] = 'F';
      fType[9] = 'F';
      fType[10] = 'F';
      fType[11] = 'F';

      // initialize constants
      Initialize();

   }

   // destructor
   virtual ~ReadBDT() {
      Clear(); // method-specific
   }

   // the classifier response
   // "inputValues" is a vector of input values in the same order as the 
   // variables given to the constructor
   double GetMvaValue( const std::vector<double>& inputValues ) const;

 private:

   // method-specific destructor
   void Clear();

   // common member variables
   const char* fClassName;

   const size_t fNvars;
   size_t GetNvar()           const { return fNvars; }
   char   GetType( int ivar ) const { return fType[ivar]; }

   // normalisation of input variables
   const bool fIsNormalised;
   bool IsNormalised() const { return fIsNormalised; }
   double fVmin[12];
   double fVmax[12];
   double NormVariable( double x, double xmin, double xmax ) const {
      // normalise to output range: [-1, 1]
      return 2*(x - xmin)/(xmax - xmin) - 1.0;
   }

   // type of input variable: 'F' or 'I'
   char   fType[12];

   // initialize internal variables
   void Initialize();
   double GetMvaValue__( const std::vector<double>& inputValues ) const;

   // private members (method specific)
   std::vector<BDTNode*> fForest;       // i.e. root nodes of decision trees
   std::vector<double>                fBoostWeights; // the weights applied in the individual boosts
};

double ReadBDT::GetMvaValue__( const std::vector<double>& inputValues ) const
{
   double myMVA = 0;
   double norm  = 0;
   for (unsigned int itree=0; itree<fForest.size(); itree++){
      BDTNode *current = fForest[itree];
      while (current->GetNodeType() == 0) { //intermediate node
         if (current->GoesRight(inputValues)) current=(BDTNode*)current->GetRight();
         else current=(BDTNode*)current->GetLeft();
      }
      myMVA += fBoostWeights[itree] *  current->GetPurity();
      norm  += fBoostWeights[itree];
   }
   return myMVA /= norm;
};

void ReadBDT::Initialize()
{
  // itree = 0
  fBoostWeights.push_back(2.1227464274176);
  fForest.push_back( 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.965343,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0,-99) , 
8, 0.0550185, 1, 0, 0.663342,-99)    );
  // itree = 1
  fBoostWeights.push_back(4.0674);
  fForest.push_back( 
NN(
NN(
0, 
0, 
-1, 0, 1, -1, 0.0160813,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0,-99) , 
0, 1.58699, 0, 0, 0.0015178,-99)    );
  // itree = 2
  fBoostWeights.push_back(2.43619);
  fForest.push_back( 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.976029,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0,-99) , 
9, 897.983, 0, 0, 0.623238,-99)    );
  // itree = 3
  fBoostWeights.push_back(3.56316);
  fForest.push_back( 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.994034,-99) , 
NN(
NN(
0, 
0, 
-1, 0, 1, -1, 0.115178,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0,-99) , 
11, 0.79828, 0, 0, 0.00175064,-99) , 
4, 1.66089, 0, 0, 0.343858,-99)    );
  // itree = 4
  fBoostWeights.push_back(7.57309);
  fForest.push_back( 
NN(
0, 
0, 
0, 1.02954, 0, -1, 1.00107e-05,-99)    );
  // itree = 5
  fBoostWeights.push_back(1.73486);
  fForest.push_back( 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.749604,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0,-99) , 
4, -1.19866, 1, 0, 0.154532,-99)    );
  // itree = 6
  fBoostWeights.push_back(2.47126);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.899948,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 5.20417e-05,-99) , 
6, 0.00125981, 0, 0, 0.674983,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0,-99) , 
6, 0.00208074, 1, 0, 0.142203,-99)    );
  // itree = 7
  fBoostWeights.push_back(2.85932);
  fForest.push_back( 
NN(
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.730621,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0.467291,-99) , 
11, 0.77009, 0, 0, 0.581337,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0,-99) , 
11, 0.5686, 0, 0, 0.0212505,-99)    );
  // itree = 8
  fBoostWeights.push_back(4.24496);
  fForest.push_back( 
NN(
NN(
0, 
0, 
-1, 0, 1, 1, 0.996968,-99) , 
NN(
0, 
0, 
-1, 0, 1, -1, 0,-99) , 
5, 1.59403, 0, 0, 0.38246,-99)    );
  // itree = 9
  fBoostWeights.push_back(inf);
  fForest.push_back( 
NN(
0, 
0, 
-1, 0, 1, -1, 0,-99)    );
  // itree = 10
  fBoostWeights.push_back(0);
  fForest.push_back( 
NN(
0, 
0, 
-1, 0, 1, -1, 0.5,-99)    );
   return;
};
 
// Clean up
inline void ReadBDT::Clear() 
{
   for (unsigned int itree=0; itree<fForest.size(); itree++) { 
      delete fForest[itree]; 
   }
}
   inline double ReadBDT::GetMvaValue( const std::vector<double>& inputValues ) const
   {
      // classifier response value
      double retval = 0;

      // classifier response, sanity check first
      if (!IsStatusClean()) {
         std::cout << "Problem in class \"" << fClassName << "\": cannot return classifier response"
                   << " because status is dirty" << std::endl;
         retval = 0;
      }
      else {
         if (IsNormalised()) {
            // normalise variables
            std::vector<double> iV;
            iV.reserve(inputValues.size());
            int ivar = 0;
            for (std::vector<double>::const_iterator varIt = inputValues.begin();
                 varIt != inputValues.end(); varIt++, ivar++) {
               iV.push_back(NormVariable( *varIt, fVmin[ivar], fVmax[ivar] ));
            }
            retval = GetMvaValue__( iV );
         }
         else {
            retval = GetMvaValue__( inputValues );
         }
      }

      return retval;
   }
