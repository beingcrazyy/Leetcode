#include<iostream>

using namespace std;

int main(){
    int arr[5] = { 4, 7, 2, 1, 6};
    int n = 5;
    int max = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<max<<endl;


    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i = 1 ; i <= max ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i <= arr[j]){ 
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout <<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
        for(int j = 0 ; j < arr[i] ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}