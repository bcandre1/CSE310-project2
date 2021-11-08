/*
 * bst.cpp
 *
 *  Created on: Oct 15, 2021
 *      Author: bcandre1
 *      Part of Project 2 for CSE310
 */

#include "bst.h"
#include "event.h"

struct node {
public:
	event data;
	node* left;
	node* right;
};
void insert(event data) {
	node *tempNode = (struct node*) malloc(sizeof(struct node));
	node *current;
	node *parent;
	tempNode->data = data;
	tempNode->left = NULL;
	tempNode->right = NULL;

	//if(root == NULL) {

	//}

}
node* findEventID (node* root, int event_id) {
	if(root == NULL || root->data == event_id){
		return root;
	}
	if(root->data.event_id < event_id) {
		return findEventID(root->right,event_id);
	}
	return findEventID(root->left,event_id);
}



