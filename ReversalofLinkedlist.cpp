// ReversalofLinkedlist
#include "linkedlistheader.h"
void reversellr(node * &head){
//We use three node pointers that is prev,current and n(next) to reverse a ll(linkedlist).	
	node * prev=NULL;
	node * current=head;
	node * n=NULL;
	while(current){
		n=current->next;
		current->next=prev;
		prev=current;
		current=n;
	}
	head=prev;
	return;


}
int main(){
node * head=NULL;
insertatend(head,0);
insertatend(head,1);
insertatend(head,2);
Print(head);
cout<<endl;
reversellr(head);
Print(head);

}
