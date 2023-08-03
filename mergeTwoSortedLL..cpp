#include <iostream>
using namespace std;

class Node{
    int data;
    Node *next;
};

class Functions{
    int LengthOfArray(int arr[]){
        return *(&arr + 1) - arr;
    }
};

class LinkedList{
    void CreateLL(int arr[]);
};


int main(){
    int arr1[] = {1,2,3};
    int arr2[] = {1,3,4};
    cout << sizeof(arr1);
}

