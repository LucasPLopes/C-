#include<iostream>
using namespace std;

class Info{
private:
    int v =0;
public:
    void setV(const int & v){this->v = v;}
    int getV()const {return v;}
    
};

int main(){
    const  int idade = 23;
    Info *info = new Info();
    info->setV(idade);
    cout<<"Idade: "<<info->getV()<<endl;

    Info obj1;
    const int ano = 2019;
    obj1.setV(ano);
    cout<<"Ano1: "<<obj1.getV()<<endl;

    Info obj2 = obj1;
    cout<<"Ano2: "<<obj2.getV()<<endl;

    return 0;
}