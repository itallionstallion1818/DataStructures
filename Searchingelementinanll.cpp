// Searchingelementinanll
#include "linkedlistheader.h"
node * searchll(node * head,int key){
	while(head){
		if(head->data==key){
			return head;
		}
		head=head->next;
	}
	return NULL;


}

int main(){
node * head=NULL;
insertatend(head,0);
insertatend(head,1);
insertatend(head,2);
Print(head);
cout<<endl;
node *ans=searchll(head,10);
if(ans){cout<<"The elemet is found";}
else{
	cout<<"The element is not present in the linkded list";
}


}