//liner search
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[] = {5,8,9,5,2,3,2,1};
    int no_of_elements;
    no_of_elements = sizeof(arr)/sizeof(arr[0]);
    cout<<no_of_elements<<endl;

    for(int i = 0 ; i <= no_of_elements ; i++){
        if (arr[i] == n) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
