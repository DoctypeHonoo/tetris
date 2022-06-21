/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
** File description:
** my
*/

typedef struct map_size_s {
    int ms_row;
    int ms_col;
} map_size;

typedef struct debug_s {
    int L;
    int l;
    int r;
    int t;
    int d;
    int q;
    int p;
    map_size ms;
    int D;
    int wn;
    int tetriminos;
} debug_t;

#ifndef MY_H_
    #define MY_H_
    #define UNUSED() __attribute__((unused))
    #include <ncurses.h>
    #include <curses.h>
    #include <dirent.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <getopt.h>
    #include <stdlib.h>

static const struct option longopts[] = {
    {"help", no_argument, 0, 'H'},
    {"level", required_argument, 0, 'L'},
    {"key-left", required_argument, 0, 'l'},
    {"key-right", required_argument, 0, 'r'},
    {"hey-turn", required_argument, 0, 't'},
    {"key-drop", required_argument, 0, 'd'},
    {"key-quit", required_argument, 0, 'q'},
    {"key-pause", required_argument, 0, 'p'},
    {"map-size", required_argument, 0, 'M'},
    {"without-next", no_argument, 0, 'w'},
    {"debug", no_argument, 0, 'D'},
    {0, 0, 0, 0}
};

int my_printf(const char *format, ...);
map_size parse_map_size(char *str);
int check_tetriminos_2(char *buffer);
void my_tetris(debug_t *debugged);
int check_tetriminos(char *name);
void init(void);
void exit_matrix(int returned);
int is_in(const char *str, char ch);
void display_usage(void);
void print_debug(debug_t *debugged);
char *my_strcat(char *dest, char const *src);
int parse_tetriminos(void);
int parse_tetri(void);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_strlen(char const *str);

#endif
