#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no of elements :"<<endl;
    cin>>n;

    //Stactic allocation using stack memory
    int arr[n] = {};
    arr[1] = 40;
    arr[2] = 50;

    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

    // here free(arr); will not work

//    cout<<arr[1]<<endl;
//    cout<<arr[2]<<endl;

    //Dynamic allocation using heap memory
    int *nums = (int *) malloc(n*sizeof(int));
    *nums = 40;
    *(nums + 1) = 50;

    cout<<*nums<<endl;
    cout<<*(nums+1)<<endl;

    free (nums);

    cout<<*nums<<endl;
    cout<<*(nums+1)<<endl;

return 0;
}