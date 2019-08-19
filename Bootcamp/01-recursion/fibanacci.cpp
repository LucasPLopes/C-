#include<iostream>


int iFib(int N){
    int a(0),b(1), aux(0);
    for (size_t i = 1; i < N; i++)
    {
        aux = a + b;
        a = b;
        b = aux;
    }
    return aux;
    
}
int fib(int N){
    if(N == 1) return 1;
    if(N == 0) return 0;
    return fib(N-1)+ fib(N-2);
}



int main(int argc, char const *argv[])
{
    std::cout<<"Fibonacci of 8: "<<fib(8)<<"\n";
    std::cout<<"iFibonacci of 8: "<<iFib(8)<<"\n";
    return 0;
}
