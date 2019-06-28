// implementingqueuesusingll
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node * next;
		node(int d):data(d),next(NULL){}
};
class queue{
private:
	// node *front;
	node * head;
public:
	int data;
	queue():head(NULL){}
void enqueue(int d){
	if(head==NULL){
		node* temp=new node(d);
		head=temp;
	}
	else{
		node *temp=new node(d);
		node * temp1=head;
		while(temp1->next){
			temp1=temp1->next;
		}
		temp1->next=temp;
	}
}
void dequeue(){
	node * temp=head;
	node * temp1=head;
	temp1=temp->next;
	head=temp1;
	delete temp;

}
int front(){
	if(head==NULL){
		return 0;
	}
	else{
		return head->data;
	}
}
bool empty(){
	return head==NULL;
}
int size(){
	int count=0;
	while(head){
		count++;
		head=head->next;
	}
	return count;
}
void Print(){
	node * temp=head;
	while(temp){
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
	cout<<endl;
}

};
// void Print(queue q){  This function works if *head is made public*.
// 	node * temp=q.head;
// 	while(temp){
// 		cout<<temp->data<<"  ";
// 		temp=temp->next;
// 	}
// 	cout<<endl;
// }

