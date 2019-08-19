#include<iostream>

using namespace std;
class Contador{
private:
    int id;
    
public:
    static  int  contador;
    Contador(){ id = contador++;}
    int getId(){return id;}
};
Contador::contador = 0;


int main(int argc, char const *argv[])
{
    

    Contador c1,c2,c3;
    cout<<"C1.id: "<<c1.getId()<<endl;
    cout<<"C2.id: "<<c2.getId()<<endl;
    cout<<"C3.id: "<<c3.getId()<<endl;
    return 0;
}
