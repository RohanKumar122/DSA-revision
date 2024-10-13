#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Node{
public:
	int data;
	Node* next;

public:
	Node(int data1,Node* next1){
		data =data1;
		next =next1;
	}

	Node(int data1){
		data =data1;
		next =NULL;
	}

};

Node* arrToLL(int arr[],int n){
	Node* head =new Node(arr[0]);
	Node* temp=head;
	for(int i=1;i<n;i++){
		temp ->next =new Node(arr[i]);
		temp =temp->next;
	}
	return head;
}

void Print(Node* head){
	Node* temp =head;

	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

Node* removeHead(Node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* temp =head;
	head =head->next;
	temp->next =NULL;
	delete(temp);

	return head;
}

Node* removeTail(Node* head){
	if(head ==NULL || head->next ==NULL) return head;

	Node* temp =head;
	Node* prev =head;
	while(temp!=NULL){
		prev =temp;
		temp =temp->next;
	}
	prev->next =NULL;
	delete(temp);
	return head;
}

int main(){
	cout<<"Hello Rohan!!"<<endl;
	int n=5;
	int arr[5] ={1,4,6,7,3};
	Node* head =arrToLL(arr,n);
	Print(head);
	cout<<"-----------------"<<endl;
	head =removeHead(head);
	Print(head);
	cout<<"-----------------"<<endl;
	head= removeTail(head);
	Print(head);
	cout<<"-----------------"<<endl;
	

	return 0;
}