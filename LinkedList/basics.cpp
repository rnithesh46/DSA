#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int>& a){
    Node* head=new Node(a[0]);
    Node* mover=head;
    for(int i=1;i<a.size();i++){
        Node* temp=new Node(a[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void traversal(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int lengthOfLL(Node* head){
    int count=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        count++;
    }
    return count;
}

int check(Node* head,int k){
    Node* temp=head;
    while(temp){
        if(temp->data==k) return 1;
        temp=temp->next;
    }
    return 0;
}

int main(){
    freopen("LLi.txt","r",stdin);
    freopen("LLo.txt","w",stdout);
    vector<int> a={12,5,8,7};
    //this converts arr to ll and gives head of the linkedList
    Node* head=convertArr2LL(a);
    // cout<<head->data;

    //traversal
    // traversal(head);

    //Length
    // cout<<lengthOfLL(head);

    //check if present
    cout<<check(head,15);


}