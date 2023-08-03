#include<iostream>
using namespace std;

class Node{
    int data;
    Node *next;
};

int main(){
    int x = 10;
    int *p;
    int **q;

    p = &x;
    q = &p;

    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<q<<endl;


    p = new int[6];
    p[1] = 6;
    p[2] = 7;
    p[4] = 9;

    q = new Node*[5];

}