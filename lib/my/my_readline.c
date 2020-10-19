/*
** This function allows you to read a line of less than 50 characters from the standard input.
** The function does not take any parameter and returns an allocated string, dont forget to free().
*/

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *my_readline(void)
{
  size_t n = 0;
  char *ret = NULL;
  ssize_t result = getline(&ret, &n, stdin);

  if (result <= 0) {
    free(ret);
    return NULL;
  }
  if (ret[result - 1] == '\n') {
    ret[result - 1] = '\0';
  }
  return ret;
}
