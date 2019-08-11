#include<iostream>
#include<string>

using namespace std;

namespace NS
{

class Circulo{
    private:
        float raio;
    public:
        Circulo(){this->raio = 0;};
        void init();
        string toString();
    };

    void Circulo::init(){
        cout    <<  "Qual o raio: ";
        cin >>   this->raio;
    }
    string Circulo::toString(){
        string msg = "Raio: "+ to_string(this->raio);
        return msg;
    }
} 


int main(){
    NS::Circulo *p, c;

    p = new NS::Circulo();
    p->init();

    c.init();

    cout<<"*p->toString(): "<< p->toString()<<endl;
    cout<<"c.toString(): "<< c.toString()<<endl;

    return 0;
}