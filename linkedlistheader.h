// Linkedlist
#include<iostream>
using namespace std;
class node{
	public:

	int data;
	node * next;
	node(int d):data(d),next(NULL){}
};
int length(node * head){
	node * temp=head;
	int count =0;
	while(temp){
		count++;
		temp=temp->next;
	}
	return count;

}
void insertatfront(node * &head,int d){
	if(head==NULL){
		head=new node(d);
	}
	else{
		node * temp=new node(d);
		temp->next=head;
		head=temp;
	}

}
void insertatend(node * &head,int d){
	if(head==NULL){
		insertatfront(head,d);
	}
	else{
		node * temp=head;
		while(temp->next){
			temp=temp->next;
		}
		node *temp1=new node(d);
		temp->next=temp1;

	}
}
void insertatmid(node * head,int data,int pos){
	if(pos>=length(head)){
		insertatend(head,data);
	}
	else if(pos==0){
		insertatfront(head,data);
	}
	else{
		node * temp=head;
		node * temp1=head;
		for (int i=1;i<pos;i++){
			temp=temp->next;
			temp1=temp1->next;
		}
		temp1=temp1->next;
		temp1=temp1->next;
		node * n=new node(data);
		temp->next=n;
		n->next=temp1;
	}
}
void deleteatfront(node * &head){
	if(head==NULL){
		return;
	}
	else{
		node * temp=head;
		head=head->next;
		delete temp;
	}
}
void deleteatend(node * &head){
	if(length(head)==0){
		return;
	}
	else{
		node *temp=head;
		node *temp1=head;

		while(temp->next->next){
			temp=temp->next;
			temp1=temp1->next;
		}
		temp1=temp1->next;
		temp->next=NULL;
		delete temp1;
	}
}
int head(node * head){
	return head->data;

}
void Print(node * head){
	node * temp=head;
	while(temp){
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
}

