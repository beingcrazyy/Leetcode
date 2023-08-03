#include "iostream"

using namespace std;

int runningsum(int num[]){
        int n = sizeof(num)/4;
        int running[n];
        for(int i = 0; i<n;i++){
        if(i==0){
        running[i] = num[i];
        }
        else{
        running[i] = num[i]+num[i-1];
        }
        }
        return running[n];
}

int main(){
    int arr[4]={1,2,3,4};
    runningsum(arr);

    return 0;
}