#pragma once

#include <iostream>
#include <vector>



struct Conta{

    int numeroConta = 0;
    std::string cpf;
    int saldo = 1000;
    std::string nomeTitular;

    void sacar( int ValorSacar);
    void depositar( int valorDepositar);
    void showExtrato( std::vector<std::string> &extrato);
    

};

struct arquivo
{
    int contLine();
    void pedirExtrato(std::vector<std::string> &extrato);  
    void registerAction(std::string text);
};



