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

Node* deleteHead(Node* head){
	if(head==NULL || head-> next ==NULL){
		return NULL;
	}
	Node* prev =head;
	head =head->next;

	head ->back =NULL;
	prev ->next =NULL;

	delete prev;
	return head;
}

Node* deleteTail(Node* head) {
    // If the list is empty or has only one node
    if (head == nullptr || head->next == nullptr) {
        delete head; // Free the single node if it's the only one
        return nullptr;
    }

    // Traverse to the second last node
    Node* temp = head;
    while (temp->next->next != nullptr) { 
        temp = temp->next;
    }

    // temp is now the second last node, delete the last node
    Node* tail = temp->next;
    temp->next = nullptr;
    delete tail;

    return head;
}


// Node* deleteTail(Node* head){
// 	if(head==NULL || head->next==NULL){
// 		return NULL;
// 	}
// 	Node* tail =head;
// 	while(tail->next!=NULL){
// 		tail=tail->next;
// 	}
// 	Node* newtail =tail->back;
// 	newtail->next =nullptr;
// 	tail->back=nullptr;
// 	delete tail;
// 	return head;
// }

Node* deleteKthNode(Node* head,int k){
	Node* temp=head;

	int cnt =0;
	while(temp != nullptr && cnt <      k){
		cnt++;
		if(cnt==k) break;
		temp=temp->next;

	}
	Node *prev =temp->back;
	Node* front =temp ->next;

	if(temp->back==NULL && temp->next ==NULL){
		return NULL;
	}
	else if(prev==NULL){
		return deleteHead(head);
	}
	else if(front ==NULL){
		return deleteTail(head);
	}
	prev->next =front;
	front->back =prev;

	temp->back =NULL;
	temp ->next =NULL;

	delete(temp);

	return head;
}

Node* insertionAtHead(Node* head, int k){
	Node* temp =new Node(k);
	if(head==NULL){
		head =temp;
		head ->next =NULL;
		head ->back =NULL;
	}
	temp ->next =head;
	temp->back =NULL;
	head =temp;

	return head;
}

Node* insertBeforeHeadS(Node* head,int val){
	Node* newHead =new Node(val,head,nullptr);
	head ->back =newHead;

	return newHead;
}

Node* insertionAtTail(Node* head,int k){
	Node* newTail =new Node(k);
	Node* temp =head;

	while(temp->next!=NULL){
		temp =temp->next;
	}
	temp ->next =newTail;
	newTail->back =temp;

	return head;
}

Node* insertionBeforePosition(Node* head, int Position,int k){
	Node* el =new Node(k);
	Node* temp=head;
	Node* prev =NULL;
	int cnt =0;
	while(cnt!=Position){
		
		cnt+=1;
		if(cnt==k) break;

		temp =temp->next;		
	}
	prev =temp->back; 
	el ->next =temp;
	el ->back=prev;

	prev ->next =el;
	temp->back =el;

	return head;

}

Node* reverseUsing_stack(Node* head){
	stack<int> st;

	Node* temp=head;
	while(temp!=NULL){
		st.push(temp->data);
		temp =temp->next;
	}
	Node* temp1=head;
	while(temp1!=NULL){
		temp1->data =st.top();
		st.pop();
		temp1=temp1->next;
	}
	return head;
}

Node* reverseDLL_optimised(Node* head){
	if(head==NULL || head->next== NULL){
		return head;
	}
	Node* current =head;
	Node* prev=NULL;

	while(current!=NULL){
		prev = current->back;
		current->back =current->next;
		current->next =prev;

		current =current ->back;


	}

	return prev->back;
}

int main(){
	// Node* head =new Node(1,new Node(2,new Node(5,NULL)));
	vector<int> arr ={2,3,4,56,7};
	Node* head =convertArrToDLL(arr);

	Print(head);
	 
	cout<<"---------------------"<<endl;

	// head =deleteHead(head);
	// Print(head);

	// cout<<"---------------------"<<endl;
	// head =deleteTail(head);
	// Print(head);

	// cout<<"---------------------"<<endl;
	// head =deleteKthNode(head,2);
	// Print(head);

	// cout<<"---------------------"<<endl;
	// head=insertionAtHead(head,77);
	// Print(head);

	// cout<<"---------------------"<<endl;
	// head=insertionAtTail(head,55);
	// Print(head);

	// cout<<"---------------------"<<endl;
	// head=insertionBeforePosition(head,2,33);
	// Print(head);	
	// cout<<"---------------------"<<endl;



	head =reverseUsing_stack(head);
	Print(head);

	head =reverseDLL_optimised(head);
	Print(head);

	return 0;
}