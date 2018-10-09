#include <iostream>

using namespace std;

int main()
{
    int numToSum, numToReverse;
    cin >> numToSum;
    numToReverse = numToSum;

    // A)
    int digitSum = 0;
    while (numToSum > 0)
    {
        digitSum += (numToSum % 10);
        numToSum /= 10;
    }
    cout << "A) Sum of digits is " << digitSum << "\n";

    // B)
    int revercedNum = 0;
    while (numToReverse > 0)
    {
        revercedNum *= 10;
        revercedNum += (numToReverse % 10);
        numToReverse /= 10;
    }
    cout << "B) Reversed number is " << revercedNum << "\n";

    return 0;

}