#include<bits/stdc++.h>
//#include<iostream>

using namespace std;

int givelastIndex(map<int,vector<int>> indices, string s){
    vector<int> arr(10,0);

    for(int i = 0 ; i < s.length() ; i++){
        arr[s[i] - '0']++;
    }

    int ans = -1;
    for(int i = 0 ; i <= 9 ; i++){
        if(arr[i] == 0) continue;
        if(indices[i].size() < arr[i]){
            ans = -2 ;
            break;
        }
        ans = max(ans , indices[i][arr[i]-1]);
    }

    return ans+1;
}

int main(){
    cout<<"Enter Main String" <<endl;
    string ss;
    cin>>ss;

    int n = ss.length();

    map<int,vector<int>> indices;
    for(int i = 0 ; i < n; i++){
        indices[ss[i] - '0'].push_back(i);
    }

    int q;
    cin>>q;

    while(q--){
        cout<<"Enter Sub String" <<endl;
        string s;
        cin>>s;


        cout << givelastIndex(indices,s)<<endl;
    }

}
