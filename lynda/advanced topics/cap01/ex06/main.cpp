#include<iostream>
using namespace std;

class C{
    int v = 0;
public:
    //C (const int& v): v(v){}//constructor implicito
    explicit C (const int& v): v(v){}
    void setV(const int &v){this->v = v;}
    int getV()const{return v;}
};
void fun(const C& o){
    cout<<"V = "<<o.getV()<<endl;
    }
int main(){
    //When you have one argument in your constructor
    //  C o = 'L';//implicit conversion
     C o('L');//explicit constructor  
    fun(o);// 76 :D 

    

    return 0;
}