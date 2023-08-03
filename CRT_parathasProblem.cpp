#include<bits/stdc++.h>
//#include <iostream>
using namespace std;

int GetParatha(int rank, int timeGiven, int p){
    int s = 0;
    int e = p;
    int mid = (s+e)/2;

    int ans = 0;
    while(s<=e){
        int timeTaking = (rank*mid*(mid+1))/2;
        if(timeTaking<=timeGiven){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid -1;

        }
        mid = (s+e)/2;
    }
    return ans;
}

int main() {
	int noOfQuerries;
    cin>>noOfQuerries;

    while(noOfQuerries--){
        
        int parathasOrdered;
        cin>>parathasOrdered;

        int noOfCooks;
        cin>>noOfCooks;

        vector<int> rank(noOfCooks);
        int maxRank = 0;
        for(int i = 0; i < noOfCooks ;i++){
            cin>>rank[i];
            maxRank = max(maxRank,rank[i]);
        }

        int s = 1;
        int e = (maxRank*(parathasOrdered)*(parathasOrdered+1))/2;

        int mid = (s+e)/2;
        int ans = 1;

        while(s<=e){
            int noOfParatas = 0;
            for(int i = 0; i < noOfCooks ;i++){
                noOfParatas += GetParatha(rank[i],mid,parathasOrdered);
            }

            if(noOfParatas>=parathasOrdered){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = (s+e)/2;
        }

        cout<<ans<<endl;
    }

	return 0;
}