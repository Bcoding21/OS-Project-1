#include "list.h"


int main(int argc, char** argv) {

	struct Node* name = create_list();
	for (int i = 0; i < 100; i++) {
		add_to_list(name, "BRANDON");
	}
	free_list(name);
	print_list(name);


	

	return 0;
}