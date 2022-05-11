from PhysicsTools.NanoAODTools.postprocessing.modules.jme.jetmetHelperRun2       import * 

#for MC
jetmetCorrector2016 = createJMECorrector(isMC=True,  dataYear=2016, jesUncert="All", saveMETUncs = []) 
jetmetCorrector2017 = createJMECorrector(isMC=True,  dataYear=2017, jesUncert="All", saveMETUncs = []) 
jetmetCorrector2018 = createJMECorrector(isMC=True,  dataYear=2018, jesUncert="All", saveMETUncs = []) 

#for UL MC
jetmetCorrectorUL2016_preVFP  = createJMECorrector(isMC=True,  dataYear='UL2016_preVFP', jesUncert="All", saveMETUncs = []) 
jetmetCorrectorUL2016_postVFP = createJMECorrector(isMC=True,  dataYear='UL2016',        jesUncert="All", saveMETUncs = []) 
jetmetCorrectorUL2017         = createJMECorrector(isMC=True,  dataYear='UL2017',        jesUncert="All", saveMETUncs = []) 
jetmetCorrectorUL2018         = createJMECorrector(isMC=True,  dataYear='UL2018',        jesUncert="All", saveMETUncs = []) 

#for Data
jetmetCorrector2018A = createJMECorrector(isMC=False, dataYear=2018, runPeriod="A", jesUncert="All", saveMETUncs = []) 
