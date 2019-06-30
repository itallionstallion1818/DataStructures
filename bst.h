// binarysearchtree
#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node *right;
	node *left;
	node(int d):data(d),left(NULL),right(NULL){};

};
node * InsertinBST(node * root,int d){
	if(root==NULL){
		node * root=new node(d);
		return root;
	}
	else if(d>root->data){
		root->right=InsertinBST(root->right,d);
	}
	else{
		root->left=InsertinBST(root->left,d);
	}
	return root;

}




node* CreateBST(){
	int d;
	cin>>d;
	node * root=NULL;
	while(d!=-1){
		root=InsertinBST(root,d);
		cin>>d;
	}
	return root;
}
void PrintLevelOrder(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<"         ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}