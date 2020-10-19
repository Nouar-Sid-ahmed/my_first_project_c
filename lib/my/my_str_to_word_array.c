/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** my_str_to_word_array
** File description:
**      my_str_to_word_array
*/

#include "my.h"

char   **my_str_to_word_array(const char *str)
{
    char **L;
    L=malloc((cmp_mots(str) + 1)*sizeof(char*));
    int  c = 0;
    int  i = 0;
    while (*str != '\0') {
        if (is_alpha_num(str) == 1){
            while (is_alpha_num(str) == 1) {
                str++;
                c++;
            }
            L[i]=malloc(sizeof(char)*(c + 1));
            str-=c;
            my_strncpy(L[i],str,c);
            str+=c;
            c = 0;
            i++;
        }
        else
            str++;
    }
    L[i]=0;
    return L;
}
