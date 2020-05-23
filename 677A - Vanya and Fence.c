#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    int heightOfFence;
    scanf("%d", &heightOfFence);
    int people[number];
    for( int i = 0 ; i < number ; i ++ )
    {
        scanf("%d", &people[i]);
    }
    int width = 0;
    for( int i = 0 ; i < number ; i ++ )
    {
        if( people[i] > heightOfFence )
        {
            width += 2;
        }
        else
        {
            width += 1;
        }
    }
    printf("%d", width);
}
