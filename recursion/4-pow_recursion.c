#include "main.h"

/**
* _pow_recursion - Multiply x by y times
* @x: Character multiplied
* @y: times we multiply
* Return: Return the value of the function
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, y - 1)));
}
