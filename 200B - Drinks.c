#include <stdio.h>
int main()
{
    int numberOfDrinks;
    scanf("%d", &numberOfDrinks);
    int all;
    double total = 0;
    for(int i = 0;i < numberOfDrinks ; i++ )
    {
        scanf("%d", &all);
        total += all;
    }
    printf("%f", total / numberOfDrinks);
}
