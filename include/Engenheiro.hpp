#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
	  int projetos;
  public:
    int getProjetos();
    void setProjetos(int num_projetos);	
};


#endif