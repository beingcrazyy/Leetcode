#include<iostream>
using namespace std;

int binarySearch(int arr[], int size , int key){
    
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}

int main(){

    int even[8] = {1,9,12,18,24,27,34,47};
    int odd[9] = {1,4,9,13,16,19,34,44,59};

    int index = binarySearch(even,8,34);
    cout << index <<endl;

    index = binarySearch(odd,9,19);
    cout << index <<endl;
    
}