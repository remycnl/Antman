/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-antman-philemon.linossier
** File description:
** compress_ppm
*/

#include "../includes/antman.h"

void create_compress_data_tab (char **compress_data, int nb_lines)
{
    for (int i = 0; i < nb_lines; i++) {
        if (i < 6) {
            compress_data[i] = (char*) malloc(1000 * sizeof(char));
        } else {
            compress_data[i] = (char*) malloc(6 * sizeof(char));
        }
    }
}

void compress_ppm (char **data, int nb_lines)
{
    char **compress_data = (char **) malloc((nb_lines + 1) * sizeof(char *));
    create_compress_data_tab(compress_data, nb_lines);
    compress_data[nb_lines] = NULL;
    into_compress_data(compress_data, data, nb_lines);
    printf_compress_data(compress_data, nb_lines);
    free_compress_data(compress_data, nb_lines);
}

void antman_ppm (const char *filepath)
{
    read_file(filepath);
}
