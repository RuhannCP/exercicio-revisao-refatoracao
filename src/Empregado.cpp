#include "Empregado.hpp"

double Empregado::pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * salarioHora;
}

void Empregado::setSalario(double value_Salario){
	this->salarioHora = value_Salario;
}

std::string Empregado::getNome(){
  return this->nome;
}

void Empregado::setNome(std::string new_nome){
  this->nome = new_nome;
}