#include "iostream"

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i=0 ; i<s.length() ; i++){
            for(int j=0 ; j<s.length() ; j++){
                if(s.at(i) != t.at(j)){
                    return t.at(j);
                    break;
                }
                else{
                    return t.at(t.length());
                }
            }
        }
    }
};


int main(){
    Solution s;
    cout<< s.findTheDifference("abcd" , "afcd");
    
    
}
