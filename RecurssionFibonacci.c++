#include <iostream>

using namespace std;

int Fib1 (int n , int t1=0 , int t2=1){
    Fib1(n-1,t2,t1+t2);
    return t1;
}

int Fib2 (int n , int t1=0 , int t2=1){
    int f1 = t2;
    int f2 = t1+t2;
    Fib2(n-1,f1,f2);
    return f1;
}

int Fib3 (int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    cout<<n<<endl;
    return Fib3(n-1)+Fib3(n-2);
}

int main(){
        cout<<Fib1(5)<<endl;
        cout<<Fib2(5)<<endl;
        Fib3(5);
}




/*

case 1 = n=5 , t1=0 , t2=1 , output=0
case 2 = n=4 , t1=1 , t2=1 , output=1
case 3 = n=3 , t1=1 , t2=2 , output=1
case 4 = n=2 , t1=2 , t2=3 , output=2
case 5 = n=1 , t1=3 , t2=5 , output=3
case 6 = n=0 , t1=5 , t2=8 , output=5


*/

