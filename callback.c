#include"main.h"
int callback(int num)
{
int count;

count = 0;
if(num == 0)
{
return (0);
}
if (num < 0)
{
_putchar('-');
num = -num;
count ++;
}
if ( num >= 10)
{
count += callback(num /10);
}
_putchar((num % 10)+ '0');
count++;

return(count);
}
