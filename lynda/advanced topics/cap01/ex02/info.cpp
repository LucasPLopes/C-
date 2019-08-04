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

};


int main(){
    Info * info = new Info(23,"Lucas Lopes",1500);

    cout<<"Nome: "<<info->getB()<<endl;
    cout<<"Idade: "<<info->getA()<<endl;
    cout<<"Bolsa: "<<info->getC()<<endl;


    return 0;
}