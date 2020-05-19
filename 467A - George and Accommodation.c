#include <stdio.h>
int main()
{
    int numOfRoom;
    int p,q;
    int count = 0;
    scanf("%d", &numOfRoom );
    for(int i = 0 ; i < numOfRoom ; i ++ )
    {
        scanf("%d%d",&p,&q);
        int accomodate = q - p;
        if( accomodate >=2 )
        {
            count++;
        }
    }
    printf("%d", count);
}
