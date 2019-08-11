#include<iostream>
using namespace std;
class Info{
private:
    int a =0;
    const char * b = "";
    double c = 0;
public:
    Info(const int x, const char * y, const double z): a(x), b(y), c(z) {};
    int getA(){return a;}
    const char * getB(){return b;}
    double getC(){return c;}
    void setA(const int a){this->a = a;}
    void setB(const char* b){this->b = b;}
    void setC(const double c){this->c = c; }

};


int main(){
    Info * info = new Info(0,"L4cas Lopes",1500);
    
    info->setA(23);
    info->setB("Lucas Lopes");


    cout<<"Nome: "<<info->getB()<<endl;
    cout<<"Idade: "<<info->getA()<<endl;
    cout<<"Bolsa: "<<info->getC()<<endl;


    return 0;
}