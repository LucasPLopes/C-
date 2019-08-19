#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    cout << "Declaração de variaveis\n";
    vector<string> girls{"Ana", "Michelle", "Milene", "Fabiana", "Flávia"};
    for (string const &girl : girls)
    {
        cout << "Girl: " << girl << "\n";
    }
}