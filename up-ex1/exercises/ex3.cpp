#include <iostream>

using namespace std;

int main()
{
    // Input example: 1 + 1 
    int x,y;
    char op;
    cin >> x >> op >> y;
    
    if (op == '+')
    {
        cout << x + y << "\n";
    } 
    else if (op == '-')
    {
        cout << x - y << "\n";
    }
    else if (op == '*')
    {
        cout << x * y << "\n";
    }
    else if (op == '/')
    {
        if (y != 0)
        {
            cout << x / y << "\n";
        }
        else
        {
            cout << "cannot divide by 0\n";
        }
    }
    else
    {
        cout << "invalid operation\n";
    }
    return 0;
}
