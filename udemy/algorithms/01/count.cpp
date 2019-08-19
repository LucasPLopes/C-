#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool predicado(int a, int b){
    return a>b;
}

int main(){ 
    vector<int> v , v2 = {5,7,3,7}, v3 ={6,8,4,8};

    v.push_back(5);
    v.push_back(7);
    v.push_back(3);
    v.push_back(7);

    for(auto i : v)
        cout<<i<<"\t";
    cout<<endl;
    int valor = 3;
    cout<<"Temos quantos \""<<valor<<"\" : "<<count(v.begin(),v.end(),valor)<<endl;

    if(equal(v.begin(),v.end(),v2.begin(),v2.end()))
        cout<<"Os vetores \"v\" e \"v2\" são iguais\n";
    else
        cout<<"São diferentes\n";
    
    if(equal(v3.begin(),v3.end(),v2.begin(),v2.end(),predicado))
        cout<<"v3 > v2\n";
    
    vector<int> v4 = {0,2,3,4,4,5,6,6,7};
    cout<<"*adjacent_find() =" <<*adjacent_find(v4.begin(),v4.end())<<endl;
    
    return 0;  
}