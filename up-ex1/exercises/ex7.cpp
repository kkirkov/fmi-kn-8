#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int factoriel = 1;
    while (n > 1)
    {
        factoriel *= n;
        n--;
    }
    cout << factoriel << "\n";

    return 0;
}
