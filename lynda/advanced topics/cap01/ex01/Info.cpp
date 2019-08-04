#include<iostream>
using namespace std;
class Info{
    private:
        int i =0;
    public:
    void setI(const int & v){   i = v ;}
    int getI()const {return i;}

};

int main(){
    const int i =7;
    Info* info;
    
    info = new Info();
    info->setI(i);

    cout<<"Minha informação: "<<info->getI()<<endl;




    return 0;
}