#include <stdio.h>
int main()
{
	int x;
	int moves = 0;
	scanf("%d", &x);
	while ( x != 0 )
	{
		if ( x >= 5 ) 
		{
			x -= 5;
			moves++ ;
		}
		switch (x)
		{
			case 4:
			{
				x -= 4;
				moves++;
				break;
			}
			case 3:
			{
				x -= 3;
				moves++;
				break;
			}
			case 2:
			{
				x -= 2;
				moves++;
				break;
			}
			case 1:
			{
				x -= 1;
				moves++;
				break;
			}

		}

	}
	printf("%d\n", moves);

}