#include <stdio.h>
int main()
{
    int numberOfMagnet;
    scanf("%d", &numberOfMagnet);
    int arr[numberOfMagnet];
    int standard;
    int group = 1;
    for(int i = 0 ; i < numberOfMagnet ; i ++)
    {
        scanf("%d", &arr[i]);
    }
    standard = arr[0];
    for(int i = 1 ; i < numberOfMagnet ; i++ )
    {
        if(arr[i] != standard )
        {
            group ++;
            standard = arr[i];
        }

    }
    printf("%d", group);
}
