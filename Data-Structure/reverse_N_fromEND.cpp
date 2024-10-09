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




Node* reverseFromEnd(Node* head,int N){
	if(head==NULL || head->next== NULL){
		return head;
	}
	Node* temp =head;
	int cnt =0;
	while(temp!=NULL){
		cnt++;
		temp=temp->next;
	}

	if(cnt ==N){
		Node* newHead =head ->next;
		delete(head);
		return newHead;
	}
	int target = cnt-N;

	temp=head;
	while(temp!=NULL){
		target--;

		if(target ==0){
			break;
		}
		temp =temp->next;
	}
	Node* delNode =temp->next;
	temp->next =temp ->next->next;
	delete(delNode);
	

	return head;


}

Node* reverseFromEndOptimal(Node* head,int k){
	Node* fast =head;
	Node* slow =head;

	for(int i=0;i<k;i++){
		fast =fast->next;
	}

	if(fast==NULL)  return head->next;

	while(fast->next !=NULL){
		fast =fast->next;
		slow =slow->next;
	}

	Node* delNode =slow->next;
	slow->next =slow->next->next;
	delete(delNode);
1  
	return head;
}

int main(){
	vector<int> arr ={1,2,3,5,6,8};
	Node* head=combinedLinkedList(arr);
	Print(head);


	head =reverseFromEnd(head,2);
	Print(head);

	head =reverseFromEndOptimal(head,1);
	Print(head);
	return 0;
}