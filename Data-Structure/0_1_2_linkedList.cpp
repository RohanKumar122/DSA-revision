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

Node* countZero_One(Node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}

	int cnt0=0; int cnt1=0; int cnt2=0;
	Node* temp=head;
	while(temp!=NULL){
		if(temp->data==0) cnt0+=1;
		else if(temp->data==1) cnt1+=1;
		else cnt2+=1;

		temp=temp->next;
	}
	temp=head;
	while(temp!=NULL){
		if(cnt0>0){
			temp->data=0;
			cnt0--;
		}
		else if(cnt1>0){
			temp->data =1;
			cnt1--;
		}
		else {
			temp->data=2;
			cnt2--;
		}

		temp=temp->next;
	}
	return head;

}

int main(){
	vector<int> arr ={0,1,0,0,1,1,1,2,0,2,2,2,0};
	Node* head=combinedLinkedList(arr);
	Print(head);

	head=countZero_One(head);
	Print(head);
	

	return 0;
}