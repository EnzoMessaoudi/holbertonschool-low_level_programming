#include "main.h"

/**
* print_chessboard - Function that print a chessboard
* @a: Character tested
*
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			if (a[i][j] == ' ')
			{
				_putchar('\n');
				break;
			}
			else if (j == 8)
				_putchar('\n');
			else
			{
			_putchar(a[i][j]);
			}
		}
	}
}
