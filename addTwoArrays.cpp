#include<iostream>
#include<vector>

using namespace std;


vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = 1;
	int digit1 = 0;
	for(int j = n-1; j >= 0; j--){
		digit1 = digit1 + a[j]*i;
		i = i*10;
	}	
    cout << digit1<<endl;
	i = 1;
	int digit2 = 0;
	for(int j = m-1; j >= 0; j--){
		digit2 = digit2 + b[j]*i;
		i = i*10;
	}	

    cout<<digit2<<endl;

	int sum = digit1+digit2;
    cout<<sum<<endl;
	vector<int> ans;

	while(sum){
		ans.push_back(sum%10);
		sum = sum/10;
	}

	return ans;
}

int main(){
    vector<int> a = {1,3,5,0};
    vector<int> b = {3,5,0};

    findArraySum(a,4,b,3);
    //for(int i = 0 ; i < ans.size() ; i++){
//  cout<<ans[i];
  //  }
}