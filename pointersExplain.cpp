#include<iostream>

using namespace std;

int main(){
    int *p;                //8byte

    int a = 0;
    p = &a;

    cout<<*p<<endl;
    cout<<p<<endl;

    *p = 9;
    cout<<a<<endl;


    int **q = &p;
    cout<<**q<<endl;
    cout<<*q<<endl;
    cout<<q<<endl;


}