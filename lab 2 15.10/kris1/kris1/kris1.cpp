#include<iostream>

using namespace std;

int main()
{
	char a;
	cin >> a;
	if ('a'>65&&'a'<91)
	{
		a = a + 32;
	}
	cout << a;
    return 0;
}

