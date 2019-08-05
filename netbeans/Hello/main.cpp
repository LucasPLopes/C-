/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: lucas
 *
 * Created on 5 de Agosto de 2019, 16:36
 */
#include<iostream>
#include <cstdlib>


#include "Pessoa.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Pessoa * p;
    string nome;
    int idade;
    
    cout<<"Qual seria o nome: ";
    getline(cin, nome);
    cout<<"Idade: ";
    cin>>idade;
    
    p = new Pessoa(nome, idade);
    
    cout<< p->toString()<<endl;
    

    return 0;
}

