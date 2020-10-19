/*
** ETNA PROJECT, 28/09/2020 by nouar_a
** my_putnbr
** File description:
**      my_putnbr.c
*/

#include "my.h"
void my_putchar(char c);

void my_putnbr(int n)
{
    unsigned int m = 0;
    
    if ( n < 0 )
    {
        m = -n;
        my_putchar('-');
    }else
    {
        m = n;
    }
    if ( m >= 10 )
    {
        my_putnbr ( m / 10 );
        my_putnbr ( m % 10 );
    }else
    {
        my_putchar ( m + 48 );
    }
}
