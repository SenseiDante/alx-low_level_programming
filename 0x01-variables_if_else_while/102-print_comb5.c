#include <stdio.h>

/**
 * main - Prints possible combinations of two two digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n, m;

        for (n = 0; n < 100; n++)
        {
                for (m = 0; m < 100; m++)
                {
                        if (n <m)
                        {       
				puchar((n / 10) + 48);
				puchar((n / 10) + 48);
                                puchar(' ');
				puchar((m / 10) + 48);
				puchar((m / 10) + 48);
                                if (n != 98 || m ! = 99)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                }
        }
        putchar('\n');
        return (0);
}
