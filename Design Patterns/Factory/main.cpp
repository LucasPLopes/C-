// C++ not support virtual constructors
#ifndef __io__
#define __io__

#include<iostream>
using namespace std;
#endif

#include "FactoryToy.cpp"

int main(int argc, char const *argv[])
{
    int type;
    while(1){
        cout<<endl<<"Enter the type or Zero for exit"<<endl;
        cin>> type;
        if(!type)
            break;
        Toy *v =  ToyFactory::createToy(type);
        if(v){
            v->showProduct();
            delete v;
        }
    }

    cout<<"Exit\n";
    return 0;
}

