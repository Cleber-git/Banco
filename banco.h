#pragma once

#include <iostream>
#include <vector>



class Conta{

    int numeroConta;
    int saldo;
    std::string cpf;
    std::string nomeTitular;

public:

    Conta( std::string nomeTitular, std::string CPF, int NumeroConta, 
    std::string  nomeExtrato );
    void sacar( const int ValorSacar );
    void depositar( const int valorDepositar );
    void showExtrato( std::vector<std::string> &extrato ) const;
    void show() const;


    // métodos acessores 
    //// Getters

    void getSaldo() const;
    void getNomeTitular() const;
    void getCpf() const;
    void getNumeroConta() const;
    

};

class arquivo
{
public:
    int contLine();
    void pedirExtrato( std::vector<std::string> &extrato );  
    void registerAction( const std::string text );
    void limparExtrato( const std::string nomeExtrato );
    


};



