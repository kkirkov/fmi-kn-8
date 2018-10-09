#include <iostream>

using namespace std;

int main()
{
    // Тук има повече смисъл да е число с плаваща запетая. 
    // Извинявам се ,че не съобразих в часа 
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
