/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-antman-philemon.linossier
** File description:
** read_file
*/

#include "../includes/antman.h"

int errors (const char *filepath, int fd)
{
    if (filepath == NULL) {
        my_putstr("Filepath is empty.\n");
        return (84);
    }

    if (fd == -1) {
        my_putstr("Cannot open the file.\n");
        return (84);
    }
    return (0);
}

int check_file_size (int file_size, char *buffer, int fd)
{
    if (file_size == -1) {
        my_putstr("Cannot read the file.\n");
        close(fd);
        free(buffer);
        return (84);
    }
    return (0);
}

int  read_file (const char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int error = errors(filepath, fd);
    if (error == 84) {
        return (84);
    }

    struct stat buff;
    stat(filepath, &buff);
    int file_size = buff.st_size;

    char *buffer = malloc(file_size + 1);
    buffer[file_size] = '\0';
    read(fd, buffer, file_size);
    check_file_size(file_size, buffer, fd);
    create_tab(file_size, buffer);
    close(fd);
    free(buffer);
    return (0);
}
