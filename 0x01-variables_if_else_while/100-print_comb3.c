#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
  int a, b;
  for (a=0; a<10; a++)
  {
      for (b=a; b<10; b++)
      {
          if (a!=b)
          {
              printf("%d%d, ", a,b);
          }
          else
          {
              printf("", a,b);
          }
	}
  }

    return (0);
}
