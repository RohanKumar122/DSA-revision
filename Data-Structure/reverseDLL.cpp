#include<iostream>
#include<vector>
#include<stack>

using namespace std;

struct Node{
	public:
		int data;
		Node* next;
		Node* back;
	// Contructor
	public: 
		Node(int data1, Node* next1,Node* back1){
			data=data1;
			next=next1;
			back=back1;
		}	

	public:
		Node(int data1){
			data=data1;
			next=nullptr;
			back =nullptr;
		}

};

void Print(Node* head){
	Node* temp =head;
	while(temp){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
Node* convertArrToDLL(vector<int>& arr){
	Node* head=new Node(arr[0]);
	Node* prev=head;

	for(int i=1;i<arr.size();i++){
		Node* temp =new Node(arr[i]);
		prev->next =temp;
		prev =temp;
	}
	return head;
}


Node* reverseDLL_optimised(Node* head) {
 	if(head==NULL||head->next==NULL)
    return head;
    
    
       Node* temp = NULL;
       Node* curr = head;
   
    while (curr != NULL) 
    {
        curr->back = curr->next;
        curr ->next = temp;

        temp=curr;
        curr = curr->back;
    }
    return temp;


}



int main(){
	cout<<"Reverse DLL"<<endl;
	
	vector<int> arr ={2,3,4,56,7};
	Node* head =convertArrToDLL(arr);

	Print(head);


	head =reverseDLL_optimised(head);
	Print(head);

	return 0;
}