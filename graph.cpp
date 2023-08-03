#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

class graph{
    int data;
    map<int, vector<int> > edges;

    public:
    void insertData(int data1, int data2, bool isDirected){
        edges[data1].push_back(data2); 
        if(isDirected){
            edges[data2].push_back(data1);
        }
    }

    void printGraph(){
        for(auto itr : edges){
            cout<<itr.first<<" ";
            for(auto jtr : itr.second){
                cout<<jtr<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){

    graph g1;
    g1.insertData(1, 2, 0);
    g1.insertData(2, 3, 0);
    g1.insertData(3, 4, 0);
    g1.insertData(3, 5, 0);
    g1.insertData(3, 6, 0);
    g1.insertData(6, 1, 0);

    g1.printGraph();

}