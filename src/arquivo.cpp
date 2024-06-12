#include "../includes/arquivo.hpp"

#include <fstream>
#include <iostream>

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

void arquivo::registerAction( const std::string text ){

    qtdArquivo++;
    std::ofstream f("extrato.txt", std::ios::app);
    if (!f.is_open()) return;

    f << text;
    f <<"\n";

    
    
    f.close();
}

void arquivo::limparExtrato( const std::string nomeExtrato ){
    std::ofstream f(nomeExtrato);
}
