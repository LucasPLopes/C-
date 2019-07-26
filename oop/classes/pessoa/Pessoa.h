#ifndef PESSOA_H
#define PESSOA_H

#include<iostream>

using namespace std;
class Pessoa{
    private: 
        string nome;
    public:
        Pessoa();
        void setNome();
        string getNome();
};
#endif