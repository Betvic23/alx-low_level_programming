#ifndef LISTS_H
#define LISTS_H

/**
 * struct my_list - singly linked list
 * @len: length of string
 * @str: string
 * @next: points to next node
 */
typedef struct my_list
{
	char *str;
	unsigned int len;
	struct my_list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
