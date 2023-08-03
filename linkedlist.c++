#include "iostream"
using namespace std;

class Node{
    public: 
    int data;
    Node *next;
};


int main(){

    Node *head = new Node;

    head -> data = NULL;
    head -> next = new Node;

    head -> next -> data = 10;
    head -> next -> next = NULL;

    cout<< head -> next -> data <<endl;

return 0;
}


