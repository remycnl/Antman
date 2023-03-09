/*
** EPITECH PROJECT, 2022
** B-CPE-100-LYN-1-1-cpoolday04-remy.canal
** File description:
** my_putstr.c
*/

#include "../includes/antman.h"

int my_putstr (char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
