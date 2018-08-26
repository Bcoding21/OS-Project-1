#include "list.h"


int main(int argc, char** argv) {

	struct Node* name = create_list();
	add_to_list(name, "BRANDON");
	print_list(name);
	free(name);


	

	return 0;
}