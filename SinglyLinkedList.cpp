#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

// constructor
    Node(int value){
        this -> data = value;
        this -> next = NULL;
    }

// distructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this ->next = NULL;
        }

    }
    
};

// -----------------------FINDING LENGTH OF A SINGLY LINKED LIST-------------------------------------------------- //
int length(Node* &head){
    int count = 0;

    Node* temp = head;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    return count;
}

// -----------------------INSERTION IN A SINGLY LINKED LIST-------------------------------------------------- //


void insertAtBeginning(Node* &head , int value){
    Node* newNode = new Node(value);
    newNode -> next = head;
    head = newNode;
}

void insertAtEnd(Node* &tail , int value){
    Node* newNode = new Node(value);
    tail -> next = newNode;
    newNode -> next = NULL;
    tail = newNode;
}

void insertAtPosition(Node* &head, Node* &tail, int value, int position){
    if(position > 0 && position <= length(head)+1){
        if(position == 1){
        insertAtBeginning(head,value);
        return;
        }
        Node* newNode = new Node(value);
        Node* temp = head;

        for(int i = 1 ; i < position-1 ; i++){
            temp = temp -> next;
        }

        if(temp->next == NULL){
            insertAtEnd(tail,value);
            return;
        }

        Node* temp2 = temp->next;

        temp -> next = newNode;
        newNode -> next = temp2;
    }
    else{
        cout<<"Sorry This Index is Not Found !!"<<endl;
    }
    
}
// -----------------------TRAVERSAL OF A SINGLY LINKED LIST-------------------------------------------------- //
void printLL(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }

//------------------------PALINDROME -----------------------------------------------------------------------//

    bool isPalindrome(Node *head)
    {
        int size = 0;
        Node* temp = head;
        
        while(temp!=NULL){
            size++;
            temp = temp -> next;
        }

        cout << "size " << size<<endl ;
        
        int mid = size / 2;
        
        temp = head;
        for(int i = 1 ; i <= mid-1 ; i++){
            temp = temp -> next;
        }

        cout<<"MID :" << mid<<endl;
        
        Node* midHead = temp -> next;

        cout<<temp -> next -> data <<endl;
        
        Node* curr = midHead;
        Node* prev = NULL;
        Node* forw = NULL;
        
        while(curr != NULL){
            forw = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forw;
        }

        midHead = prev;

        cout<<prev -> data <<endl;
        cout<<temp -> data <<endl;

        
        temp -> next = midHead;

        cout<<"actual ll" << "  ";
        printLL(head);
        cout<<"inverted ll" << "  ";
        printLL(midHead);
        
        temp = head;
        Node* midtemp = midHead;

        cout<<"midhead "<< midHead -> data<<endl; 

        if(size % 2 == 0){
            while(temp != midHead){
                if(temp -> data != midHead -> data){
                    return false;
                }
            }
        }
        else{
            while(temp -> next != midHead){
                if(temp -> data != midHead -> data){
                    return false;
                }
            }
        }
        return true;
    }

// -----------------------DELETION IN A SINGLY LINKED LIST-------------------------------------------------- //

void deleteFromPosition(Node* &head, Node* &tail, int position){
    if(position>0 && position<=length(head)){
        if(position == 1){
            Node* temp = head;
            head = head -> next;
            temp -> next = NULL;
            delete temp;
            return;
        }
        Node* temp = head;

        for(int i = 1 ; i < position - 1 ; i++){
            temp = temp ->next;
        }

        Node* temp2 = temp -> next -> next;
        temp -> next -> next = NULL;
        delete temp->next;
        temp -> next = temp2;


        if(temp2 == NULL){
            tail = temp;
        }
    }
    else{
        cout<<"Sorry This Index is Not Found !!"<<endl;
    }
}



// -----------------------UPDATION IN A SINGLY LINKED LIST-------------------------------------------------- //

void update(Node* head, int position , int value){
    if(position>0 && position<=length(head)){
        Node *temp = head;
        
        for(int i = 1 ; i < position ; i++){
            temp = temp->next;
        }

        temp -> data = value;
    }
    else{
        cout<<"Sorry This Index is Not Found !!"<<endl;
    }
}

Node* merge2(Node* head1, Node* head2){
    
    Node* prev = head1;
    Node* curr = head1 -> next;

    Node* temp = head2;
    Node* forw = head2;


    
    

    return head1;
}

Node* merge(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;

    Node* forw1 = nullptr;
    Node* forw2 = nullptr;

    if(temp2 -> data < temp1 -> data){
        forw2 = temp2 -> next;
        temp2 -> next = temp1;
        head1 = temp2;
        temp2 = forw2;
    }

    temp1 = head1;

    while(temp1 != NULL && temp2 != NULL){
        if(temp2 -> data < temp1 -> data){
            forw1 = temp1 -> next;
            temp1 -> next = temp2;
            temp1 = forw1;
            forw2 = temp2 -> next;
            temp2 -> next = temp1;
            temp2 = forw2;
        }
        else{
            temp1 = temp1 -> next;
        }
    }

    return head1;
}


int main(){
    Node* node1 = new Node(2);
    Node* head = node1;
    Node* tail = node1;

    insertAtEnd(tail, 4);
    insertAtEnd(tail, 6);
    insertAtEnd(tail, 9);

    printLL(head);

    Node* node2 = new Node(1);
    Node* head2 = node2;
    Node* tail2 = node2;

    insertAtEnd(tail2, 2);
    insertAtEnd(tail2, 3);
    insertAtEnd(tail2, 4);
    insertAtEnd(tail2, 11);
    printLL(head2);

    Node* ans = merge(head,head2);

    printLL(ans);
    // printLL(head);

    // insertAtBeginning(head,2);
    // printLL(head);

    // insertAtEnd(tail, 3);
    // printLL(head);

    // insertAtPosition(head,tail, 1 , 2);
    // printLL(head);

    // insertAtPosition(head,tail, 120 , 1);
    // printLL(head);

    // insertAtPosition(head,tail, 120 , length(head));
    // printLL(head);

    // insertAtEnd(tail, 10);
    // printLL(head);

    // cout<<tail->data<<endl;
    // cout<<head->data<<endl;
    // cout<<length(head)<<endl;

    // deleteFromPosition(head , tail , 4);
    // printLL(head);

    // cout<<tail->data<<endl;
    // cout<<head->data<<endl;
    // cout<<length(head)<<endl;

    // deleteFromPosition(head , tail , 1);
    // printLL(head);

    // cout<<tail->data<<endl;
    // cout<<head->data<<endl;
    // cout<<length(head)<<endl;

    // deleteFromPosition(head , tail , length(head));
    // printLL(head);

    // cout<<tail->data<<endl;
    // cout<<head->data<<endl;
    // cout<<length(head)<<endl;

    // update(head , 3 , 100);
    // printLL(head);

    // isPalindrome(head);




  
}