#include"main.h"
int _puts(char *t)
{
int y = 0, count = 0;

for ( y = 0; t[y] != '\0'; y++)
{
_putchar(t[y]);	
count++;
}

return (count);
}
