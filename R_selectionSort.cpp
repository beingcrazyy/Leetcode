#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& arr ,int s, int n ){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     if(s == n-1){
        return;
    }

    for(int i = s+1 ; i < n ; i++){
        if(arr[s] > arr[i]){
            swap(arr[s],arr[i]);
        }
    }

    selectionSort(arr , s+1, n);
    
}

int main(){

    cout<<endl;
    cout<<endl;

    vector<int> arr= { 1 , 19, 8 , 12 , 34};
    int n = 5;
    selectionSort(arr,0,n);

    cout<<endl;
    cout<<endl;

    vector<int> arr2 = {3,2,244,23,2432,42,1,57,4,43};
    int n2 = 10;
    selectionSort(arr2,0,n2);
    cout<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0 ; i < n2 ; i++){
        cout<<arr2[i]<<" ";
    }
    
}