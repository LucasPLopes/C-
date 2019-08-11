#include "Pessoa.h"

     using namespace std;

Pessoa::Pessoa(){
    this-> nome = "";
}
void Pessoa::setNome(string n){
    this->nome = n;
}
string Pessoa::getNome(){
    return this->nome;
}

string Pessoa::toString(){
    string str =  "Nome["+this->nome+"]";
    return str;
}