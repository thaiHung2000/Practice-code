#include <iostream>
using namespace std;
int main()
{
    int price;
    int rBurle;
    cin >> price >> rBurle;
    int i = 1;
    int temp1, temp2;
    do
    {
        temp1 = price * i;
  
        temp2 = temp1 % 10;
        
        i++;
        if( temp2 == 0 )
        {
            break;
        }
    } while ( temp2 != rBurle);
    cout << i - 1;
    
}
