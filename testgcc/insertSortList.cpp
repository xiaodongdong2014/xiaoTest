#include <iostream>

typedef struct node{
	int data;
	node *next;
}node;

node* insertSort(){
	node *head=NULL,*newnode,*cur,*pre;
	while(1){
		int data;
		scanf("%d",&data);
		if(data == 0){
			break;
		}
		newnode=(node*)malloc(sizeof(node));
		newnode->data=data;
		newnode->next=NULL;
		if(head == NULL){
			head=newnode;
			continue;
		}
		if(head->data>=newnode->data){
			newnode->next=head;
			head=newnode;
			continue;
		}
		cur=head;
		while(newnode->data>cur->data && cur->next!=NULL){
			pre=cur;
			cur=cur->next;
		}
		if(cur->data>=newnode->data){
			pre->next=newnode;
			newnode->next=cur;
		}
		else{
			cur->next=newnode;
		}
	}
	return head;
}

int main(int argc,char *argv[]){
	node* head;
	head=insertSort();
	while(head!=NULL){
		printf("%d\n",head->data);
		head=head->next;
	}
	return 0;
}
