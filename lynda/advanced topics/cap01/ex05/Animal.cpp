#include<iostream>
#include<cstdio>

using namespace std;

const string DESC = "Desconhecido";
const string CLONE = "Clone - ";

class Animal{
private:   
    string tipo;
    string nome;
    string som;
public:
    Animal();
    Animal(const string& tipo, const string& nome, const string & som):tipo(tipo), nome(nome), som(som){};
    Animal(const Animal&);
    inline ~Animal(){cout<<"Bye "<<nome<<endl;};
    //sobreescrita
    Animal & operator = (const Animal & c); // Operador de cópia
    void print() const;
    void print2() const;
};

Animal::Animal(): tipo(DESC), nome(DESC), som(DESC){}//construtor default
Animal::Animal(const Animal & c) {
    nome = CLONE + c.nome;
    tipo = c.tipo;
    som = c.som;
}

void Animal::print() const{
    cout<<"nome["+nome+"]"<<endl;
    cout<<"tipo["+tipo+"]"<<endl;
    cout<<"som["+som+"]"<<endl;
}
void Animal::print2()const{
    printf("Esse é o %s, ele é um %s e seu som é %s\n",nome.c_str(),tipo.c_str(),som.c_str());
}
int main(){
    Animal a("cachorro","Romeu","Au-au");
    Animal clone(a);

    a.print();
    cout<<"\nAgora o clone\n";
    clone.print2();

    cout<<"\nDestructors\n\n";
    return 0;
}