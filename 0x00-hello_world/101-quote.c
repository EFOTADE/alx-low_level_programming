#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Alway 1 (Success)
 */
int main(void)
{
const char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t len = strlen(m);
write(1, m, len);
return (1);
}

