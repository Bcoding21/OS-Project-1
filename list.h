#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


typedef struct Node {
	char* string;
	struct Node* next;
}Node;

typedef struct list {
	struct Node* head;
}list;

/* Allocates and initializes a new list */
list* create_list();

int add_to_list(list* ll, char* item);

char* remove_from_list(list* ll);

void print_list(list *ll);

void flush_list(list* ll);

void free_list(list *ll);
