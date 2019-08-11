/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pessoa.h
 * Author: lucas
 *
 * Created on 5 de Agosto de 2019, 16:41
 */

#ifndef PESSOA_H
#define PESSOA_H
#include<string>

using namespace std;
class Pessoa {
public:
    Pessoa();
    Pessoa(const Pessoa& orig);
    Pessoa(string nome, int idade);
    virtual ~Pessoa();
    string   toString();
private:
   string nome;
    int idade = 0;

};

#endif /* PESSOA_H */

