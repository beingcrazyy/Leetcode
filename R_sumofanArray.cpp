#include<iostream>
using namespace std;

int sum(int *arr , int size){
    if(size == 1){
        return arr[0];
    }

    return arr[size-1]+sum(arr,size-1);
}

int main(){
    int arr[6] = { 1 , 4 , 8 , 9 , 12 , 34};
    int n = 6;
    cout<<sum(arr,n);
    
}