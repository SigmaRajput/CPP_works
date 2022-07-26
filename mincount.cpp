#include<bits/stdc++.h>
using namespace std;

int find_mid(vector<int> &n, int s , int e){
        int mid = (s+e)/2;
        auto it = find(n.begin(), n.end(), mid);
        if(it != n.end())
            return mid;
        

        int v = 0;
        v = find_mid(n, s, mid);
        if(v != 0)
        return v;
        int v1 = 0;
        v1 = find_mid(n, mid, e);--------------------------------   
        if(v1 != 0)
        return v1;
        return 0;
    }
    int minMoves2(vector<int>& nums) {
        int res = 0;
        if(nums.size() == 0)
            return 0;
        sort(nums.begin(), nums.end());
        int v = find_mid(nums, nums[0], nums[nums.size()-1]);
        cout<< v;
        for(auto i: nums){
            res = res + abs(i-v);
        }
        return res;
    }

    int main(){
        vector<int> n ={1,2,5,8,0};
        cout<<minMoves2(n);
        return 0 ;
    }