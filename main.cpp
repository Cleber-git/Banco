#include <iostream>
#include "banco.h"

    ////////////////////////////////////////////////////////////////////////
   ////  Pondo em pr�tica o conceito de classes,					   ////
  ////   unindo dados e comportamentos na mesma estrutura < CLASSE >  ////
 ////////////////////////////////////////////////////////////////////////


int main() {

	Conta c;
	

	c.depositar(50);

	std::cout << "Saldo da conta:             R$ " << c.saldo << ".00" << std::endl;
	c.sacar(199.99);
	std::cout << "Saldo da conta:             R$ " << c.saldo << ".00" << std::endl;
	return 0;

}