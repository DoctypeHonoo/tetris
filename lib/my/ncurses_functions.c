/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-tetris-guillaume.lemoine
** File description:
** ncurses_functions
*/

#include "../../include/my.h"

void init(void)
{
    initscr();
    start_color();
    keypad(stdscr, true);
    init_pair(1, COLOR_RED, COLOR_BLACK);
}

void exit_matrix(int returned)
{
    endwin();
    nocbreak();
    exit(returned);
}

void matrix_getchr(void)
{
    int key = getch();
    if (key == 27)
		exit_matrix(0);
}

void my_tetris(debug_t *debugged)
{
    char **map = malloc(sizeof(char *) * (debugged->ms.ms_row + 1));
    /*struct timespec start;
    struct timespec end;*/
    int position_x = (COLS / 2) - (debugged->ms.ms_col / 2) - 1;
    int position_y = (LINES / 2) - (debugged->ms.ms_row / 2) - 1;

    cbreak();
    timeout(1000);
    //start.tv_sec = 0;
    for (int i = 0; i != debugged->ms.ms_row; i++)
        map[i] = malloc(sizeof(char) * (debugged->ms.ms_col + 1));
    map[debugged->ms.ms_row] = NULL;
    while (42) {
        //start.tv_nsec = 10000;

        attron(COLOR_PAIR(1));
        mvprintw(position_y, position_x, "%s");
        attroff(COLOR_PAIR(1));
        refresh();
        /*if (nanosleep(&start, &end) < 0)
			exit_matrix(0);*/
    }
}
