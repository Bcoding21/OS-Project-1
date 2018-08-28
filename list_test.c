#include "list.h"

int main(){

	puts("Created list");
	struct Node* head = create_list();
	puts("Printing list");
	print_list(head);

	puts("Adding");
	add_to_list(head, "this");
	print_list(head);
	add_to_list(head, "is");
	print_list(head);
	add_to_list(head, "test");
	print_list(head);


	puts("Removing");
	print_list(head);
	remove_from_list(&head);
	print_list(head);
	remove_from_list(&head);
	print_list(head);
	remove_from_list(&head);
	print_list(head);


	puts("Adding");
	head = create_list();
	add_to_list(head, "this");
	print_list(head);
	add_to_list(head, "is");
	print_list(head);
	add_to_list(head, "test");
	print_list(head);

	puts("Flushing");
	flush_list(head);
	printf("Output: ");
	print_list(head);

	puts("Freeing");
	free_list(&head);
	printf("Output: ");
	print_list(head);

}

