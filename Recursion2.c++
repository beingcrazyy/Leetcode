#include<iostream>

using namespace std;

// --------- CODE 2 -----------
// This Must Be used

long long Factorial1(int n){
    if(n == 0){
        return 1;
    }

    return n*Factorial1(n-1);
}





long long Factorial(int n ,int a=1){
    
    if(n==0){
        
        return a;
    }

    a=a*n;
    return Factorial(n-1 ,a);
}

/*

case 1 = n=5 , a=1 output a = 5
case 2 = n=4 , a=5 output a = 5*4 = 20 
case 3 = n=3 , a=20 output a = 20*3 = 60
case 4 = n=2 , a=60 output a = 60*2 = 120
case 5 = n=1 , a=120 output a = 120*1 = 120

*/



int main(){
    cout << Factorial(6) << endl;
    cout << Factorial1(7) << endl;
    return 0;
}



/*

long long Factorial(int n ,int a){
    a=a*(a+1);
    if(n==1){
        
        return a;
    }
    return Factorial(n-1 ,a);
}

----- CODE 1 ------

This Can't be used 

case 1 = n=5 , a=1 output a = 2
case 2 = n=4 , a=2 output a = 2*3 = 6 
case 3 = n=3 , a=6 output a = 6*7 = 54
case 4 = n=2 , a=54 output a = 54*55 = 2970
case 5 = n=1 , a=2970 output a = 2970*2971 = 8823870

*/