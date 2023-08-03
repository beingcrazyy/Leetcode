// K bulbs are given 
// position is given 
// Power is given

#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter positions : ";
    cin>>n;

    int k;
    cout<<"Enter the no of bulbs : ";
    cin>>k;

    vector<int> positions(n+2,0);

    vector<int> bulbsPosition(k+1,0);
    for(int i = 1 ; i<= k ; i++){
        cin>>bulbsPosition[i];
    }

    vector<int> power(k+1,0);
    for(int i = 1 ; i<= k ; i++){
        cin>>power[i];
    }

    vector<pair<int,int> >lr(k);

    for(int i = 0 ; i < k ; i++){
        lr[i] = make_pair(bulbsPosition[i+1]- power[i+1] , bulbsPosition[i+1] + power[i+1]);
    }

    int q = k;

    for(int i = 0 ; i < k ; i++){
        int start = max(lr[i].first,1);
        int end = min(lr[i].second,n);

        // cout<<start <<" ";
        // cout<<end<< " ";

       // cout<<endl;

        positions[start] += 1;
        positions[end+1] -= 1;

    }

    vector<int> prefix(n+1);

    int ans = 0;
    for(int i = 1 ; i <= n ; i++){
        prefix[i] = prefix[i-1]+positions[i];
        if(prefix[i] == 0){
            ans++;
        }
    }

     for(int i = 1 ; i <= n ; i++){
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
    
    cout<<ans;
    
}