#include <iostream>

using namespace std;

int Fib(int n){
    int f;
    for(int i = 0 ; i <= n ; i++){
        
        if(i==0){
            f=0;
        }
        else if(i==1){
            f=1;         
        }
        else{
            f=(i-1) + (i-2);
        }
    }
    return f;
}

int main(){
    int n;
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        cout<<Fib(i)<<endl;
    }
    
    
    
    return 0;
}