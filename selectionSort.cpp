#include<iostream>
using namespace std;


int main(){
    int arr[7] = {25,4,8,9,41,75,2};
    int n = 7;
    
    for(int i = 0 ; i < n-1; i++){
        int mini = arr[i];
        cout<<mini<<endl;
        for(int j = i ; j<n ; j++){
            if(arr[j] < mini){ 
            mini = arr[j];
            }
        }
        cout<<mini<<endl;
        swap(arr[i],mini);
    }
    
    
    /*
    for(int i = 0 ; i < n-1; i++){
        int mini = i; 
        for(int j = i+1 ; j<n ; j++){
            if(arr[j] < arr[mini]){ 
                mini = j;
            }
        }
        swap(arr[i],arr[mini]); // swap the elements at index i and mini
    }
    */
    
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" "; 
    }
}