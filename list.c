#include "list.h"


struct CharNode {
	char val;
	struct CharNode* next;
};


struct CharNode* create_list() {
	struct CharNode* head = malloc(sizeof(struct CharNode));
	head->val = '\0';
	head->next = NULL;
	return head;
}


int add_to_list(struct CharNode* head, char* charArray) {
	if (!head){ return -1;}
	struct CharNode* lastElement = get_last_element(head);
	int length = strlen(charArray);
	for (int i = 0; i < length; i++) {
		lastElement->val = charArray[i];
		lastElement->next = create_list();
		lastElement = lastElement->next;
	}
	return 0;
}

struct CharNode* get_last_element(struct CharNode* head) {
	struct CharNode* currNode = head;
	while (!isEndOfString(currNode)){currNode = currNode->next;}
	return currNode;
}

bool isEndOfString(struct CharNode* node) {
	return node->val == '\0';
}

char* remove_from_list(struct CharNode* head) {

	return NULL;
}


void print_list(struct CharNode* head) {
	struct CharNode* currNode = head;
	while (!isEndOfString(currNode)) {
		printf("%c", currNode->val);
		currNode = currNode->next;
	}
}

void flush_list(struct CharNode* head) {


}


void free_list(struct CharNode* head) {

}