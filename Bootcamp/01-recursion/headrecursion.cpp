#include <iostream>
/*If the recursive call occurs at the beginning  of a function then it is called a head recursion
 * the method saves the state before jumping into the next recursive call 
 * ->which means that head recursion needs more memory because we have to store the states of
 * the actual function  calls 
 */
using namespace std;
void head(int N)
{
    if (N == 0)
        return;
    head(N - 1);
    cout << N << '\t';
}

int main(int argc, char const *argv[])
{
    head(5);// 1 2 3 4 5
    cout << endl;
    return 0;
}
