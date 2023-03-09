/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-antman-philemon.linossier
** File description:
** antman
*/

#include "../includes/antman.h"

int main(int ac, char **av)
{
    if (ac != 2) {
        my_putstr("incorrect number of arguments : 2 arguments expected\n");
        return (84);
    } else {
        antman_ppm(av[1]);
    }
    return (0);
}
