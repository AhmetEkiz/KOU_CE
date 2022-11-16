/** @file 2_linked_list_insert.c
 *  @brief linked list data at the end of list inserting function
 *
 *  This contains the add node on 
 *
 *  @author Ahmet Ekiz (ahmetekiz)
 *  @bug No known bugs.
 */

#include <stdio.h>
#include <stdlib.h>   // for sizeof etc.


struct node{
	int data;
	struct node *next;
};


/** @brief print the linked list that build with struct node
 *  @param r a struct node that root node of linked list
 *  @return void.
 */
void print_linked_list(struct node* r){
	struct node* iter = r;

	if(r==NULL){
		printf("linked list is empty\n");
	}

	while(iter!=NULL){
		printf("%d ", iter->data);
		iter = iter->next;
	}
}

/** @brief insert a new node to the end of the linked list
 *  @param r a struct node that root node of linked list
 *  @param data integer value to insert linked list
 *  @return struct node pointer.
 */
struct node* insert_node(struct node *r, int data){

	// if root is empty
	if(r==NULL){
		r = (struct node*)malloc(sizeof(struct node));
		r->data = data;
		r->next = NULL;
		return r;
	}

	// if it's not empty, add node at the end of list.
	struct node *iter = r;

	while(iter->next!=NULL){
		iter = iter->next;
	}

	iter->next = (struct node*)malloc(sizeof(struct node));
	iter->next->data = data;
	iter->next->next = NULL;

	return r;
}


int main(){

	struct node* root=NULL;
	print_linked_list(root);

	for(int i=1; i<6; i++){
		root = insert_node(root, i*10);
		print_linked_list(root);
		printf("\n");
	}	

	return 0;
}
