#include<iostream>

int sum(int N){
    if(N == 1) return 1;
    return N + sum(N-1);
}

int main(int argc, char const *argv[])
{
    int sum10 =0;
    sum10 = sum(10);
    
    std::cout<<"Sum of [1..10]: "<<sum10<<"\n";
    return 0;
}
