#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int n ;
    cin>>n;

    vector<int> arr(n+1,0);
    for(int i = 1 ; i <= n ; i++){
        cin>>arr[i];
    }

    map<int,vector<int> > occ;

    for(int i = 1 ; i <= n ; i++){
        occ[arr[i]].push_back(i);
    }

    int q;
    cin>>q;

    while(q--){
        int x;
        cout<<"Enter the value :";
        cin>>x;

        int y;
        cout<<"Enter the index after which you want the value :";
        cin>>y;

        int z;
        cout<<"Enter the index before which you want the value :";
        cin>>z;

        int s = 0;
        int e = int(occ[x].size());

        int mid = (s+e)/2;

        
        int firstOccIdx = -1;
        while(s<=e){
            if(occ[x][mid] >= y){
                firstOccIdx = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }

            mid = (s+e)/2;
        }

        int lastOccIdx = -1;

        s = 0;
        e = (int)occ[x].size()-1;

        mid = (s+e)/2;
        while(s<=e){
            if(occ[x][mid] > z){
                e = mid - 1;
            }
            else{
                lastOccIdx = mid;
                s = mid + 1;
            }

            mid = (s+e)/2;
        }
        int ans = lastOccIdx - firstOccIdx + 1;
        cout<<ans;


    }

}
