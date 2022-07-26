#include<bits/stdc++.h>
using namespace std;



static bool compare(vector<int> &a, vector<int> &b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& bT, int truckSize) {
        sort(bT.begin(), bT.end(), compare);
        for(auto i: bT)
            cout<<i[0]<<" "<<i[1]<<endl;
        return 8;
    }

    int main(){
         vector<vector<int> > A ={{5,10},{2,5},{4,7},{3,9}};
         cout<< maximumUnits(A, 4);
        return 0;
    }