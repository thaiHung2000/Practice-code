#include <stdio.h>

int main()
{
    long long int number;
    scanf("%lld", &number);
    long long int total = 0;
    if(( number % 2 ) == 0 )
    {
        total = number / 2;
    }
    else
    {
        total = (number - 1) / 2 - number ;
    }
    printf("%lld", total);

}


