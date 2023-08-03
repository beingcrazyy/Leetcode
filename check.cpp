#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {
    // string s;
    transform(s.begin(), s.end(),s.begin(), ::tolower);
    string check;
    int i = 0;
    while(i < s.size()){
        if(s[i]>='a'&& s[i]<='z'){
            check.push_back(s[i]);
        }
        i++;
    }

    for(int j  = 0 ; j < check.size() ; j++){
        cout<<check[i];
    }
        int start=0;
        int end=check.size()-1;
        while(start<=end){
            if(check[start]!=check[end]){
                return false;
            }else{
                start++;
                end--;
            }
        }
        
        return true;
        
    }
int main(){
    string s = "A man, a plan, a canal: Panama";

    isPalindrome(s);
}