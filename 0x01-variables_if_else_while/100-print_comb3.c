#include <stdio.h>
/**
 * main - main function
 * Return: 0 Success
 */
int main(void)
{
	int n = 0, m = 8, n1 = 1, m2 = 9;

	while (n <= m)
	{
		n1 = n + 1;

		while (n1 <= m2)
		{
			putchar(n + '0');
			putchar(n1 + '0');
			n1++;

			if (n != m)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}

