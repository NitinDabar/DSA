#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int val):data(val),next(nullptr){}
};
int main(){
    Node*node1=new Node(42);
    cout<<node1->data<<endl;
}