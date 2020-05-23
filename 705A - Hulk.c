#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    for(int i = 1 ; i <= number ; i ++ )
    {
        if( i == number && i % 2 != 0 )
        {
            printf("I hate ");
            break;
        }
        if( i == number && i % 2 == 0 )
        {
            printf("I love ");
            break;
        }
        
        if(i % 2 != 0 )
        {
            printf("I hate that ");
        }
        else
        {
            printf("I love that ");
        }
    }
    printf("it");
}
