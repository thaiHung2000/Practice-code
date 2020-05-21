#include <stdio.h>

int main()
{
    char word[101];
    int countA = 0;
    int counta = 0;
    
    for(int i = 0 ; i < 101; i ++ )
    {
        scanf("%c", &word[i]);
        if(word[i] == '\n')
        {
            word[i] = NULL;
            break;
        }
        if(word[i] >= 'a' && word[i] <= 'z' )
        {
            counta++;
        }
        if(word[i] >= 'A' && word[i] <= 'Z')
        {
            countA++;
        }
        
    }
    if ( countA > counta )
    {
        for ( int i = 0 ; i < strlen(word) ; i++ )
        {
            if ( word[i] >= 'a' && word[i] <= 'z')
            {
                word[i] -= 32;
            }
        }
    }
    else
    {
        for(int i = 0 ; i < strlen(word) ; i++ )
        {
            if ( word[i] >= 'A' && word[i] <= 'Z' )
            {
                word[i] += 32;
            }
        }
    }
    for(int i = 0 ; i < strlen(word) ; i++ )
    {
        printf("%c", word[i]);
    }
    
}
