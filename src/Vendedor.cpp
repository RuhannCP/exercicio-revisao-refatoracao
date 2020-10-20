#include "Vendedor.hpp"

	
double Vendedor::quotaTotalAnual() {
	return quotaMensalVendas * 12;
}	

void Vendedor::setQuotaMensalVendas(double new_quota){
	this->quotaMensalVendas = new_quota;
}
