#include <stdio.h>
/**
 * main - main function
 * Description: 'pint alphabet uppercase and lowercase'
 * Return: 0 Success
 */
int main(void)
{
	int n = 97;
	int m = 122;

	while (n <= m)
	{
		putchar(n);
		n++;
	}
	n = 65;
	m = 90;

	while (n <= m)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
