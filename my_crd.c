/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** my_crd 
** File description:
**      main
*/

#include "my.h"
#include <stdlib.h>
#include <unistd.h>

int main() {
  linked_list_t *t = NULL;
  char *chaine ;
  chaine = my_readline();
  while (chaine) {
      t = how_to_show(t, chaine);
      chaine = my_readline();
  }
  free(t);
  return 0;
}
