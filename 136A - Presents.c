#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int arr[num];
    int arrr[num];
    
    for( int i = 0 ; i < num ; i++ )
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i <= num ; i++ )
    {
        for ( int j = 1; j <= num ; j++ )
        {
                if ( arr[i - 1] == j )
                {
                    arrr[j - 1] = i;
                    break;
                }
        }
    }
    for( int i = 0 ; i < num ; i++ )
    {
        printf("%d ", arrr[i]);
    }
    
}
