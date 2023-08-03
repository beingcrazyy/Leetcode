#include<iostream>
#include <bits/stdc++.h> 
#include<vector>

using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    sort(arr.begin(),arr.end());

    int max = arr[n-1];

    for(int i = n-2 ; i >= 0 ; i-- ){
        if(max>arr[i]){
            cout<<arr[i]<<endl;
            return arr[i];
            break;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-10, -40, -25, -12, -25, -10};
    sort(arr.begin(),arr.end());

    findSecondLargest(arr.size(), arr);

    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}
