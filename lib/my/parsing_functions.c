/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-tetris-guillaume.lemoine
** File description:
** parsing_functions
*/

#include "../../include/my.h"

map_size parse_map_size(char *str)
{
    int i = 0;
    int k = 0;
    char *first, *sec;
    map_size map;
    for (; str[i] != ','; i++);
    first = malloc(sizeof(char) * (i + 1));
    for (int j = 0; j != i; j++)
        first[j] = str[j];
    first[i] = '\0';
    map.ms_row = atoi(first);
    i++;
    k = i;
    for (; str[k] != '\0'; k++);
    sec = malloc(sizeof(char) * (k - i + 1));
    k = 0;
    for (; str[i] != '\0'; i++, k++)
        sec[k] = str[i];
    sec[k] = '\0';
    map.ms_col = atoi(sec);
    return map;
}

int check_tetriminos_2(char *buffer)
{
    int lines = 0;

    if (buffer[0] < '0' || buffer[0] > '9')
        return 1;
    if (buffer[2] < '0' || buffer[2] > '9')
        return 1;
    if (buffer[4] < '0' || buffer[4] > '9')
        return 1;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n')
            lines++;
    }
    if (lines != (atoi(&buffer[2]) + 1))
        return 1;
    return 0;
}

int check_tetriminos(char *name)
{
    int fd = open(my_strcat("tetriminos/", name), O_RDONLY);
    struct stat sb;
    char *buffer;

    if (fd == -1)
        return 84;
    if (stat(my_strcat("tetriminos/", name), &sb) == -1)
        return 84;
    buffer = malloc(sizeof(char) * (sb.st_size + 1));
    buffer[sb.st_size] = '\0';
    if (read(fd, buffer, sb.st_size) == -1)
        return 84;
    return check_tetriminos_2(buffer);
}

int parse_tetriminos(void)
{
    int file_count = 0;
    int file_total = 0;
    DIR * dirp;
    struct dirent * entry;

    dirp = opendir("tetriminos");
    if (dirp == NULL)
        return 84;
    while ((entry = readdir(dirp)) != NULL) {
        if (entry->d_type == DT_REG) {
            file_count++;
            file_total++;
            if (check_tetriminos(entry->d_name))
                file_count--;
        }
    }
    closedir(dirp);
    if (file_count < 1)
        return 84;
    return file_total;
}
