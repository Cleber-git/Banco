#include <iostream>
#include "banco.h"
#include <vector>

    ////////////////////////////////////////////////////////////////////////
   ////  Separando arquivos de definição de arquivos de implementação  ////
  ////////////////////////////////////////////////////////////////////////


int main() {

	Conta c("Robert Nesta", "111.222.333-44", 123456789, "extrato.txt");
	arquivo a;
	std::vector<std::string> extrato;
	
	c.show();
	c.depositar(3000);
	c.sacar(100);
	c.sacar(399.97);

	c.showExtrato(extrato);
	c.getSaldo();


	return 0;
}