#include <iostream>

using namespace std;

int main()
{
    int secretNum, guessNum;
    int cnt = 0;
    cin >> secretNum;
    while(true)
    {
        cnt++;
        cin >> guessNum;
        if (guessNum < secretNum) 
            cout << "Too small\n";
        if (guessNum > secretNum)
            cout << "Too big\n";
        if (guessNum == secretNum)
        {
            cout << "You guessed it ;) in " << cnt << "tries\n";
            return 0;
        }
    }
    return 0;
}