/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-antman-philemon.linossier
** File description:
** antman
*/

#ifndef ANTMAN_H_
    #define ANTMAN_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <sys/types.h>

    int main(int ac, char **av);
    void compress_ppm (char **data, int nb_lines);
    void antman_ppm (const char *filepath);
    int read_file (const char *filepath);
    int create_tab (int bytes_read, const char *buffer);
    void create_data_tab (int bytes_read, const char *buffer, char **data);
    char *my_strcpy (char *dest, char const *src);
    void manage_nbr (char **av);
    char *int_to_string (int run);
    int errors (const char *filepath, int fd);
    void free_data (char **data, int nb_lines);
    void free_compress_data (char **compress_data, int nb_lines);
    void create_compress_data_tab (char **compress_data, int nb_lines);
    void printf_compress_data (char **compress_data, int nb_lines);
    void if_oc_high (char **compress_data, char **data, int x, int x2);
    void into_compress_data (char **compress_data, char **data, int nb_lines);
    void my_putchar(char c);
    int my_putstr (char const *str);

#endif /* !ANTMAN_H_ */
