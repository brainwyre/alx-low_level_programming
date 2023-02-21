#include <stdio.h>
/**
 * main - main function
 * Description: 'pint alphabet uppercase and lowercase'
 * Return: 0 Success
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (m <= 90)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
