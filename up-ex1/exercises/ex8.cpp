#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int first = 0, second = 1;

    for (int i = 1; i < n; i++)
    {
        second += first;
        first = second - first;
    }

    cout << first << "\n";
    return 0;
}