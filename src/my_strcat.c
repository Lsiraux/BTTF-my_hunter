/*
** EPITECH PROJECT, 2021
** B-MUL-100-LYN-1-1-myhunter-gregoire1.biganzoli
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char const *src1, char const *src)
{
    int dest_size = my_strlen(src1);
    int i = 0;
    int j = 0;
    char *dest = malloc(sizeof(char) * (my_strlen(src1) + my_strlen(src) + 1));

    for (; src1[i] != '\0'; i++)
        dest[i] = src1[i];
    for (; src[j] != '\0'; i++, j++)
        dest[i] = src[j];
    dest[i] = '\0';

    return (dest);
}