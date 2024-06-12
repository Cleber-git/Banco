#include <iostream>
#include "includes/banco.hpp"
#include "includes/titular.hpp"
#include "includes/arquivo.hpp"
#include <vector>

    ////////////////////////////////////////////////////////////////////////
   ////  Separando arquivos de definição de arquivos de implementação  ////
  ////////////////////////////////////////////////////////////////////////


int main() {

	Conta c( titular("Cleber Neves", "123.456.789-10"), 123456789, "extrato.txt" );
	Conta c2(titular("Clovis Nunes", "321.654.987.01"), 876543210, "ihuiha.txt");
	arquivo a;
	std::vector<std::string> extrato;
	
	c.show();
	c.depositar( 3000 );
	c.sacar( 100 );
	c.sacar( 399.97 );

	c.showExtrato( extrato );
	c.getSaldo();

	std::cout << Conta::qtdConta << std::endl;
	std::cout << arquivo::qtdArquivo << std::endl;
	return 0;
}