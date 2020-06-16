#include <iostream>
using namespace std;
int main()
{
    int a, b, c , d;
     cin >> a >> b >> c >> d;
     int x , y , z;
     if( d < a )
     {
         swap(d,a);
     }
    if( d < b )
    {
        swap(d,b);
    }
    if ( d < c )
    {
        swap(d,c);
    }
     x = a + b - d;
     y = d - b;
     z = d - a;
     cout << x << " " <<y << " " << z;

     
}
