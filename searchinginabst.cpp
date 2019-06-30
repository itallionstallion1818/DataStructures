// searchinginabst
#include "bst.h"
bool searchbst(node * root,int key){
	if(root==NULL){
		return false;
	}

	if(root->data==key){
		return true;
	}
	else if(root->data>key){
		searchbst(root->left,key);
	}
	else{
		searchbst(root->right,key);
	}
}
