#include <iostream>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;

    if (x < 0) x *= -1;
    if (y < 0) y *= -1;

    if ((x*x + y*y <= 2*2) && (x >= 1 || y >= 1))
    {
        cout << "You're in :)\n";
    } 
    else
    {
        cout << "You're out :(\n";
    }
    return 0;
}