/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** function that concatenates two strings
*/

#include "../../include/my.h"
#include "stdlib.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int l = 0;
    char *new = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));

    while (dest[i] != '\0') {
        new[i] = dest[i];
        i++;
    }
    while (src[l] != '\0') {
        new[i] = src[l];
        l++;
        i++;
    }
    new[i] = '\0';
    return new;
}
