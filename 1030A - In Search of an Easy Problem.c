#include <stdio.h>
int main ()
{
	int numberOfPerson;
	scanf("%d", &numberOfPerson);
	int opinion;
	int count = 0;
	for( int i = 0; i < numberOfPerson ; i ++ )
	{
		scanf("%d", &opinion );
		if( opinion == 1 )
		{
			count = 1;
			break;

		}
	}
	if( count == 0 )
	{
		printf("easy");
	}
	else
	{
		printf("hard");
	}

}