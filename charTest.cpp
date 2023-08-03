#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    vector<char> ans(n);
    for(int i = 0 ; i < n ; i++){
        ans[i] = '0';
    }

    ans[0] = n;

    for(int i = 0 ; i < n ; i++){
        cout<<ans[i];
    }

}