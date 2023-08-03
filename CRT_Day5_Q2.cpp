#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;

    cout<<"Enter array" <<endl;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    map<int,vector<int>> indices;
    for(int i = 0 ; i < n; i++){
        indices[arr[i]].push_back(i);
    }

    cout<<"Enter Desired Capacity"<<endl;
    int k;
    cin>>k;

    int ans = 0;
    for(int i = 0 ; i < n-1; i++){
        int product = arr[i]*arr[i+1];
        if(k%product != 0) continue;
        int div = k/product;

        if(product == 0 && k != 0) continue;
        if(product == 0 && k == 0){
            ans+= n-2;
            continue;
        }

        ans+= (upper_bound(indices[div].begin() , indices[div].end() ,i-1) - lower_bound(indices[div].begin() , indices[div].end() , 0));
        ans+= (upper_bound(indices[div].begin() , indices[div].end() ,n-1) - lower_bound(indices[div].begin() , indices[div].end() , i+2));
    }

    for(int i = 0 ; i < n-2 ; i++){
        if(arr[i] * arr[i+1] * arr[i+2] == k){
            ans--;
        }
    }
    cout<<ans<<endl;
}
 