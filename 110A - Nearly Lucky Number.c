#include <stdio.h>
int main()
{
    char number;
    int count = 0;
    for(int i = 0 ; i < 1000000000 ; i++ )
    {
        scanf("%c", &number);
        if(number == '\n' )
        {
            break;
        }
        if(number == '4' || number == '7')
        {
            count++;
        }
    }
    
    if(count == 4 || count == 7 )
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}
