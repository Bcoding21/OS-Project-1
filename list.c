#include "list.h"


list* create_list() {
	list* new_list = malloc(sizeof(list));
	new_list->head = NULL;
	return new_list;
}

int add_to_list(list* ll, char* item) {
	Node* node = malloc(sizeof(Node));
	node->next = NULL;
	node->string = _strdup(item);
	if (!ll->head) { ll->head = node; return 0; }
	Node* currNode = ll->head;
	while (currNode->next) { currNode = currNode->next; }
	currNode->next = node;
	return 0;
}

char* remove_from_list(list* ll) {
	if (!ll->head) { return NULL; }
	char* str = ll->head->string;
	Node* temp = ll->head;
	ll->head = ll->head->next;
	free(temp);
	return str;
}


void print_list(list* ll) {
	if (!ll->head) { puts("NULL LIST"); return; }
	struct Node* currNode = ll->head;
	while (currNode) {
		printf("%s ", currNode->string);
		currNode = currNode->next;
	}
	printf("\n");
}

void flush_list(list* ll) {
	if (!ll->head) { return; }
	struct Node* currNode = ll->head;
	while (currNode) {
		free(currNode->string);
		currNode->string = NULL;
		currNode = currNode->next;
	}
}


void free_list(list* ll) {
	if (!ll->head) { return; }
	while (ll->head) {
		if (ll->head->string) {
			free(ll->head->string);
		}
		Node* next = ll->head->next;
		if (ll->head->next) {
			ll->head->next = NULL;
		}
		free(ll->head);
		ll->head = next;
	}
}