#include<iostream>
#include<stdlib.h>

using namespace std;

class Solution {
public:
    int maxSubArray(int nums[], int size) {
        int sum = 0;
        int max = nums[0];
        for(int i = 0 ; i < size ; i++){
            
            for(int j = i; j < size ; j++){
                sum = sum+nums[j];
                //cout<<sum<<endl;
                if(sum>max){
                max = sum;
            }
        }
        }
        return max;
    }
};

int main(){
    Solution s1; 
    int arr1[9] = {2,1,-3,4,-1,2,1,-5,4};
    cout << "this is the one "<<s1.maxSubArray(arr1 , 8)<<endl;
}