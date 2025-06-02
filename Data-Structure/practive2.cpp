#include<iostream>
#include<vector>

using namespace std;

struct Node{
	int data;
	Node* next;

	// constructor
	Node(int data1,Node* next1 )
	{
		data=data1;
		next =next1;
	}

	// other method
	Node(int data1){
		data=data1;
		next=nullptr;
	}

};

// Convert Array to Lineked List
Node* convertArrToLL(vector<int> & arr){
	Node* head =new Node(arr[0]);
	Node* mover=head;

	for(int i =1;i<arr.size();i++){
		Node* temp =new Node(arr[i]);
		mover->next =temp; 
		// mover=temp;    // or use mover =mover->next 
		mover=mover->next;
	}
	return head;
}

void Print(Node* head){
	Node* temp =head;
	while(temp->next!=NULL){
		cout<< temp->data<<" -> ";

		temp=temp->next;
	}
	cout<<temp->data;
	cout<<endl;
}

Node* removeHead(Node* head){
	Node* temp =head;
	head =temp->next;
	head ->next =temp->next->next;
	temp ->next =NULL;
	return head;
}

Node* removeTail(Node* head){
	Node* temp=head;
	if(head==NULL || head->next==NULL) return NULL;

	while(temp->next->next!= NULL){
		temp=temp->next;
	}
	delete(temp->next);
	temp->next =NULL;

	return head;
}

int main(){
	vector<int> v ={3,5,2,6,7,2};

// convertToLL
	Node* head =convertArrToLL(v);
	Print(head);
// removeHead 
	Node* head2 =removeHead(head);
	Print(head2);
// removeTail
	// Node* head3 =removeTail(head);
	Print(head);

	return 0;
}