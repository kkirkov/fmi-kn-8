#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 1)
    {
        cout << 1 << "\n";
        return 0;
    } 

    int factoriel = 1;
    while (n > 1)
    {
        factoriel *= n;
        n--;
    }
    cout << factoriel << "\n";

    return 0;
}