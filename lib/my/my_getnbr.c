/*
** ETNA PROJECT, 29/09/2020 by nouar_a
** my_getnbr.c
** File description:
**      one signed
*/

#include "my.h"
int my_getnbr(const char *str)
{
    int s = 1;
    long int n = 0;
    int f = 0;
    if ( *str == 45 || *str == 43 || ( *str <= 57 && *str >= 48 ) ) {
        while (*str == 45 || *str == 43) {
            if ( *str == 45)
                s = -s;
            str++;
        }
        while ( *str <= 57 && *str >= 48 ){
            n = n * 10 + ( *str - 48 );
            str++;
        }
    }else
       return 0;
    n = s * n;
    if (n < -2147483648 || n > 2147483647)
        n = 0;
    f = n;
    return f;
}
