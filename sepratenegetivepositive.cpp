#include <bits/stdc++.h>
using namespace std;

void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[] = {};
    int i=0;
    int j;
    
    
    for(j = 0 ; j < 6 ; j++){
        if(arr[j] < 0){
            if(j!=i){
                swap(arr[j],arr[i]);
            }
            i++;
        }
    }
    

    for(int i = 0; i< 6; i++){
        cout << arr[i]<<" ";
    }
	

	return 0;
}