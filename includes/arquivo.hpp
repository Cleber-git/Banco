#pragma once

#include <vector>
#include <string>


class arquivo
{
public:
    static int qtdArquivo;
    int contLine();
    void pedirExtrato( std::vector<std::string> &extrato );  
    void registerAction( const std::string text );
    void limparExtrato( const std::string nomeExtrato );
    


};
