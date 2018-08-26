#include "list.h"


struct Node {
	char* str;
	struct Node* next;
};


struct Node* create_list() {
	struct Node* head = malloc(sizeof(struct Node));
	head->str = NULL;
	head->next = NULL;
	return head;
}

int add_to_list(struct Node* head, char* cString) {
	if (!head) { return -1; }
	if (head->str == NULL) {
		head->str = strdup(cString);
		return 0;
	}
	struct Node* last_element = get_last_element(head);
	last_element->next = create_node(cString);
	return 0;
}

struct Node* get_last_element(struct Node* head) {
	struct Node* currNode = head;
	while (currNode->next){currNode = currNode->next;}
	return currNode;
}


struct Node* create_node(char* cString) {
	struct Node* node = malloc(sizeof(struct Node));
	node->str = strdup(cString);
	node->next = NULL;
	return node;
}

char* remove_from_list(struct Node* head) {
	if (!head) {
		return NULL;
	}
	struct Node* temp = head;
	head = head->next;
	return temp->str;
}


void print_list(struct Node* head) {
	struct Node* currNode = head;
	while (currNode) {
		printf("%s", currNode->str);
		currNode = currNode->next;
	}
}

void flush_list(struct Node* head) {

	struct Node* currNode = head;
	while (currNode) {
		free(currNode->str);
		currNode = currNode->next;
	}
}


void free_list(struct Node* head) {

}