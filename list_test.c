#include "list_test.h"

bool test_create_list(){
    struct Node* newList = create_list();
	bool didCreate = newList != NULL;
	if (didCreate){
		free(newList);
	}
	return didCreate;
}

bool test_add_to_list(){
	char* str = "test";
	struct Node* node = malloc(sizeof(struct Node));
	node->str = str;
	node->next = NULL;
	add_to_list(node, str);
	bool nodeAdded = strcmp(node->str, str) == 0;
	free(node->str);
	free(node);
	return nodeAdded;
}

bool test_remove_from_list(){
	char* str = "test";
	struct Node* head_node = malloc(sizeof(struct Node));
	head_node->str = str;
	head_node->next = NULL;
	char* str2 = remove_from_list(head_node);
	return strcmp(str2, head_node->str) == 0;
}

bool test_flush_list() {
	struct Node* head_node = malloc(sizeof(struct Node));
	head_node->str = strdup("test");
	head_node->next = NULL;
	flush_list(head_node);
	return head_node->str == NULL;
}

bool test_free_list(){
	char* str = "test";
	struct Node* head_node = malloc(sizeof(struct Node));
	head_node->str = strdup("test");
	head_node->next = NULL;
	free_list(&head_node);
	return head_node == NULL;
}


