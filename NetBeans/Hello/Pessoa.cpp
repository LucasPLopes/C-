/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pessoa.cpp
 * Author: lucas
 * 
 * Created on 5 de Agosto de 2019, 16:41
 */

#include "Pessoa.h"
#include <string>
using namespace std;
Pessoa::Pessoa() {
    nome = "";
    idade = 0;
}

Pessoa::Pessoa(const Pessoa& orig) {
    nome = orig.nome;
    idade = orig.idade;
}

Pessoa::~Pessoa() {
}

Pessoa::Pessoa(std::string nome, int idade) {
    this->nome = nome;
    this->idade = idade;

}
string Pessoa::toString(){
    string str = "";
    str ="Óla, eu sou "+nome + ", "+to_string(idade);
    return str;
}
