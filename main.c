#include "list.h"


int main(int argc, char** argv) {

	struct CharNode* name = create_list();
	add_to_list(name, argv[1]);
	print_list(name);
	free(name);




	return 0;
}