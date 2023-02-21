#include <stdio.h>
/**
 * main - main function
 * Return: 0 Success
 */
int main(void)
{
	int n = 0, m = 9;

	while (n <= m)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
