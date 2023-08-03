// EK array me asi konsi sub array h jiska sum MAX h aur
// uske corrosponding binary array ki subarray ka jo sum h 0 hona chaaiye
// MAX answer krna h

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;

    vector<int> binary(n+1,0);
    for(int i = 1 ; i<= n ; i++){
        cin>>binary[i];
    }

    vector<int> arr(n+1,0);
    for(int i = 1 ; i<= n ; i++){
        cin>>arr[i];
    }

    vector<int> prefixSumBinary(n+1, 0);
    vector<int> prefixSumarr(n+1 ,0);

    for(int i = 1 ; i<= n ; i++){
        prefixSumBinary[i] = prefixSumBinary[i-1] + binary[i];
    }
    for(int i = 1 ; i<= n ; i++){
        prefixSumarr[i] = prefixSumarr[i-1] + arr[i];
    }
    
    map<int,int> countMin;
    int maxi = -1e6;

    for(int i = 0 ; i <= n ; i++){
        if(countMin.count(prefixSumBinary[i])){
            if(countMin[prefixSumBinary[i]] > prefixSumarr[i]){
                countMin[prefixSumBinary[i]] = prefixSumarr[i];
            }
            else{
                maxi = max(maxi, prefixSumarr[i] - countMin[prefixSumBinary[i]]);
            }
        }
        else{
            countMin[prefixSumBinary[i]] = prefixSumarr[i];
        }
    }
    
    cout<<"The maximum is : " << maxi;
}