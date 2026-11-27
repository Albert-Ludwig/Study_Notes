#include<stdio.h>
#include<stdlib.h>

struct node {
	int val;
	struct node *next;
} ;

typedef struct node Node;

void printList (Node *LL) {
	printf("%d - ", LL->val);
	if (LL->next == NULL) {
		return;
	} else {
		printList(LL->next);
	}
} 

int main () {
	Node *ll;
	ll = (Node*)malloc(sizeof(Node));
	ll->val = 5;
	ll->next = (Node*)malloc(sizeof(Node));
	ll->next->val = 10;
	ll->next->next = (Node*)malloc(sizeof(Node));
	ll->next->next->val = 15;
	ll->next->next->next = NULL;
	
	printList(ll);
}
