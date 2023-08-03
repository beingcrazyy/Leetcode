#include<iostream>
using namespace std;

void bubbleSort(int *arr , int size){

    if(size == 0){
        return;
    }

    for(int i = 0 ; i < size-1 ; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,size-1);
    
}

int main(){
    int arr[5] = { 1 , 19, 8 , 12 , 34};
    int n = 5;
    bubbleSort(arr,n);

    int arr2[10] = {3,2,244,23,2432,42,1,57,4,43};
    int n2 = 10;
    bubbleSort(arr2,n2);

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0 ; i < n2 ; i++){
        cout<<arr2[i]<<" ";
    }
    
}