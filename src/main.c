/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my.h"

void print_h(void)
{
    my_putstr("Hello, welcome to Explode Ship ! The game is simple: ");
    my_putchar('\n');
    my_putstr("click on the ships using your mouse ");
    my_putstr("to score some points ! Good luck !");
    my_putchar('\n');
}

void init(vect_t *vector, utils_t *utils)
{
    init_clock(utils);
    init_texture(utils);
    init_vect(vector);
    set_rect(utils);
    set_bird(vector, utils);
    set_background(vector, utils);
    set_text(vector, utils);
    sfSprite_setTextureRect(utils->sprite, utils->rect);
}

void movement(utils_t *utils, vect_t *vector)
{
    if (sfClock_getElapsedTime(utils->movement).microseconds > 1) {
        sprite_move(vector, utils);
        sfClock_restart(utils->movement);
    }
    if (sfClock_getElapsedTime(utils->animate).microseconds > 100000) {
        modify_rect(utils);
        sfClock_restart(utils->animate);
    }
}

void event(utils_t *utils, vect_t *vector, sfRenderWindow *window)
{
    if (utils->event.type == sfEvtClosed ||
    utils->event.type == sfEvtKeyPressed \
    && sfKeyboard_isKeyPressed(sfKeyEscape)) {
        sfRenderWindow_close(window);
        sfClock_destroy(utils->movement);
        sfClock_destroy(utils->animate);
    }
    if (utils->event.type == sfEvtMouseButtonPressed) {
        check_hitbox(vector, window, utils->sprite);
    }
}

void launch_game()
{
    sfRenderWindow *window = create_renderwindow(1920, 1080, 32, "Hunter");
    vect_t vector;
    utils_t utils;
    init(&vector, &utils);
    sfRenderWindow_setFramerateLimit((sfRenderWindow *) window, 120);
    while (sfRenderWindow_isOpen(window)) {
        movement(&utils, &vector);
    while (sfRenderWindow_pollEvent(window, &utils.event)) {
        event(&utils, &vector, window);
    }
    sfRenderWindow_clear(window, sfBlack);
    sfSprite_setTextureRect(utils.sprite, utils.rect);
    sfRenderWindow_drawSprite(window, utils.background, NULL);
    sfRenderWindow_drawSprite(window, utils.sprite, NULL);
    sfRenderWindow_drawText(window, utils.score, NULL);
    sfRenderWindow_display(window);
    }
}

int main(int ac, char **av)
{
    if (ac == 2 && (av[1][0] == 'h' || av[1][1] == 'h')) {
        print_h();
    }
    else
        launch_game();
    return 0;
}