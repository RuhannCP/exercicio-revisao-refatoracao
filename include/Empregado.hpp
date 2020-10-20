#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  protected:
    double salarioHora;
    std::string nome;
  public:
    double pagamentoMes(double horasTrabalhadas);	
    void setSalario(double value_Salario);
    std::string getNome();
    void setNome(std::string new_name);
};

#endif