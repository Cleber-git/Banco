#include <iostream>
#include "banco.h"
#include <vector>

    ////////////////////////////////////////////////////////////////////////
   ////  Separando arquivos de definição de arquivos de implementação  ////
  ////////////////////////////////////////////////////////////////////////


int main() {

	Conta c;
	arquivo a;
	std::vector<std::string> extrato;
	

	c.depositar(50);

	c.sacar(100);
	c.showExtrato(extrato);
	std::cout << "Saldo da conta:             R$ " << c.saldo << ".00" << std::endl;

	return 0;

}