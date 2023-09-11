#include <stdio.h>

/**
 * main - Prints possible combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n, m;

        for (n = 48; n < 56; n++)
        {
		for (m = 49; m < 57; m++)
		{
			if (m > n)	
			{	puchar(n);
				puchar(m);
                		if (n != 56 || m ! = 57)
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

