#pragma once

#include <string>


class titular
{
private:
    std::string m_nome;
    std::string m_cpf;
    
public:
    titular(std::string nome, std::string cpf);
    ~titular();

    std::string restauraNome(){return m_nome;}
    std::string restauraCpf(){return m_cpf;}
};