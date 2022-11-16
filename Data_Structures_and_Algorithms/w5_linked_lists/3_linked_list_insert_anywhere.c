#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	int data;
	struct n *next;
}node;


node* insert_end(node *r, int data){
	
	if(r==NULL){
		r=(node*)malloc(sizeof(node));
		r->data=data;
		r->next=NULL;
		return r;
	}

	//if list isn't empty
	node *iter = r;
	while(iter->next!=NULL){
		iter = iter->next;
	}
	iter->next = (node*)malloc(sizeof(node));
	iter->next->data=data;
	iter->next->next=NULL;
	return r;
}

node *insert_start(node *r, int data){
	if(r==NULL){
		r =(node*)malloc(sizeof(node));
		r->data = data;
		r->next = NULL;
		return r;
	}

	node *temp = (node*)malloc(sizeof(node));
	temp->data=data;
	temp->next=r;
	return temp;
}

void insert_right_node(node *node_x, int data){
	if(node_x==NULL)
		printf("node can't be NULL");
	node *new_node = (node*)malloc(sizeof(node));
	new_node->next = node_x->next;
	node_x->next = new_node;
	new_node->data = data;
}


void print_linked_list(node *r){
	node *iter = r;

	if(r == NULL){
		printf("linked list is empty");
	}

	while(iter!=NULL){
		printf("%d ", iter->data);
		iter = iter->next;
	}
	printf("\n");
}

int main(){
	
	node *root = NULL;
	print_linked_list(root);

	root = insert_end(root, 25);
	print_linked_list(root);

	root = insert_end(root, 35);
	print_linked_list(root);

	root = insert_start(root, 55);
	print_linked_list(root);

	node *node_x = root->next;  // for now, this is second node which has 25 value
	insert_right_node(node_x, 28);  // it must be 55-25-28-35
	printf("it must be 55-25-28-35:  ");
	print_linked_list(root);

	return 0;
}