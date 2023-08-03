#include<iostream>
#include<vector>

using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {

        int start = 0;
        int end = arr.size();
        int ans = 0;

        while(start <= end){
            int mid = start + (end-start)/2;
            if(arr[mid+1]>arr[mid]){
                start = mid+1;
            }
            else if(arr[mid-1]>arr[mid]){
                end = mid-1;
            }
            else{
                ans = mid;
            }
        }
        return ans;
    }

    int main(){
        vector<int> ex = {1,10,5,0};
        cout << peakIndexInMountainArray(ex);
    }