#include<iostream>
using namespace std;

string reverse(string &str , int s , int e){
   
    if(s>=e){
        return str;
    }
    else{
        swap(str[e--],str[s++]);
        return reverse(str,s,e);
    }
}

int main(){
    string str = {"abcdefg"};
    cout<<reverse(str,0,str.length()-1)<<endl;
}