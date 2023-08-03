// EK index pr asi konsi sub array h jo us index pr khatam hoti h aur
// uske corrosponding binary array ki subarray ka jo sum h 0 hona chaaiye

//   1 -1  1 1 -1 1 1 -1  // Binary array
//   1  2 -1 2 -1 3 3  1   // Normal array

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

    /*
    Hume yaha krna kya pdega

    ---- 2 conditions h -----
    1 : ki sum of the binary array ki sub array should be 0
        and we know that
        (P[R] - P[L-1] = Target)
        here target == 0;
        so P[R] (Should be)= P[L-1]

        toh hum phle check krenge ki
        prefixSumBinary[idx] == prefixSumBinary[i]

        ---- with this phli condition Samapt


    2: Agar phli condition satisfy hogi th ase multiple sub array honge
       Ab unme se hume find krna h ki MAX sum kiska hoga
       Now again
       P[R] - P[L-1] = Target
       here we want target to be MAX
       so L-1 should be minimum

       so we will check -> 
       mn = min(mn , prefixSumarr[i]);
    */
    
    int idx;
    cout<<"Enter index : ";
    cin>>idx;

    int mn = 1e5;

    for(int i = 0 ; i <= idx ; i++){
        if(prefixSumBinary[idx] == prefixSumBinary[i]){
            mn = min(mn , prefixSumarr[i]);
        }
    }
    cout<<mn<<endl;

    cout<<prefixSumarr[idx] - mn;
    
}