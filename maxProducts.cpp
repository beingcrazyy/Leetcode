#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>> n;

    vector<char> arr;
    for(auto i : arr){
        cin>>i;
    }
    
    int count =0;
    for(auto i : arr){
        if(i != 'a' && i != 'e' && i != 'i' &&i != 'o' &&i != 'u' && i != 'A' && i != 'E' &&i != 'I' && i != 'O' && i != 'U' ){
            count++;
        }
    }

    return count;
}