#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:
    double quotaMensalVendas;	  
  public:
	  double quotaTotalAnual();
    void setQuotaMensalVendas(double new_quota);	
};


#endif