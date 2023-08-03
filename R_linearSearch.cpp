#include<iostream>
using namespace std;

bool LinearSearch(int *arr , int size , int target){

    if(size == 0){
        return false;
    }
    
    if(arr[size-1] == target){
        cout<<size-1<<endl;
        return true;
        
    }
    else{
        return LinearSearch(arr , size-1 , target);
    }

}

int main(){
    int arr[6] = { 1 , 4 , 8 , 9 , 12 , 3};
    int n = 6;
    cout<<LinearSearch(arr,n,12);
    
}