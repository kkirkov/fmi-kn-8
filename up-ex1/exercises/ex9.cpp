#include <iostream>

using namespace std;

int main()
{
    int n;
    int spaces = 0, numbers = 1;
    cin >> n;

    for (int line = 1; line <= n; line++)
    {
        spaces = n - line;
        while (spaces)
        {
            cout << " ";
            spaces--;
        }
        for (int i = 0; i < numbers; i++)
        {
            cout << line;
        }        
        cout << endl;
        numbers += 2;
    }
    return 0;
}