#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    map<int, bool> visited;
    vector<int> arr(n);
    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
        visited[arr[i]] = false;
    }

    
    for(int i = 0 ; i < n ; i++){
        if(visited[arr[i]] == false){
            cout<<arr[i]<<" ";
            visited[arr[i]] = true;
        }
    }

}