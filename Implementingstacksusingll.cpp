// Implementingstacksusingll
#include<iostream>
using namespace std;
class node{
public:
	int data;
node * next;
	node(int d):data(d),next(NULL){}
};
class Stack{
	node * head=NULL;
public:
	void push(int d){
		if(head==NULL){
			node * n=new node(d);
			head=n;
		}
		else{
			node * n=new node(d);
			n->next=head;
			head=n;
		}
	}
	void pop(){
		if(head==NULL){
			cout<<"Stack underflow";
		}
		else{
			node * temp=head;
			head=head->next;
			delete temp;
		}
	}
	int top(){
		return head->data;
	}
	bool empty(){
		return head==NULL;
	}
	int size(){
		node * temp=head;
		int count=0;
		while(temp){
			count++;
			temp=temp->next;
		}
		return count;
	}


};
int main(){

}
