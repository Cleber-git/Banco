#pragma once

#include "titular.hpp"
#include "arquivo.hpp"
#include <string>

#include <iostream>
#include <vector>



class Conta{

    int numeroConta;
    int saldo;
    std::string cpf;
    std::string nomeTitular;
    arquivo a;


public:

    Conta( titular t, int NumeroConta, 
    std::string  nomeExtrato );
    void sacar( const int ValorSacar );
    void depositar( const int valorDepositar );
    void showExtrato( std::vector<std::string> &extrato ) ;
    void show() const;
    static int qtdConta;


    // métodos acessores 
    //// Getters

    void getSaldo() const;
    void getNomeTitular() const;
    void getCpf() const;
    void getNumeroConta() const;
    

};




