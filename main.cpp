#include <iostream>


    ////////////////////////////////////////////////////////////////////////
   ////  Pondo em pr�tica o conceito de classes,					   ////
  ////   unindo dados e comportamentos na mesma estrutura < CLASSE >  ////
 ////////////////////////////////////////////////////////////////////////



struct conta {


	int n�meroConta = 112233;
	std::string cpf = "111.222.333-44";
	int saldo = 1000;
	std::string nomeTitular = "Cleber Gon�alves";

	void sacar(int ValorSacar) {

		if (ValorSacar <= saldo) {
			saldo -= ValorSacar;
			std::cout << "Saque efetuado com sucesso: R$ " << ValorSacar << ".00" << std::endl;
		}


	}
	void depositar(int valorDepositar) {


		if (valorDepositar > 0) {

			saldo += valorDepositar;
			std::cout << "Dep�sito efetuado:          R$ " << valorDepositar << ".00" << std::endl;

		}
		else {

			std::cout << "Valor adicionado incompat�vel com as normas da empresa!";

		}

	}

};









int main() {

	conta c;
	

	c.depositar(50);

	std::cout << "Saldo da conta:             R$ " << c.saldo << ".00" << std::endl;
	c.sacar(199.99);
	std::cout << "Saldo da conta:             R$ " << c.saldo << ".00" << std::endl;
	return 0;

}