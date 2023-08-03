/*
mujhe odd no. of Employees diye hue h 
aur har 2 Employees ki pairing krne ki cost hogi unki skills ka 
abs difference 

toh konsa worker hataya jaaye ki humari jo cost ho vo minimum ho jaayegi

-----------=========TOH CHALIYe SHURU KRTE H=========----------
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int w;
    cout<<"Enter the no of Employees :";
    cin>>w;

    vector<int> skills(w+2,0);
    for(int i = 1 ; i <= w ; i++){
        cin>>skills[i];
    }

    sort(skills.begin()+1 , skills.end()-1);

    if(w%2 == 0){
        int ans = 0;

        for(int i = 1 ; i <= w ; i++){
            if(i%2 == 0){
                ans+= skills[i] - skills[i-1];
            }
        }

        cout<<ans;
    }
    else{
        vector<int> prefix(w+2,0);
        vector<int> suffix(w+2,0);

        for(int i = 1 ; i <= w ; i++){
            int cost;
            if(i%2 == 0){
                cost = skills[i] - skills[i-1];
            }
            else{
                cost = 0;
            }
            prefix[i] = prefix[i-1]+cost;
        }

        for(int i = 1 ; i <= w ; i++){
            cout<<prefix[i]<<" ";
        }
        cout<<endl;

        for(int i = w ; i >= 1 ; i--){
            int cost;
            if(i%2 == 0){
                cost = skills[i+1] - skills[i];
            }
            else{
                cost = 0;
            }
            suffix[i] = suffix[i+1]+cost;
        }

        for(int i = 1 ; i <= w ; i++){
            cout<<suffix[i]<<" ";
        }
        cout<<endl;

        int ans = INT_MAX;

        for(int i = 1 ; i <= w  ; i++){
            int left = i-1;
            if(left % 2 == 0){
                ans = min(ans,prefix[i-1]+suffix[i+1]);
            }
            else{
                ans = min(ans,prefix[i-1]+suffix[i+1]+(skills[i+1] - skills[i-1]));
            }

        }
        
        cout<<ans;
    }
}
