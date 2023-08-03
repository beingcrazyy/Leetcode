#include<iostream>


using namespace std;

void countSort(int arr[], int n){
    int maxi = -100;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }

    int count[maxi+1] = {0};

    for(int i = 0 ; i < n ; i++){
        int number = arr[i];
        count[number]++;
    }

    int j = 0;
    for(int i = 0 ; i < n ; i++){
        while(count[j] == 0){
            j++;
        }
        arr[i] = j;
        count[j]--;
    }


    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = 8;
    countSort(arr,n);
}

