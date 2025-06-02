//  Convert arr to Linked List
//  Iterate to Linked List
//  Print Length of Linked List

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

// Length of Linked List
int lenghtofLL(Node* head){
	int cnt=0;
	Node* temp =head;
	while(temp){
		temp=temp->next;
		cnt++;
	}
	return cnt;
}

//  Search in Linked List
string SearchInLL(Node*head,vector<int>& arr, int t){
	Node* temp=head;
	string s=" ";
	while(temp){
		if(temp->data==t){
			s="YES";
			break;
		}
		else s="NO"; 
		temp=temp->next;
	}
	return s;
}

// print The Linked List
void Print(Node* head){
	Node* temp =head;
	while(temp){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

//  Remove Head
Node* removeHead(Node* head){
	Node* temp=head;
	head=head->next;

	delete temp;
	return head;
}
 
// Remove Tail
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

Node* removeNode(Node* head,int k){
	if(head==NULL) return head;
	if(k ==1){
		Node* temp =head;
		head =head->next;
		delete(head);
		return head;
	}
	int cnt =0;
	Node* temp =head;
	Node* previous =NULL;
	while(temp!=NULL){
		cnt++;
		if(cnt==k){
			previous->next =previous->next->next;
			delete(temp);
			break;
		}
		previous =temp;
		temp =temp->next;
	}
	return head;
}

Node* InsertAtHead(Node* head, int element){
	if(head==NULL){
		return new Node(element);
	}
	Node* temp =new Node(element,head);
	// temp -> next =head;
	// head =temp;
	return temp;
}

Node* InsertAtLast(Node* head,int element){
	if(head==NULL){
		return new Node(element);
	}
	Node* temp =head;
	Node* k =new Node(element);
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next =k;
	return head;

}

Node* insertAtPosition(Node* head,int el ,int k){
	if(head==NULL){
		if(k==1){
			return new Node(el);
		}
		else{
			return head;
		}
	}
	if (k==1){
		return new Node(el,head);
	}
	int cnt=0;
	Node* temp= head;
	while(temp!=NULL){
		cnt++;
		if(cnt==(k-1)){
			Node* x= new Node(el);
			x->next =temp->next;
			temp->next =x;
			break;
		}
		temp =temp->next;
	}
	return head;

}

Node*insertBeforeValue(Node* head,int el,int val){
	if(head==NULL){
		return NULL;
	}
	if(head->data==val){
		return new Node(el,head);
	}
	Node* temp=head;
	bool found=false;

	while(temp->next!=NULL){
		if(temp->next->data ==val){
			Node* x =new Node(el,temp->next);
			temp->next=x;
			found =1;
			break;
		}
		temp=temp->next;
	}
	if(found== false){
		cout<<"Not found"<<endl;
	}
	return head;
}




int main(){
	vector<int> arr={1,2,3,4,5,6,7,8,9};
	Node*head =convertArrToLL(arr);
	Node* temp =head;

	Print(head);
	cout<<"-----------------------"<<endl;

	int Length=lenghtofLL(head);
	cout<<"Lenght of Linked List: "<<Length;
	cout<<endl;
	cout<<"-----------------------"<<endl;

	cout<<SearchInLL(head,arr,5)<<endl;
	cout<<"-----------------------"<<endl;

	Node* NewHead =removeHead(head);

	Print(NewHead);
	cout<<"--------- --------------"<<endl;

	head= removeTail(NewHead);
	Print(head);
	cout<<"--------- --------------"<<endl;

	head =removeNode(head,3);
	Print(head);

	cout<<"-----------------------"<<endl;
	cout<<"------INSERSION------"<<endl;
	head = InsertAtHead(head,44);
	Print(head);
	
	cout<<"-----------------------"<<endl;
	head =InsertAtLast(head,55);
	Print(head);

	cout<<"-----------------------"<<endl;
	head=insertAtPosition(head,99,3);
	Print(head);

	cout<<"-----------------------"<<endl;
	head=insertBeforeValue(head,77,99);
	Print(head);
	cout<<"-----------------------"<<endl;



	return 0;
} 