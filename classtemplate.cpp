#include<iostream>
using namespace std;

template <typename datatype> class price{
    private:
        int noOfModels;
        datatype *models;
    
    public:
        int getModels(int s){
            s=noOfModels;
            models = new datatype[noOfModels];
            //cout<<sizeof(models);
        }

        int putPrice(datatype MRP){
            *models = MRP;
            models = (models + 1);
        }

        int getPrice(){
            for(int i = 0; i <= noOfModels ; i++)
            return *models
            models = (models + 1);
        }

};

int main(){

    price <float> Samsung;
    Samsung.getModels(4);
    Samsung.putPrice(30000);
    Samsung.putPrice(40000);
    Samsung.putPrice(1000000);
    Samsung.getPrice;

    else if (/* condition */)
    {
        /* code */
    }
    


    /*int s;
    cin >> s;
    
    int arr[s];
    cout<< sizeof(arr);
    */
   return 0;
}
