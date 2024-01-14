#include "banco.h"



void Conta::sacar(int ValorSacar) {

    if (ValorSacar <= saldo) {
        saldo -= ValorSacar;
        std::cout << "Saque efetuado com sucesso: R$ " << ValorSacar << ".00" << std::endl;
    }else{
        std::cout << "Saldo insuficiente para saque desse valor!" << std::endl;
    }


}

void Conta::depositar(int valorDepositar) {


    if (valorDepositar > 0) {

        saldo += valorDepositar;
        std::cout << "Dep�sito efetuado:          R$ " << valorDepositar << ".00" << std::endl;

    } else {

        std::cout << "Valor adicionado incompat�vel com as normas da empresa!";

    }

}