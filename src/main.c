/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my.h"

void print_options(void)
{
    my_putstr("Hello, welcome to Catch Rio ! The game is simple: ");
    my_putchar('\n');
    my_putstr("click on the birds using [LEFT_CLICK] ");
    my_putstr("to score some points ! Good luck !");
}

void do_loop(vect_t *vector, utils_t *utils, sfRenderWindow *window)
{
    while (sfRenderWindow_isOpen(window)) {
    if (sfClock_getElapsedTime(utils->animate).microseconds > 100000) {
        modify_rect(utils);
        sfClock_restart(utils->animate);
    }
    while (sfRenderWindow_pollEvent(window, &utils->event)) {
        if (&utils->event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
            sfClock_destroy(utils->movement);
        }
    }
    set_text(vector, utils);
    sfRenderWindow_clear(window, sfBlack);
    sfSprite_setTextureRect(utils->sprite, utils->rect);
    sfRenderWindow_drawSprite(window, utils->background, NULL);
    sfRenderWindow_drawSprite(window, utils->sprite, NULL);
    sfRenderWindow_display(window);
    }
}

void display_game()
{
    sfRenderWindow *window = create_renderwindow(1920, 1080, 32, "Hunter");
    vect_t vector;
    utils_t utils;
    init_clock(&utils);
    init_vect(&vector);
    set_rect(&utils);
    set_background(&vector, &utils);
    sfSprite_setTextureRect(utils.sprite, utils.rect);
    sfRenderWindow_setFramerateLimit(window, 120);
}

int main(int ac, char **av)
{
    if (ac == 2 && (av[1][0] == 'h' || av[1][1] == 'h')) {
        print_options();
    }
    return 0;
}