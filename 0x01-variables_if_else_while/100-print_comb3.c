#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{ 
        int a;
        int b;
        for (a=0; a<10; a++)
        {
                for (b=a; b<10; b++)
                {
                        if(a!=b)
                        {
                                if ( a == 8 && b == 9 )
                                {
                                         printf("%d%d ", a,b);
                                 }
                                else    
                                {
                                         printf("%d%d, ", a,b);
                                }
                        }
                         else
                        {
                }
                }
        }

        return (0);
}
