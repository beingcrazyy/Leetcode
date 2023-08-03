#include<iostream>
#include<vector>

using namespace std;


bool isPossible(vector<int> &stalls, int k , int mid){
    int n = stalls.size();

    int cows = 1;
    int position = 1;
    int i = 0;
    while(position<n){
        if(stalls[position]-stalls[i]>=mid){
            cows++;
            i = position;
            if(cows == k){
                return true;
            }
            position++; 
        }
        else{
            position++;
        }
    }
    
    return false;
}

int findMax(vector<int>& arr){
    int maxi = arr[0];

    for(int i = 0 ; i < arr.size() ; i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
} 

int findMin(vector<int>& arr){
    int mini = arr[0];

    for(int i = 0 ; i < arr.size() ; i++){
        mini = min(mini,arr[i]);
    }
    return mini;
} 




int aggressiveCows(vector<int> &stalls, int k)
{
    int n = stalls.size();

    int s = 0;
    int e = findMax(stalls) - findMin(stalls);
    cout<<e<<endl;
    

    int mid = s + (e-s)/2;
    cout<<mid<<endl;

    int ans = -1;

    while(s<=e){
        if(isPossible(stalls,k,mid)){
            ans = mid;
            cout<<ans<<endl;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    cout<<ans<<endl;
    return ans;
}

int main(){

    vector<int> stalls = {0,3,4,7,10,9};
    
    
    aggressiveCows(stalls,4);


}