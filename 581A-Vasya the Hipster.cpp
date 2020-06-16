#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int num;
	if ( a >= b )
	{
		cout << b;
		num = a - b;
	}
	if ( a < b )
	{
		cout << a;
		num = b - a;
	}

	if( num <= 1)
	{
		cout << " " << 0;
	}
	else
	{
	cout << " " << num/2;
	}


}