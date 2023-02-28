/*
** EPITECH PROJECT, 2023
** my_malloc
** File description:
** my_malloc
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct Ptr {
    void *ptr;
    size_t nb;
    struct Ptr* next;
} ptr_t;

static ptr_t *get_malloc_list() {
    static ptr_t *ptr_list = NULL;
    if (!ptr_list) {
        ptr_list = malloc(sizeof(ptr_t));
        ptr_list->ptr = NULL;
        ptr_list->next = NULL;
    }
    return ptr_list;
}

void *my_malloc(size_t size)
{
    ptr_t *list = get_malloc_list();
    static size_t i = 0;
    while (list->next != NULL) {
        list = list->next;
    }
    list->next = malloc(sizeof(ptr_t));
    ptr_t *next_elem = list->next;
    next_elem->ptr = malloc(sizeof(size));
    next_elem->nb = i;
    i++;
    next_elem->next = NULL;
    return next_elem->ptr;
}

void my_free(void *ptr)
{
    ptr_t *list = get_malloc_list();
    ptr_t *prev = NULL;
    while (list != NULL && list->ptr != ptr) {
        prev = list;
        list = list->next;
    }
    if (list == NULL) {
        printf("Error, this pointer does not exist!\n");
    } else {
        if (list->ptr != NULL)
            free(list->ptr);
        list->ptr = NULL;
        prev->next = list->next;
        free(list);
    }
}

void free_all()
{
    ptr_t *list = get_malloc_list();
    while (list->next) {
        ptr_t *current = list;
        list = list->next;
        if (current->ptr != NULL)
            free(current->ptr);
        free(current);
    }
    free(list->ptr);
    free(list);
}
