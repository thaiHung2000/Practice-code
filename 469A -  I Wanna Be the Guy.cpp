#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
    int n ;
    cin >> n;
    int p;
    cin >> p;
    int arr1[p];
    for( int i = 0 ; i < p ; i ++ )
    {
        cin >> arr1[i];
    }
    int q;
    cin >> q;
    int arr2[q];
    for (int i = 0 ; i < q ; i ++ )
    {
        cin >> arr2[i];
    }
    
    
    int flagT = 0;
    
    int flagD = 0;
    for(int i = 1 ; i <= n ; i++ )
    {
        flagD = 0;
        for(int j = 0 ; j < p ; j ++ )
        {
            if(arr1[j] == i )
            {
                flagD = 1;
                
            }
        }
        for(int z = 0 ; z < q ; z++ )
        {
            if(arr2[z] == i )
            {
                flagD = 1;
                
            }
        }
        if( flagD == 0 )
        {
            flagT = 1;
        }
        
        
    }
    if( flagT == 1)
    {
        cout << "Oh, my keyboard!" ;
    }
    else
    {
        cout << "I become the guy.";
    }

    



    

}
