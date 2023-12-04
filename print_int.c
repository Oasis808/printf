#include"main.h"
#include<stdio.h>
#include<stdarg.h>
int print_int(va_list betty)
{
int num, i, last, digit, exp, n;

n = va_arg(betty, int);
last = n % 10;
exp = 1;
i = 1;
n = n / 10;
num = n;
if (last < 0)
{
_putchar('-');
num = -num;
n = -n;
last = -last;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
exp = exp * 10;
num = num / 10;
}

num = n;
while (exp > 0)
{
digit = num / exp;
_putchar(digit + '0');
num = num - (digit * exp);
exp = exp / 10;
i++;
}
}
_putchar(last + '0');
return (i);
}
