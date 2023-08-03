#include<iostream>
using namespace std;

bool isSorted(int arr[] , int n){
    bool flag = true;
    if(n == 0){
        return true;
    }

    if(arr[n] < arr[n-1]){
        flag = false;
    }

    isSorted(arr , n-1);
    return flag;
}

int main(){
    int arr[6] = {1,4,5,8};
    cout<<isSorted(arr,6);
}