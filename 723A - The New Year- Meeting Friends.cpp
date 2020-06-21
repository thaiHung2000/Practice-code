#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int min = 101, max = 0;
    if(min > x1 )
    {
        min = x1;
    }
    if(max < x1 )
    {
        max = x1;
    }
    if(min > x2 )
    {
        min = x2;
    }
    if(min > x3 )
    {
        min = x3;
    }
    if(max < x2 )
    {
        max = x2;
    }
    if(max < x3 )
    {
        max = x3;
    }
    int middle;
    if( x1 != max && x1 != min )
    {
        middle = x1;
    }
    if( x2 != max && x2 != min )
    {
        middle = x1;
    }
    if( x3 != max && x3 != min )
    {
        middle = x3;
    }
    int count = 0;
    count = max - middle;
    count += middle - min;
    cout << count;
}


