#include <iostream>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    for(int i = 0; i < testCase ; i++ )
    {


        int numberOfCandies;
        cin >> numberOfCandies;
        int numberOfWay;
        if( numberOfCandies % 2 != 0 )
        {
            numberOfWay = (numberOfCandies - 1) / 2;
        }
        else
        {
            numberOfWay = ( numberOfCandies / 2 )- 1;
        }
        cout << numberOfWay<<endl;

    }
}
