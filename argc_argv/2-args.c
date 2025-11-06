#include <stdio.h>

/**
* main - Function that prints the content of argv
* @argc: Character tested
* @argv: Character tested
* Return: Return 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
