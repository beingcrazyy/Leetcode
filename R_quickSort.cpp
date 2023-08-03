#include<iostream>
#include<vector>

using namespace std;

int place(vector<int>& arr, int start, int end){
    int element = arr[start];
    int count = 0;
    for(int i = start+1 ; i <= end ; i++){
        if(arr[i] <= element){
            count++;
        }
    }

    int index = start + count;
    swap(arr[start] , arr[index]);


    int i = start;
    int j = end;

    while(i<index && j>index){
        while(arr[i] <= element){
            i++;
        }
        while(arr[j] > element){
            j--;
        }

        if(arr[i]>element && arr[j]<element){
            swap(arr[i],arr[j]);
        }
    }
    return index;
}

void quickSort(vector<int>& arr, int start, int end){
    if(start >= end){
        return;
    }

    int index = place(arr,start,end);

    quickSort(arr,start,index-1);
    quickSort(arr,index+1,end);
}

int main(){
    vector<int> arr= { 1 , 19, 8 , 12 , 34};
    int n = 5;
    quickSort(arr,0,n-1);

    vector<int> arr2 = {3,2,244,23,2432,42,1,57,4,43};
    int n2 = 10;
    quickSort(arr2,0,n2-1);

    vector<int> arr3 = {2,5,3,9,18,1,28};
    int n3 = 7;
    quickSort(arr3,0,n3-1);


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