#include<iostream>

using namespace std;

int main(){
    int x ;
    cout<<"Enter the size of the edge"<<endl;
    cin >> x;

    for(int i = 1 ; i <= x ; i++){
        for(int k = 1; k <= x-i; k++){
            cout<<"  ";
        }
        for(int j = 1 ; j <= x ; j++){
            if(i == 1 || i == x || j == 1 || j == x){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }




}