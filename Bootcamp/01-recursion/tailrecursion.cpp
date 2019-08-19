#include <iostream>

/**
 *If the recursive occurs at the end of a function then it  is called a tail recursion
 *the tail recursion is similar to a loop
 *->this method executes all the statements before jumping into the next recursive call
 */

using namespace std;

void tail(int N)
{
    if (N == 0)
        return;
    cout << N << '\t';
    tail(N - 1);
}

int main(int argc, char const *argv[])
{
    tail(5);//5 4 3 2 1 
    cout << endl;
    return 0;
}
