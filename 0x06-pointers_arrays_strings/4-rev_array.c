#include "main.h"

/**
  * reverse_array - faunction name
  * @a: Function parameter
  * @n: Function parameter
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = y;
	}
}
