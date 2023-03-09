/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-antman-philemon.linossier
** File description:
** compress_data
*/

#include "../includes/antman.h"

void free_compress_data (char **compress_data, int nb_lines)
{
    for (int i = 0; i < nb_lines; i++) {
        free(compress_data[i]);
    }
    free(compress_data);
}

void printf_compress_data (char **compress_data, int nb_lines)
{
    for (int i = 0; i < nb_lines; i++) {
        my_putstr(compress_data[i]);
    }
}

void if_oc_high (char **compress_data, char **data, int x, int x2)
{
    x2++;
    my_strcpy(compress_data[x2], "\n");
    x2++;
    my_strcpy(compress_data[x2], data[x]);

}

void into_compress_data (char **compress_data, char **data, int nb_lines)
{
    int x = 0, x2 = 0;
    while (x < nb_lines) {
        int run = 1;
        while (x + run < nb_lines && data[x][0] == data[x + run][0]) {
            run ++;
        }
        if (run > 2) {
            char *run_str = int_to_string(run);
            my_strcpy(compress_data[x2], run_str);
            if_oc_high(compress_data, data, x, x2);
            x += run;
            free(run_str);
        } else {
            my_strcpy(compress_data[x2], data[x]);
            x2++;
            x++;
        }
    }
}
