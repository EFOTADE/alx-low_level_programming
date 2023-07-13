#include<stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
        char a;
        int b;
        long int c;
        long long int d;
        float e;

        printf("Size of char: %ld bytes(s)\n", (unsigned long)sizeof(a));
        printf("Size of int: %ld bytes(s)\n", (unsigned long)sizeof(b));
        printf("Size of long int: %ld bytes (s)\n", (unsigned long)sizeof(c));
        printf("Size of long long int: %ld bytes(s)\n", (unsigned long)sizeof(d));
        printf("Size of float: %ld bytes(s)\n", (unsigned long)sizeof(e));
        return (0);
}
