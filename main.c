/*
** EPITECH PROJECT, 2022
** B-PSU-200-MPL-2-1-tetris-guillaume.lemoine
** File description:
** main
*/

#include "./include/my.h"

void handle_cmds(char c, debug_t *debugged)
{
    switch (c) {
        case 'L': debugged->L = atoi(optarg); break;
        case 'l': debugged->l = atoi(optarg); break;
        case 'r': debugged->r = atoi(optarg); break;
        case 't': debugged->t = atoi(optarg); break;
        case 'd': debugged->d = atoi(optarg); break;
        case 'q': debugged->q = atoi(optarg); break;
        case 'p': debugged->p = atoi(optarg); break;
        case 'M': debugged->ms = parse_map_size(optarg); break;
        case 'D': debugged->D = 1; break;
        case 'w': debugged->wn = 1; break;
        default:
            break;
    }
}

void print_debug(debug_t *debugged)
{
    my_printf("Key left: %s (%i)\n", keyname(debugged->l), debugged->l);
    my_printf("Key right: %s (%i)\n", keyname(debugged->r), debugged->r);
    my_printf("key turn: %s (%i)\n", keyname(debugged->t), debugged->t);
    my_printf("key drop: %s (%i)\n", keyname(debugged->d), debugged->d);
    my_printf("key quit: %s (%i)\n", keyname(debugged->q), debugged->q);
    my_printf("key pause: %s (%i)\n", keyname(debugged->p), debugged->p);
    if (debugged->wn != 1)
        my_printf("Next: Yes\n");
    else
        my_printf("Next: No\n");
    my_printf("Level: %i\n", debugged->L);
    my_printf("Size: %i*%i\n", debugged->ms.ms_row, debugged->ms.ms_col);
    my_printf("\nNumber of tetriminos: %i\n", debugged->tetriminos);
    parse_tetri();
}

int debug(int argc, char **argv, const char *options, debug_t *debugged)
{
    char c;

    while ((c = getopt_long(argc, argv, options, longopts, NULL)) != -1) {
        if (c == 'M' && is_in(optarg, '.') == 1)
            return 84;
        if (c == 'H')
            display_usage();
        else
            handle_cmds(c, debugged);
    }
    if (optind < argc)
        return 84;
    if (debugged->D == 1)
        print_debug(debugged);
    else
        exit(0);
    return 0;
}

void initialize(debug_t *debugged)
{
    debugged->L = 1;
    debugged->l = 260;
    debugged->r = 261;
    debugged->t = 259;
    debugged->d = 258;
    debugged->q = 113;
    debugged->p = 112;
    debugged->ms = (map_size){20, 10};
    debugged->D = 0;
    debugged->wn = 0;
    debugged->tetriminos = 0;
}

int main(int argc, char **argv)
{
    char options[] = "L:l:r:t:d:q:p:wD";
    debug_t debugged;

    initialize(&debugged);
    if ((debugged.tetriminos = parse_tetriminos()) == 84)
        return 84;
    if (argc > 1)
        return debug(argc, argv, options, &debugged);
    return 0;
}
