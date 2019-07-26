#include<iostream>
#include "Pessoa.h"

using namespace std;

int main(){
    string nome;
    cout<<"Qual o seu nome: ";
    getline(cin, nome);

    Pessoa *p = new Pessoa();
    p->setNome(nome);

    cout<<"Olá, "<<p->getNome()<<endl;

    return 0;
}