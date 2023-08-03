// Ek array de rakhi h
// total no of subarray that have a target sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";       // Array ka size input le rhe h
    cin>>n;

    vector<int> arr(n+1,0);
    for(int i = 1 ; i<= n ; i++){     // Array ko input me le rhe h
        cin>>arr[i];
    }

    int targetSum;
    cout<<"Enter target : ";   // Target sum ka input le rhe h
    cin>> targetSum;
    
    int prefixSum = 0;                // variable Prefix sum Jo ki prefix sum ka Record Rkhega
    map<int,int> countNumbers;        // map Jo ki "Har ek value jo prefix sum ki aayegi uska count store krega"

    int ans  = 0;

    for(int i = 0 ; i <= n ; i++){
        prefixSum += arr[i];          // Getting the value of prefix sum at every iteration
        
        countNumbers[prefixSum]++;    // Increasing the count of that number in the map
        
        // FULL EXPLINATION
        // We know that to find any targetSum we have a Equation (P[R] - P[L-1] = Target)
        // here R is the current position and L is the position from where the array will start 
        // ab aagr "P[L-1] = P[R] - target" 
        // Toh jitni baar P[L-1] present hoga (kisme : prefix array m) utni baar hum ye bol sakte h 
        // ki utni sub arrays h jinka sum target sum ke equal hoga

        // Here *find == P[L-1]*
        int find = prefixSum - targetSum;   
        
        int x = countNumbers[find];
        ans += x;
        
    }

    cout<<ans;
    
}