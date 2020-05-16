#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d", &n);
    scanf("%d", &t);
    char numberOfStudentInQueue[n] ;
    scanf("\n");
    for(int i = 0 ; i < n ; i ++ )
    {
        scanf("%c", &numberOfStudentInQueue[i]);
    }
    
    for(int i = 0 ; i < t ; i ++ )
    {
        for (int j = 0 ; j < n ; j ++ )
        {
            if( j == n - 1)
            {
                break;
            }
            if( numberOfStudentInQueue[j] < numberOfStudentInQueue[j+1])
            {
                char temp = numberOfStudentInQueue[j];
                numberOfStudentInQueue[j] = numberOfStudentInQueue[j+1];
                numberOfStudentInQueue[j+1] = temp;
                j++; 
            }
            
        }
    }
    
    for(int i = 0 ; i < n ; i ++ )
    {
        printf("%c", numberOfStudentInQueue[i]);
    }
    printf("\n");
    
}

