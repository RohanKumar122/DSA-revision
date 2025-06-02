#include<iostream>
#include<vector>
using namespace std;

struct Node{
public:
	int data;
	Node* next;

public:
	Node(int data1,Node* next1){
		data=data1;
		next=next1;
	}

public:
	Node(int data1){
		data=data1;
		next=NULL;
		
	}

};

Node* arrTolist(vector<int> & arr){
	Node* head =new Node(arr[0]);
	Node* mover =head;

	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		mover->next =temp;
		mover=temp;
		mover=mover->next;
	}
	return head;
}

void Print(Node* head){
	Node* temp =head;
	while(temp->next!=NULL){
		cout<<temp->data<<" -> ";
		temp =temp->next;
	}
	cout<<temp->data<<" "<<endl;
}
Node* InsertAtHead(Node* head,int data ){
	Node * temp =head;
	if(head==NULL){
		head->data=data;
		head->next=NULL;
	}
	Node* data1=new Node(data);
	data1->next =head;
	head=data1;
	return head;

}

Node* InsertAtTail(Node* head,int data){
	Node* dataI =new Node(data);
	Node* temp =head;
	while(temp->next!=NULL){
		temp =temp->next;
	}
	temp->next=dataI;
	return head;
}

void LenghtofLL(Node* head){
	Node* temp=head;
	int cnt =0;

	while(temp->next!=NULL){
		cnt++;
		temp=temp->next;
	}
	cout<<cnt;
}

int main(){
	cout<<"-- Welcome to LinkedList --"<<endl;
	cout<<endl;
	vector<int> v ={2,3,4,2,1};
	Node*head=new Node(3);
	Node* temp1 =new Node(4);
	head->next=temp1;
	Print(head);

	
	head=InsertAtTail(head,5);
	Print(head);

	head=InsertAtHead(head,9);
	Print(head);

	int Length=LenghtofLL(head);
	cout<<Length<<endl;









	return 0;
}