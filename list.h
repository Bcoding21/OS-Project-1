#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

struct Node {
	char* str;
	struct Node* next;
};


/* Allocates and initializes a new list */
extern struct Node* create_list();


/* Adds item to end of the list. This function allocates a
* new buffer and copies the string from item (use malloc,
* strlen, and strncpy; or try strdup).
* Returns 0 if successful, non-zero otherwise. */
extern int add_to_list(struct Node*, char*);

/* Removes the string from the front of the list and
* returns a pointer to it. The caller is expected to free
* the string returned when finished with it. */
extern char* remove_from_list(struct Node*);

/* Prints every string in the list, with a new line
* character at the end of each string */
extern void print_list(struct Node*);

/* Flushes (clears) the entire list and re-initializes the
* list. The passed pointer ll should still point to a
* valid, empty list when this function returns. Any memory
* allocated to store items in the list should be freed. */
extern void flush_list(struct Node*);


/* De-allocates all data for the list. Ensure all memory
* allocated for this list is freed, including any
* allocated strings and the list itself. */
extern void free_list(struct Node**);

extern struct Node* get_last_element(struct Node* head);

extern struct Node* create_node(char*);
