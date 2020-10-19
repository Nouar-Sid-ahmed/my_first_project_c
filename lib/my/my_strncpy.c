/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** my_strncpy
** File description:
**      my_strncpy
*/

char *my_strncpy(char *dest, const char *src, int n)
{
    int m = 0;
    int c = 0;
    while (m != n) {
        *dest= *src;
        dest++;
        src++;
        m++;
        c++;
    }
    *dest='\0';
    dest-= c;
    return (dest);
}
