#include<iostream>
#include<stdlib.h>

using namespace std;

class Solution {
public:

    int cube(int n){
        return n*n*n;
    }

    int noOfdigits(int num){
        string s = to_string(num);
        int len = s.length();
        return len;
    }


    int specialNumbers(int nums[], int size) {
        int count=0; 
        

        for(int i = 0 ; i< size ; i++){
                int real = nums[i];
                int sum=0;
            for(int j = 0 ; j < noOfdigits(nums[i]) ; j++){
                int num = real%10; 
                sum = sum + cube(num);
                real = real/10;
            }
            if(sum == nums[i]){
                count++;
            }
        }
        return count;
    }
};


int main(){
    Solution s1; 
    int arr1[3] = {371,5819,66};
    cout << s1.specialNumbers(arr1 , 3) << endl;
}