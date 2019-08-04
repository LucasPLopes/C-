#include<iostream>
using namespace std;

class Info{
    const char * s = "";
public:
    void setS(const char * str){  s=str;}
    const char * getS(){return s;}

    
};

int main(){
    Info info;
    info.setS("oi");

    cout<<info.getS()<<endl;

    return 0;
}