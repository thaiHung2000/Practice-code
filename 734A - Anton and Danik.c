#include <stdio.h>

int main()
{
    int numberOfGames;
    scanf("%d", &numberOfGames);
    char win[numberOfGames];
    int A = 0, D = 0;
    scanf("\n");
    for(int i = 0 ; i < numberOfGames ; i++ )
    {
        
        scanf("%c", &win[i]);
        if(win[i] == '\n')
        {
            win[i] = NULL;
            break;
        }
        if(win[i] == 'A')
        {
            A++;
        }
        if(win[i] == 'D')
        {
            D++;
        }
    }
    if( A == D)
    {
        printf("Friendship");
    }
    if( A > D )
    {
        printf("Anton");
    }
    if( D > A )
    {
        printf("Danik");
    }
    
}
