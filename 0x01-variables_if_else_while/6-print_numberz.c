#include <stdio.h>
/**
 * main - main function
 * Return: 0 Success
 */
int main(void)
{
	int n = 97, m = 122;

	while (m >= n)
	{
		putchar(m);
		m--;
	}
	putchar('\n');
	return (0);
}
