#include <iostream>
#include "banco.h"

    ////////////////////////////////////////////////////////////////////////
   ////  Separando arquivos de definição de arquivos de implementação  ////
  ////////////////////////////////////////////////////////////////////////


int main() {

	Conta c;
	

	c.depositar(50);

	std::cout << "Saldo da conta:             R$ " << c.saldo << ".00" << std::endl;
	c.sacar(199.99);
	std::cout << "Saldo da conta:             R$ " << c.saldo << ".00" << std::endl;
	return 0;

}