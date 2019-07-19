// -*- C++ -*-

#if !defined(initBranch_H)
#define initBranch_H

#include <iostream>
#include <TChain.h>
#include <TChainElement.h>
#include <TDataType.h>
#include <TClass.h>

static inline int initBranch(TChain *tree, std::string name, auto& variable){
  const char *bname = name.c_str();
  if(!tree->FindBranch(bname)){
    std::cout << "initBranch::WARNING " << bname << " does not exist" << std::endl;
    return -1;
  }

  tree->SetBranchStatus(bname, 1);
  int code = tree->SetBranchAddress(bname, &variable);
  if(code != 0) std::cout << "initBranch::WARNING " << bname << " " << code << std::endl;
  return code;
}

static inline int initBranch(TChain *tree, std::string name, void* add){
  const char *bname = name.c_str();
  if(!tree->FindBranch(bname)){
    std::cout << "initBranch::WARNING " << bname << " does not exist" << std::endl;
    return -1;
  }
  tree->SetBranchStatus(bname, 1);
  int code = tree->SetBranchAddress(bname, add);
  if(code != 0) std::cout << "initBranch::WARNING " << bname << " " << code << std::endl;
  return code;
}

#endif // initBranch_H
