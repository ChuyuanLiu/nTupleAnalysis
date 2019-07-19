#include "nTupleAnalysis/baseClasses/interface/helpers.h"

  
bool nTupleAnalysis::failOverlap(const TLorentzVector& jet,const std::vector<muonPtr>& muons, float dRCut ) {
    
  for( muonPtr m : muons){
    if(jet.DeltaR(m->p) < dRCut)
      return true;
  }
  return false;
}


bool nTupleAnalysis::failOverlap(const TLorentzVector& jet,const std::vector<elecPtr>& elecs, float dRCut ) {
    
  for( elecPtr e : elecs){
    if(jet.DeltaR(e->p) < dRCut)
      return true;
  }
  return false;
}

