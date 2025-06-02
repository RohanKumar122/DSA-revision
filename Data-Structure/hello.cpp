#include<iostream>
#include<vector>
using namespace std;

struct Node{
public:
    int data;
    Node* next;

    public :
    Node(int data1){
        data=data1;
        next =NULL;
    }

public:
    Node(int data1, Node* next1){
        data=data1;
        next =next1;
    }
};


Node* arrToLL(vector<int> &v){
    Node* head =new Node(v[0]);
    Node* temp =head;

    for(int i =1;i<v.size();i++){
        Node* temp1 =new Node(v[i]);
        temp ->next =temp1;
        temp =temp1;
    }
    return head;
}

void Print(Node* head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }

}

int  fibo (int n){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main() {
    cout << "Linked List1"<<endl;
    vector<int> v ={1,2,4,5};
    // Node* head =arrToLL(v);
    // Print(head);

    cout<<fibo(5);
    return 0;
}
