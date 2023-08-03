#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& arr, int start, int end){
    int mid = start+(end-start)/2;

    // creating two array which has to be merged

    vector<int> arr1;
    for(int i = start ; i <= mid ; i++){
        arr1.push_back(arr[i]);
    }

    vector<int> arr2;
    for(int i = mid+1 ; i <= end ; i++){
        arr2.push_back(arr[i]);
    }

    //merge two sorted array

    int i = 0;
    int j = 0;
    int k = start;

    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            arr[k++] = arr1[i++];
        }
        else{
            arr[k++] = arr2[j++];
        }
       
    }

    while(i < arr1.size()){
        arr[k++] = arr1[i++];
    }

    while(j < arr2.size()){
        arr[k++] = arr2[j++];
    }
}

void mergeSort(vector<int>& arr, int start, int end){
    if(start >= end){
        return;
    }

    int mid = start+(end-start)/2;

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,end);

}

int main(){
    vector<int> arr= { 1 , 19, 8 , 12 , 34};
    int n = 5;
    mergeSort(arr,0,n-1);

    vector<int> arr2 = {3,2,244,23,2432,42,1,57,4,43};
    int n2 = 10;
    mergeSort(arr2,0,n2-1);

    vector<int> arr3 = {2,5,3,9,18,1,28};
    int n3 = 7;
    mergeSort(arr3,0,n3-1);


    cout<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0 ; i < n2 ; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    for(int i = 0 ; i < n3 ; i++){
        cout<<arr3[i]<<" ";
    }
}