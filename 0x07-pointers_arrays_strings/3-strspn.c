#include "main.h"

/**
 * _strspn -  search for the first occurance
 * @s: pointer to the src
 * @accept: the character
 * Return: a pointer to the the dest
 */

unsigned int _strspn(char *s, char *accept)
{
     int i;
     int j;
     int on;
     unsigned int len;

     i = 0;
     on = 0;
     j = 0;
     len = 0;
     while (*(s + i))
     {
          on = 0;
          j = 0 ;
          while (*(accept + j))
          {
               if(*(s + i) == *(accept + j))
               {
                    on = 1;
                    break;
               } 
               j++;
               // printf("!!!!%d\n",j);
          }
          if (!on)
               return (len);
          len++;
          i++;
     }
     return (len);
}
int main()
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
/*unsigned int _strspn(char *s, char *accept) {
    unsigned int i, j;
    unsigned int len = 0;
    int found;

    for (i = 0; s[i] != '\0'; i++) {
        found = 0;
        for (j = 0; accept[j] != '\0'; j++) {
            if (s[i] == accept[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            return len;
        }
        len++;
    }
    return len;
}*/