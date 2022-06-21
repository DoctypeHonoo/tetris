/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-tetris-guillaume.lemoine
** File description:
** display_usage
*/

#include "../../include/my.h"

void display_usage(void)
{
    my_printf("Usage: ./tetris [options]\nOptions:\n");
    my_printf("  --help               Display this help\n");
    my_printf("  -L --level={num}     Start Tetris at level num (def: 1)\n");
    my_printf("  -l --key-left={k}    Move the tetrimino LEFT");
    my_printf(" using the K key (def: left arrow)\n");
    my_printf("  -l --key-right={k}   Move the tetrimino RIGHT");
    my_printf(" using the K key (def: right arrow)\n");
    my_printf("  -t --key-turn={K}    TURN the tetrimino clockwise 90d");
    my_printf(" using the K key (def: top arrow)\n");
    my_printf("  -d --key-drop={K}    DROP the tetrimino using the K ");
    my_printf("key (def: down arrow)\n");
    my_printf("  -q --key-quit={K}    QUIT the game using the K key ");
    my_printf("(def: ‘q’ key)\n");
    my_printf("  -p --key-pause={K}   PAUSE/RESTART the game using the K key ");
    my_printf("(def: space bar)\n");
    my_printf("  --map-size={row,col} Set the numbers of rows and columns");
    my_printf(" of the map (def: 20,10)\n");
    my_printf("  -w --without-next    Hide next tetrimino (def: false)\n");
    my_printf("  -D --debug           Debug mode (def: false)\n");
    exit(0);
}
