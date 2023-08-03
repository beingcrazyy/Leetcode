#include <bits/stdc++.h> 
#include<iostream>
#include<vector>

using namespace std;

int allocateBooks(vector<int> arr, int n, int m) {
    
    int start = 0;
    int end = 0;

    for(int i = 0 ; i < n ; i++){
        end = end + arr[i];
    }

    int mid = start + (end-start)/2;

    vector< vector<int> > students;
    
    int i = 0;
    for(int j = 0 ; j < m ; j++){
        vector<int> bookPages;
        int sum = 0;
        while(i < n){
            sum = sum + arr[i];
            cout<<sum<<" ";
            if(sum<=mid){
                bookPages.push_back(arr[i]);
                cout<<bookPages[i] <<" ";
                i++;
            }
        }
        cout<<endl;
        students.push_back(bookPages);
        cout<<"books for students"<<students[i][j] << " ";
    }
    return mid;
}

int main(){
    vector<int> arr = {10,40,50,90,30};
    allocateBooks(arr,5,3);
}