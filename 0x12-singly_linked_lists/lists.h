#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @length: length of string
 * @ptr: string
 * @next_node: points to next node
 */
typedef struct my_list
{
	char *str;
	unsigned int len;
	struct my_list *next;
} list_t;

size_t print_list(const list_t *h);

#endif
