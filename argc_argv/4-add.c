#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Main function
* @argc: Charatcer tested
* @argv: Character tested
* Return: Return 1 if there is an error, 0 if the code doesn't work
*/

int main(int argc, char *argv[])
{
	int i, j;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
