#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct Node{
	int data;
	Node* next;

public:
	Node(int data1){
		data =data1;
		next =NULL;
	}
};

Node* combinedLinkedList(vector<int> & arr){
	Node* head =new Node(arr[0]);
	Node* temp =head;
	int n=arr.size();
	for(int i=1;i<n;i++){
		Node* t =new Node(arr[i]);
		temp->next =t;
		temp=temp->next;
	}
	return head;
}


void Print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head =head->next;
	}
	cout<<endl;
}

Node* reverseLL(Node* head){
	stack<int> st;
	Node* temp =head;
	while(temp!=NULL){
		st.push(temp->data);
		temp=temp->next;
	}
	Node* temp1=head;
	while(temp1!=NULL){
		temp1->data =st.top();
		st.pop();
		temp1=temp1->next;
	}
	return  head;
}

Node* reverseLL_swap(Node* head){
	if(head==NULL || head->next== NULL){
		return head;
	}
	Node* temp =head;
	Node* prev =NULL;
	while(temp!=NULL){
		Node* front =temp->next;
		temp->next=prev;
		prev =temp;

		temp = front;
	}
	return prev;
}


Node* reverseUsingRecursion(Node* head){
	Node* temp =head;
	Node* prev =NULL;
	if(temp==NULL){
		return prev;
	}
	Node* front =temp->next;
	temp->next=prev;
	prev =temp;

	reverseUsingRecursion(front);
	return temp;
}

int main(){
	vector<int> arr ={1,2,3,4,6};
	
	Node* head=combinedLinkedList(arr);

	Print(head);

	head =reverseLL(head);
	Print(head);


	head = reverseUsingRecursion(head);
	Print(head);

	return 0;
}