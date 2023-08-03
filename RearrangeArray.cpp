#include <iostream>
using namespace std;

void rearrange(int arr[], int n){

    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]<0){
            count++;
        }
            
    }



    int j = 0;
    int a = 0;
    while (a<=count)
    {
        for(int i = 0 ; i < n ; i++){
            if(arr[i] < 0){
                if(i == 0){
                    j = j+2;
                    count++;
                    }
                else{
                    if(j < i){
                        for(int k = j ; k <= i ; k++){
                            swap(arr[k+1] , arr[j]);
                        }
                        j=j+2;
                        count++;
                    }
                    else {
                        for(int k = j ; k >= i ; k--){
                            swap(arr[k+1] , arr[j]);
                        }
                        j=j+2;
                        count++;
                    }
                }
            }
        }
    }
    }

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{

	int arr[] = { -5, 5, 2, 4, 7, 1, 8, 0, -8 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, n);

	rearrange(arr, n);

	cout << "Rearranged array is \n";
	printArray(arr, n);

	return 0;
}
