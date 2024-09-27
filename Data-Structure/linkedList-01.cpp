#include<iostream>
#include<vector>
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

int main(){
	vector<int> arr1={2,3,5,7,9};
	Node* y =new Node(arr1[1],nullptr);
	Node* z = new Node(arr1[2]);
	Node* head=new Node(arr1[0]);


	cout<<y->data;
	cout<<" "<<y->next<<endl;
	cout<<z->data;
	cout<<" "<<z->next<<endl;

	// ConvertToLL
	vector<int> arr={1,2,3,4};
	Node*head11 =convertArrToLL(arr);
	cout<<head11->next->next->data;

	return 0;
}