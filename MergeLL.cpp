#include <iostream>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode *next;
};

class LinkedList{
    public:
        ListNode CreateLL(int Array[] , int size);
};

ListNode LinkedList :: CreateLL(int Array[] , int size){
    ListNode *head;
    head = new ListNode;
    head->val = NULL;
    head->next = NULL;

    for(int i = 0; i < size ; i++){
        ListNode *newNode = new ListNode;
        newNode -> val = Array[i];
        newNode -> next = NULL;
    }
    return *head;
}

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }

        if(list2 == NULL){
            return list1;
        }

        ListNode *headNode = list1;
        ListNode *headNode2 = list2;
        ListNode *temp;
        
        
        while(list1 && list2){
            if(headNode -> val == headNode2 -> val){
                temp = headNode -> next ;
                ListNode *NewNode = new ListNode;
                headNode -> next = NewNode;
                NewNode -> val = headNode2 -> val;
                NewNode -> next = temp;
                headNode = headNode -> next;
                headNode2 = headNode2 -> next;
            }

            if(headNode -> val < headNode2 -> val && headNode -> next -> val > headNode2 ->val){
                temp = headNode -> next ;
                ListNode *NewNode = new ListNode;
                headNode -> next = NewNode;
                NewNode -> val = headNode2 -> val;
                NewNode -> next = temp;
                headNode = headNode -> next;
                headNode2 = headNode2 -> next;
            }    

            if(headNode -> val > headNode2 -> val){
                temp = headNode;
                ListNode *NewNode = new ListNode;
                headNode = NewNode;
                NewNode -> val = headNode2 -> val;
                NewNode -> next = temp;
                headNode = headNode -> next;
                headNode2 = headNode2 -> next;
            }
        }
        return list1;
    }
};




int main(){
    int arr1[] = {1,2,3};
    int arr2[] = {1,3,4};

    LinkedList LL1;
    LinkedList LL2;

    ListNode *L1 = LL1.CreateLL(arr1,3);
    ListNode *L2 = LL2.CreateLL(arr2,3);

    Solution S1;
    cout << S1.mergeTwoLists(L1,L2);
    
}

