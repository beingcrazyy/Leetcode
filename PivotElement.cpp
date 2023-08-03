#include<iostream>
#include<vector>

using namespace std;

int getPivot(int arr[], int n) {

    int s = 0;s
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

/*
    int search(vector<int>& nums, int target) {

        int pivotElement = pivot(nums) ;
        int size = nums.size();

            int start;
            int end;
        
        if(target>nums[size-1]){
            start = 0;
            end = pivotElement-1;
        }
        else{
            start = pivotElement;
            end = size;
        }

        int mid = start+(end-start)/2;

        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start+(end-start)/2;
        }

    return -1;
    }
*/
int main(){

    int any[4] = {1,1,2,1};
    int ans = getPivot(any , 4);

    cout<<ans<<endl;

    //int mainAns = search(any,15);
    //cout<<mainAns<<endl;
}