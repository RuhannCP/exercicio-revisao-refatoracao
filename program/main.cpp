#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

  int i = 0;
  int num_projetos[3] = { 3, 1, 2 };
  int quota[3] = { 5000, 3000, 4000 };
  int vec_sal_hr[6] = { 35, 30, 30, 20, 25, 30 };
  double vec_pagamentos_mes[6] = { 9.5, 8.0, 8.0, 6.0, 8.0, 8.0 };
  std::string vec_nomes[6] = { "Joao Snow", "Daniela Targaryen", "Bruno Stark", 
                              "Tonho Lannister", "Jose Mormont", "Sonia Stark" };
  Engenheiro engenheiro[3];
  Vendedor vendedor[3];

  for ( ; i<3;i++){

    engenheiro[i].setNome(vec_nomes[i]);
    engenheiro[i].setProjetos(num_projetos[i]);
    engenheiro[i].setSalario(vec_sal_hr[i]);
    std::cout << "Nome: " << engenheiro[i].getNome() << std::endl;
    std::cout << "Salario Mes: " << engenheiro[i].pagamentoMes(vec_pagamentos_mes[i]) << std::endl;
    std::cout << "Projetos: " << engenheiro[i].getProjetos() << std::endl;
    std::cout << std::endl;
  }

  for ( ; i<6;i++){

    
    vendedor[i-3].setNome(vec_nomes[i]);
    vendedor[i-3].setSalario(vec_sal_hr[i-3]);
    vendedor[i-3].setQuotaMensalVendas(quota[i-3]);
    std::cout << "Nome: " << vendedor[i-3].getNome() << std::endl;
    std::cout << "Salario Mes: " << vendedor[i-3].pagamentoMes(vec_pagamentos_mes[i]) << std::endl;  
    std::cout << "Quota vendas: " << vendedor[i-3].quotaTotalAnual() << std::endl;
    std::cout << std::endl;
  }
  
  return 0;	
}