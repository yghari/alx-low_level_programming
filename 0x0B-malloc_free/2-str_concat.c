#include "main.h"

/**
 * str_concat - creating an array contans another str
 * @s1: second str
 * @s2: first str
 *
 * Return: allocated str that contains both.
 */

char *str_concat(char *s1, char *s2)
{
  unsigned int i;
  unsigned int j;
  char *str;

  if (s1 == NULL || s2 == NULL)
    return (NULL);
  i = strlen(s1);
  j = strlen(s2);
  str = (char *)malloc(sizeof(char) * (i + j + 1));
  if (!str)
    return (NULL);
  i = 0;
  while (s1[i])
  {
    str[i] = s1[i];
    i++;
  }
  j = 0;
  while (s2[j])
  {
    str[i] = s2[j];
    i++;
    j++;
  }
  str[i + 1] = '\0';
  return (str);
}