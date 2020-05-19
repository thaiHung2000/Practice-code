#include <stdio.h>
int main()
{
    char strings1[101];
    char strings2[101];
    char tmp[101];

    for(int i = 0 ; i < 101 ; i++ )
    {
        scanf("%c", &strings1[i]);
        if(strings1[i] == '\n')
        {
            strings1[i] = NULL;
            break;
        }
    }

    scanf("\n");

    for(int i = 0 ; i < 101 ; i++ )
    {
        scanf("%c", &strings2[i]);
        if(strings2[i] == '\n')
        {
            strings2[i] = NULL;
            break;
        }
    }

    for(int i = 0 ; i < strlen(strings1) ; i++ )
    {
        tmp[strlen(strings1) - i - 1] = strings1[i];
    }
    
    
    int flag = 1;
    for(int i = 0 ; i < strlen(strings2) ; i++ )
    {
        if(tmp[i] != strings2[i])
        {
            flag = 0;
            break;
        }
        
    }
    if ( flag == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    
}
