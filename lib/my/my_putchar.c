/*
** ETNA PROJECT, 03/10/2020 by nouar_a
** my_putchar
** File description:
**      fack printf 
*/

#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c , 1);
}
