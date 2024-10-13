//  Create Node using struct or class
//  Print basic values
//  Convert arr to Linked List

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

struct Node{
	public:
		int data;
		Node* next;

	// Contructor
	public: 
		Node(int data1, Node* next1){
			data=data1;
			next=next1;
		}	

	public:
		Node(int data1){
			data=data1;
			next=nullptr;
		}

};

Node* Print(Node* head){
	if(head ==NULL || head->next==NULL) return head;

	Node* temp= head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

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

bool palindrom(Node* head){
	if(head==NULL || head->next==NULL) return true;

	Node* temp=head;
	stack<int> st;

	while(temp!=NULL){
		st.push(temp->data);
		temp=temp->next;
	}

	temp =head;
	while(temp!=NULL){
			if(temp->data!=st.top()){
				return false;
			}
			temp=temp->next;
			st.pop();
	}
	return true;
}
int main(){
	vector<int> arr={2,3,3,2};
	Node*head =convertArrToLL(arr);

	Print(head);
	cout<<palindrom(head);
	// cout<<head;



	return 0;
}