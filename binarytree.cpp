// binarytree
#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * right;
	node * left;
	node(int d):data(d),right(NULL),left(NULL){}
};
node * CreateTree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
node *root= new node(d);
root->left=CreateTree();
root->right=CreateTree();
return root;
}
void INORDER(node * root){
	if(root==NULL){
		return;
	}
	INORDER(root->left);
	cout<<root->data<<'\t';
	INORDER(root->right);
}
void PREORDER(node * root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<'\t';
	PREORDER(root->left);
	PREORDER(root->right);	
}
void POSTORDER(node * root){
	if(root==NULL){
		return;
	}
	POSTORDER(root->left);
	POSTORDER(root->right);		
	cout<<root->data<<'\t';
} 
int main(){
	node * root=CreateTree();
	INORDER(root);
	cout<<endl;
	PREORDER(root);
	cout<<endl;
	POSTORDER(root);
	cout<<endl;

}