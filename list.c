#include "list.h"


struct CharNode {
	char val;
	struct CharNode* next;
};


struct CharNode* create_list() {
	struct CharNode* head = malloc(sizeof(struct CharNode));
	head->val = NULL;
	head->next = NULL;
	return head;
}


int add_to_list(struct CharNode* head, char* chars) {

	return 0;
}


char* remove_from_list(struct CharNode* head) {

	return NULL;
}


void print_list(struct CharNode* head) {
	struct CharNode* currNode = head;
	while (currNode) {
		printf(currNode->val);
		currNode = currNode->next;
	}
}

void flush_list(struct CharNode* head) {


}


void free_list(struct CharNode* head) {

}