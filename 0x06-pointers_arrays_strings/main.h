#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * main - prototypes
 * @dest: Destination
 * @src: Source
 * @_strcat: catenate string
 * @_strcpy: string copy
 * @s1: the first string
 * @s2: the second srtring
 */

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

#endif /* MAIN_H */
