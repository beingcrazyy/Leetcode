#include<iostream>
#include <bits/stdc++.h> 
#include<vector>

using namespace std;

class Solution {
public:
long long mostPoints(vector<vector<int>>& questions)
{
    long long ans=0;
    vector<long long> dp(questions.size()+1,0);
    for(int i=questions.size()-1; i >=0; i--){
        for(int i = 0 ; i < dp.size(); i++){
            cout<<dp[i]<<" ";
        }cout<<endl;
        int future=questions[i][1]+i+1;

        if(future>=questions.size()) 
            dp[i]=questions[i][0];
        else 
            dp[i]=questions[i][0]+dp[future];

        dp[i]=max(dp[i], dp[i+1]);
        ans=dp[i];
        cout<<ans<<" ";
        }
        
        return ans;
    }
};

int main(){
    vector<vector<int>> nums = {{21,5},{92,3},{74,2},{39,4},{58,2},{5,5},{49,4},{65,3}};
    Solution s1;
    s1.mostPoints(nums);
}