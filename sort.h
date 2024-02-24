#ifndef _LISTINT_H_
#define _LISTINT_H_

typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *array, size_t size);

void print_list(const listint_t *list);

void print_array(const int *array, size_t size);

#endif