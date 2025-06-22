#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insert(Node* &head,int data,int pos){
    
    Node* nodetoinsert= new Node(data);
    if (pos == 1){
        nodetoinsert->next = head;
        head = nodetoinsert;
        return;
    }
    Node* temp= head;
    int cnt =1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp == NULL){
        cout << "Position out of bounds" << endl;
        return;
    }
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
    
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(49);
    Node* head=node1;
    cout<<head<<endl;
    cout<<node1->data<<endl;
    insert(head,30,2);
    print(head);
    return 0;
}