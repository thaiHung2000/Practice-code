#include <stdio.h>
int main()
{
	int n, k;
	scanf("%d", &n);
	scanf("%d", &k);
	int result = n;

	for(int i = 0; i < k ; i++)
	{
		if ( result % 10 == 0 )
		{
			result /= 10;
		}
		else
		{
			result -= 1;
		}
	}

	printf("%d\n", result);
}