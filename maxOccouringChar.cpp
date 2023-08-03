#include<iostream>
using namespace std;



char getMaxchar (string s){
    int arr[26] = {0};

    for(int i = 0 ; i <= s.length() ; i++){
        char ch = s[i];
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
        arr[number]++;
       // cout << number<<endl;
       // cout<<arr[number]<<endl;
    }

    int max = -1 , ans = 0; 
    
    for (int i = 0; i <= 26; i++){
        if(max <= arr[i]){
            max = arr[i];
            ans = i;
        }
        //cout<<i<<endl;
    }
    char FinalAns = ans+'a';
    //cout<<FinalAns;
    cout<<"No. of Occourance : "<< max <<endl;
    return FinalAns;
    

}

int main(){
    string s;
    cin>> s;
    cout<<getMaxchar(s);
}