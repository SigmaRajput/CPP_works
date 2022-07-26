#include<bits/stdc++.h>
using namespace std;

    void reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int> > ans;
        int ct =0 ;
        sort(people.begin(),people.end());
        for(vector<int> i:people){
            for(int j:i){
                ct++;
                cout<<j<<" ";
            }
            cout<<"\n";
        }
        cout<<ct<<"\n";
    }
int main(){
    vector<vector<int> > ac ={{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
    reconstructQueue(ac);
    return 0;
}