#include <iostream>
#include <limits.h>
#include <stdlib.h>
using namespace std;

int update(int &a){
    return a++;
}

int main(){

    cout<<INT_MIN<<endl;
    cout<<INT_MAX<<endl;

    int arr[4];
    // checking that weather the address are with the same difference of 4 bytes 
    cout<<&arr<<endl;
    cout<<&arr[1]<<endl;

    //OUTPUT
    //0x61ff00
    //0x61ff04


    // To find that the garbage value is of same size or not
    cout<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;


    /*  
        OUTPUT

        0x61ff00 -- arr prints the address
        1997439597 -- first value has a large garbage value 

        4201408  -|
        6422356  -|=  have garbage value of same length
        4201499  -|=  have garbage value of same length
        4201408  -|
        
        */

    // To find that the garbage value changes or not 
    cout<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[5]<<endl;
    cout<<arr[30]<<endl;

    /*  
        OUTPUT(garbage value does not changes)

        0x61ff00
        1997439597
        4201408
        6422356
        4201499
        4201408 
        6422320
        1977384265 -- even if arr[30] is not initialized even then at that position there is a empty space so we get this garbage value
        
        */

       int arr1[4] = {0};
       for(int i = 0 ; i < 4 ; i++){
        cout<<arr1[i]<<"  ";
       }

       cout<<endl;

       int arr2[4] = {1};
       for(int i = 0 ; i < sizeof(arr2)/sizeof(int) ; i++){
        cout<<arr2[i]<<"  ";
       }
       cout<<endl;

       int arr3[4];
       for(int i = 0 ; i < 4 ; i++){
        cout<<arr3[i]<<"  ";
       } cout<<endl;

int a = 100;
cout<<a<<endl;
update(a);
cout<<a<<endl;


}