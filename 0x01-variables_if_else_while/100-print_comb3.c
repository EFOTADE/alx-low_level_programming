#include <stdio.h>

/**
 * main - prints allpossible different combination of all digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 8; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            putchar((i + '0'));

            if ((i != 1) || (j != 0))
            {
                putchar((j + '0'));

                if (i < 8)
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
