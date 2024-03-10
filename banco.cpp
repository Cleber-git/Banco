#include "banco.h"
#include <vector>
#include <ctime>
#include <iostream>
#include <fstream>





// Aplicando conceito de lista de inicialização(inicialization list); 

Conta::Conta( std::string nometitular, std::string CPF, int numeroconta, std::string nomeExtrato ): numeroConta( numeroconta ),
              saldo( 0 ),
              cpf( CPF ),
              nomeTitular( nometitular )
{
    arquivo a;
    a.limparExtrato( nomeExtrato );
}


void Conta::sacar( const int ValorSacar ) {

    arquivo a;

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

    arquivo a;

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

void arquivo::pedirExtrato( std::vector <std::string>&extrato ){

    

    int count = contLine();

    std::ifstream f( "extrato.txt" );

    std::string line;

    int cont = 0;
    if( f.is_open() ){
        
        while ( getline( f, line ) )
        {
            extrato.push_back( line );
        }
    }
    f.close();

}


int arquivo::contLine(){

    std::ifstream f( "extrato.txt" );
    std::string line;
    int cont=0;
    if( f.is_open() ){
        
        while ( getline( f, line ) )
        {
            cont++;
        }
    }
    f.close();
    return cont;
}

void Conta::showExtrato( std::vector<std::string> &extrato ) const{


    arquivo a;

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

void arquivo::registerAction( const std::string text ){

    std::ofstream f("extrato.txt", std::ios::app);

    if (!f.is_open()) return;

    f << text;
    f <<"\n";

    
    
    f.close();
}

void Conta::getSaldo() const {
    std::cout << "Saldo da conta: R$ " << saldo  << ".00" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    


}


void arquivo::limparExtrato( const std::string nomeExtrato ){
    std::ofstream f(nomeExtrato);
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