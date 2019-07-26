#include "Pessoa.h"

Pessoa::Pessoa(){
    this-> nome = "";
}
void Pessoa::setNome(string n){
    this->nome = n;
}
string Pessoa::getNome(){
    return this->nome;
}