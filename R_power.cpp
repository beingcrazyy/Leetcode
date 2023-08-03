#include<iostream>
using namespace std;

int power(int a , int b){
    if(b == 1){
        return a;
    }
    if(b == -1){
        return 1/a;
    }
    int ans;

    if(b%2==0){
        ans = power(a,b/2)*power(a,b/2);
    }
    else{
        ans = a*power(a,b/2)*power(a,b/2);
    }
    return ans;
}

int main(){
    int a = 2;
    int b = -2;

    cout<<power(a,b);
}