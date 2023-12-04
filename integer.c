#include"main.h"
void integer(int num)
{
int a;

if(num == 0)
{
return;
}
a = num/10;
integer(a);
_putchar(num % 10 + '0');

return;
}
