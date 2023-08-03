#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;

    vector<int> arr(n+2,0);

    // 0 0 0 0 0 0 0 0 0  L = 2 , R = 5
    // 0 0 1 1 1 1 0 0 0 

    int q;
    cout<<"Enter the no of quries :";
    cin>>q;

    while(q--){
        cout<<"Enter start and and till " << n << ": ";
        int start;
        int end;
        cin>>start;
        cin>>end;

        arr[start] += 1;
        arr[end+1] -= 1;
    }

    vector<int> ans(n+1);
    for(int i = 1 ; i <= n ; i++){
        ans[i] = ans[i-1] + arr[i];
    }

    for(int i = 1 ; i <= n ; i++){
        cout<<ans[i]<<" ";
    }
}