#include<iostream>
using namespace std;

bool isPalindrome(string &str , int s , int e){
   
    if(s>=e){
        return true;
    }
    
    if(str[e--]!=str[s++]){
        return false;
    }
    else{
        return isPalindrome(str,s,e);
    }
}

int main(){
    string str = {"aba"};
    cout<<isPalindrome(str,0,str.length()-1)<<endl;
}