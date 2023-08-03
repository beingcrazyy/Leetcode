#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }

    vector<int> arr2(n);

    arr2 = arr;

    long long int max = INT_MIN;
    int sum = 0;

    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            long long int p = arr[i] * arr[j];
            if(p > max){
                max = p;
                sum = arr[i] + arr[j];
            }
        }
    }

    cout<<sum;

}
