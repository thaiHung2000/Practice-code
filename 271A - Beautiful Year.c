#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    number++;
    int number1 = number / 1000;
    int number2 = ( number % 1000 ) / 100;
    int number3 = (number % 100) / 10;
    int number4 = (number % 10 ) /1 ;
    int numberNew[4] = {number1,  number2, number3, number4};
    int flag = 1;
    

    
    while (flag == 1 )
    {
        numberNew[0] = number / 1000;
        numberNew[1] = ( number % 1000 ) / 100;
        numberNew[2] = (number % 100) / 10;
        numberNew[3] = (number % 10 ) /1 ;
        
        for(int i = 0 ; i < 3; i ++ )
        {
                for( int j = i + 1; j < 4 ; j ++)
                {
                    flag = 0;
                    if(numberNew[i] == numberNew[j])
                    {
                        number++;
                        flag = 1;
                        break;
                    }
                }
                if( flag == 1)
                {
                    break;
                }
        }
    }
    

    

    

    printf("%d", number);
}
