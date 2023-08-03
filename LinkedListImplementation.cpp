#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;
};

int main(){
    Node *head = new Node;
    head -> data = NULL;
    head -> next = NULL;

    Node *lastNode = new Node;
    lastNode = head;

    while(1){
        int x;
        cout<<"Enter the no. you want to insert in the linked list : ";
        cin>>x;
        if(x==0){
            break;
        }
        lastNode -> next = new Node;
        lastNode -> next -> data = x;
        lastNode -> next -> next = NULL;
        lastNode = lastNode -> next;
    }


    Node *temp;
    temp = head;
    while(temp->next){
        cout<<temp->next->data<<endl;
        temp = temp->next;
    }
}