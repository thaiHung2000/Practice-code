#include <iostream>
using namespace std;
int main()
{
	int number, time;
	cin >> number >> time;
	int spend = 0;
	int count = 0;
	for(int i = 1; i <= number; i ++ )
	{
		spend += i*5;
		if( spend + time > 240 )
		{
			break;
		}
		count++;



	}
	cout << count;
}