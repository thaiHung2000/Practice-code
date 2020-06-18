#include <iostream>
using namespace std;
int main()
{
	int cases;
	cin >> cases;
	int count = 0;
	int record, max , min;
	for (int i = 0; i < cases; i ++ )
	{
		if( i == 0 )
		{
			cin >> record;
			max = record ;
			min = record;
			continue;
		}
		cin >> record;
		if( record > max )
		{
			max = record; 
			count++;
		}
		if( record < min )
		{
			min = record;
			count++;
		}
	}
	cout << count;
}