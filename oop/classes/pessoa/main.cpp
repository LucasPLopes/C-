#include<iostream>
#include "Pessoa.h"

using namespace std;

int main(){
    string nome;
    cout<<"Qual o seu nome: ";
    getline(cin, nome);

    Pessoa *q,*p = new Pessoa();
    p->setNome(nome);
    q = p;    
    cout<<"Olá, "<<q->getNome()<<endl;

    return 0;
}