#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);


#endif

// #include <stdio.h>

// int is_lower(char c)
// {
//     return (c >= 'a' && c <= 'z');
// }

// char *cap_string(char *str)
// {
//     int i = 0;
//     int j;

//     if (is_lower(str[i]))
//         str[i] -= 32;
//     char *spe = ",;.!?\"(){}\t\n "; 
//     while (str[i])
//     {
//         for (j = 0; spe[j] != '\0'; j++)
//         {
//             if (str[i] == spe[j])
//             {
//                 if (is_lower(str[i + 1]))
//                     str[i + 1] -= 32;
//             }
//         }
//         i++;
//     }
//     return (str);
// }

// int main(void)
// {
//     char str[] = "expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
//     char *ptr;

//     ptr = cap_string(str);
//     printf("%s", ptr);
//     printf("%s", str);
//     return (0);
// }