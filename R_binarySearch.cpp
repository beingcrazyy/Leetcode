#include<iostream>
using namespace std;

int BinarySearch(int *arr,int start , int end , int target)
{
   
    int mid = start+(end-start)/2;

    if(start>end){
        return -1;
    }

    if(arr[mid] == target){
        return mid+1;
    }
    else if(arr[mid] > target){
        return BinarySearch(arr , 0 , mid -1 , target); 
    }
    else{
        return BinarySearch(arr , mid+1 , end , target); 
    }
    
}

int main(){
    int arr[9] = { 1 , 4 , 8 , 9 , 12 , 34 , 94 ,98, 100 };
    int n = 9;
    cout<<BinarySearch(arr,0 , n-1, 98);
}
