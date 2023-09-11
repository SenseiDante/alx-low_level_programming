#include <stdio.h>

/**
 * main - Prints possible combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n , m , l;

        for (n = 48; n < 56; n++)
        {
                for (m = 49; m < 57; m++)
                {
			for (l = 50; l < 58; l++)
			{	
				if (l > m && m > n)
				{
					puchar(n);
					puchar(m);
					puchar(l);
                                	if (n != 55 || m ! = 56)
                                	{
                                        	putchar(',');
                                        	putchar(' ');
                                	}	
				}                                       
                	}
        	}
        
	}
	putchar('\n');
        return (0);
}

