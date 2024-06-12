#include "../includes/banco.hpp"
#include "../includes/titular.hpp"
#include "../includes/arquivo.hpp"

#include <vector>
#include <ctime>
#include <iostream>
#include <fstream>



// membro estático deve ser inicializado fora de qualquer escopo
int Conta::qtdConta = 0;
int arquivo::qtdArquivo = 0;



// Aplicando conceito de lista de inicialização(inicialization list); 

Conta::Conta( titular t,int numeroconta, std::string nomeExtrato ):numeroConta( numeroconta ),
              saldo( 0 ),
              cpf( t.restauraCpf() ),
              nomeTitular( t.restauraNome() )
              
{
    qtdConta++;
    a.limparExtrato( nomeExtrato );
}


void Conta::sacar( const int ValorSacar ) {


    if ( ValorSacar <= saldo ) {
        
        saldo -= ValorSacar;
        std::cout << "Saque efetuado:     R$ " << ValorSacar << ".00" << std::endl;
        std::string ValorString = std::to_string( ValorSacar );
        a.registerAction( "Saque:     " );
        a.registerAction( ValorString );
        
    }else{

        std::cout << "Saldo insuficiente para saque desse valor!" << std::endl;

    }

}

void Conta::depositar( const int valorDepositar ) {

    if ( valorDepositar > 0 ) {

        saldo += valorDepositar;
        std::cout << "Deposito efetuado:  R$ " << valorDepositar << ".00" << std::endl;
        std::string ValorString = std::to_string( valorDepositar );
        a.registerAction( "Depósito: " );
        a.registerAction( ValorString );

    } else {

        std::cout << "Valor adicionado incompativel com as normas da empresa!";

    }

}





void Conta::showExtrato( std::vector<std::string> &extrato ) {

    a.pedirExtrato( extrato );

    
    std::cout << ">> ********************************************** <<" << std::endl;
    std::cout << ">> ************** EXTRATO BANCÁRIO ************** <<" << std::endl;
    std::cout << ">> ********************************************** <<" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;

    for(int i = 0; i < a.contLine(); i++){

        std::cout << extrato[i];
        
        if( i % 2 != 0 ) std::cout << std::endl;
    
    }
    std::cout << std::endl;

}



void Conta::getSaldo() const {
    std::cout << "Saldo da conta: R$ " << saldo  << ".00" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    


}




void Conta::getNomeTitular() const{

    std::cout << nomeTitular << std::endl;

}

void Conta::getNumeroConta() const{

    std::cout << numeroConta << std::endl;

}

void Conta::getCpf() const{

    std::cout << cpf << std::endl;

}

void Conta::show() const {

    std::cout << "==============================================" << std::endl;
    std::cout << "    Olá " << nomeTitular <<", Seja bem vindo!" << std::endl;
    std::cout << "==============================================" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Conta: " << numeroConta << std::endl;
    std::cout << "Cpf: " << cpf << std::endl;
    std::cout << "----------------------------------------------" << std::endl;

}

