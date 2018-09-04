#include "list.h"

int main(){

	puts("Created list");
	list* list = create_list();
	puts("Printing list");
	print_list(list);

	puts("Adding");
	add_to_list(list, "this");
	print_list(list);
	add_to_list(list, "is");
	print_list(list);
	add_to_list(list, "test");
	print_list(list);


	puts("Removing");
	print_list(list);
	remove_from_list(list);
	print_list(list);
	remove_from_list(list);
	print_list(list);
	remove_from_list(list);
	print_list(list);


	puts("Adding");
	add_to_list(list, "this");
	print_list(list);
	add_to_list(list, "is");
	print_list(list);
	add_to_list(list, "test");
	print_list(list);

	puts("Flushing");
	flush_list(list);
	printf("Output: ");
	print_list(list);

	puts("Freeing");
	free_list(list);
	printf("Output: ");
	print_list(list);

}

