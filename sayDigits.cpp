#include<iostream>

using namespace std;

void sayDigits(int n){

    string s1[10] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
    int x = n%10;

    if(n == 0){
        return;
    }
    n = n/10;
    sayDigits(n);

    cout<<s1[x]<<" ";
}

int main(){
    int n ;
    cin>>n;
    sayDigits(n);
}