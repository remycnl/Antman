/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-antman-philemon.linossier
** File description:
** my_creates
*/

#include "../includes/antman.h"

void free_data (char **data, int nb_lines)
{
    for (int i = 0; i < nb_lines; i++) {
        free(data[i]);
    }
    free(data);
}

void create_data_tab (int file_size, const char *buffer, char **data)
{
    int row = 0, col = 0;
    for (int i = 0; i < file_size; i++) {
        char c = buffer[i];
        if (c == '\n') {
            data[row][col] = c;
            data[row][col + 1] = '\0';
            row++;
            col = 0;
        } else {
            data[row][col] = c;
            col++;
        }
    }
}

int create_tab (int file_size, const char *buffer)
{
    int nb_lines = 0;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n') {
            nb_lines++;
        }
    }
    char **data = (char **) malloc((nb_lines + 1) * sizeof(char *));
    for (int i = 0; i < nb_lines; i++) {
        if (i < 6) {
            data[i] = (char*) malloc(1000 * sizeof(char));
        } else {
            data[i] = (char*) malloc(6 * sizeof(char));
        }
    }
    data[nb_lines] = NULL;
    create_data_tab(file_size, buffer, data);
    compress_ppm(data, nb_lines);
    free_data(data, nb_lines);
    return (0);
}
