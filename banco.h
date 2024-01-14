#pragma once

#include <iostream>

struct Conta{

    int numeroConta = 0;
    std::string cpf;
    int saldo = 10000;
    std::string nomeTitular;

    void sacar( int ValorSacar );
    void depositar( int valorDepositar );
};


