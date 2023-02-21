#include <stdio.h>
/**
 * main - main function
 * Return: 0 Success
 */
int main(void)
{
	int n = 0, m = 7, n2 = 1, m2 = 8, n3 = 2, m3 = 9;

	while (n <= m)
	{
		n2 = n + 1;
		while (n2 <= m2)
		{
			n3 = n2 + 1;
			while (n3 <= m3)
			{
				putchar(n + '0');
				putchar(n2 + '0');
				putchar(n3 + '0');

				if (n != m)
				{
					putchar(',');
					putchar(' ');
				}
				n3++;
			}
			n2++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
