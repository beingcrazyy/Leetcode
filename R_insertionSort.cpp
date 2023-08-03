#include<iostream>
#include<vector>

using namespace std;

void insertionSort(vector<int>& arr, int n, int index){

    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    if(index == n){
        return;
    }

    for(int i = 0 ; i < index ; i++){
        if(arr[i] > arr[index]){
            int temp = arr[index];
            for(int j = index-1 ; j >=i ; j--){
                arr[j+1] = arr[j];
            }
            arr[i] = temp;
            break;
        }
    }

    insertionSort(arr,n,++index);
}

int main(){
    vector<int> arr= { 1 , 19, 8 , 12 , 34};
    int n = 5;
    insertionSort(arr,n,1);

    vector<int> arr2 = {3,2,244,23,2432,42,1,57,4,43};
    int n2 = 10;
    insertionSort(arr2,n2,1);
    cout<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0 ; i < n2 ; i++){
        cout<<arr2[i]<<" ";
    }
    
}