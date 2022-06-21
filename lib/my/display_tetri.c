/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-tetris-guillaume.lemoine
** File description:
** display_tetri
*/

#include "../../include/my.h"

char *get_name(char *name)
{
    char *final;
    int i = 0;

    for (i = 0; name[i] != '.'; i++);
    final = malloc(sizeof(char) * (i + 1));
    for (i = 0; name[i] != '.'; i++)
        final[i] = name[i];
    final[i] = '\0';
    return final;
}

void write_info(char *name, char *patern, char *str)
{
    my_printf("Tetriminos '%s': ", name);
    if (check_tetriminos_2(str))
        my_printf("error\n");
    else {
        my_printf("size %c*%c, color %c", str[0], str[2], str[4]);
        my_printf("%s", patern);
    }
}

void display_info(char *str, char *file)
{
    int i;
    int j;
    char *patern;
    char *name = get_name(file);

    for (i = 0; str[i] != '\n'; i++);
    patern = malloc(my_strlen(str) - i + 1);
    for (j = 0; str[i] != '\0'; j++) {
        patern[j] = str[i];
        i++;
    }
    patern[j] = '\0';
    write_info(name, patern, str);
}

int parse_tetri(void)
{
    DIR * dirp;
    struct dirent * entry;
    int fd;
    struct stat sb;
    char *buffer;

    dirp = opendir("tetriminos");
    if (dirp == NULL)
        return 84;
    while ((entry = readdir(dirp)) != NULL) {
        if (entry->d_type == DT_REG) {
            fd = open(my_strcat("tetriminos/", entry->d_name), O_RDONLY);
            stat(my_strcat("tetriminos/", entry->d_name), &sb);
            buffer = malloc(sizeof(char) * (sb.st_size + 1));
            buffer[sb.st_size] = '\0';
            read(fd, buffer, sb.st_size);
            display_info(buffer, entry->d_name);
        }
    }
    closedir(dirp);

}
