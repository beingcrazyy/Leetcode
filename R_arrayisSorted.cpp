#include<iostream>
using namespace std;

bool isSorted(int *arr , int size){

    if(size == 1){
        return true;
    }

    if(arr[size-2] > arr[size-1]){
        return false;
    }
    else{
        return isSorted(arr , size-1);
    }

}

int main(){
    int arr[6] = { 1 , 4 , 8 , 9 , 12 , 34};
    int n = 6;
    cout<<isSorted(arr,n);
    
}