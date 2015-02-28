#ifndef bwi_krexec_CallElevator_h__guard
#define bwi_krexec_CallElevator_h__guard

#include "actasp/Action.h"


namespace bwi_krexec {
  
struct CallElevator : public actasp::Action {
    
  int paramNumber() const {return 2;}
  
  std::string getName() const{return "callelevator";}
  
  void run();
  
  bool hasFinished() const;
  
  bool hasFailed() const;
  
  actasp::Action *cloneAndInit(const actasp::AspFluent & fluent) const;
  
  actasp::Action *clone() const {return new ChangeFloor(*this);}

private:
 
std::vector<std::string> getParameters() const;

std::string elevator;
bool going_up;

};
  
  
}

#endif
