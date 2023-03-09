/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday06-remy.canal
** File description:
** my_strcpy
*/

#include "../includes/antman.h"

char *my_strcpy (char *dest, char const *src)
{
    int i;
    i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *int_to_string (int run)
{
    int temp = run;
    int count = 0;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    char *str = (char*) malloc((count + 1) * sizeof(char));
    str[count] = '\0';

    for (int i = count - 1; i >= 0; i--) {
        str[i] = (run % 10) + '0';
        run /= 10;
    }
    return str;
}
