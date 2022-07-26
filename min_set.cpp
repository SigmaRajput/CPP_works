#include<bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin>> n;
    long long sum = (n * 1ll * (n+1))/2;
    // cout<< sum << endl;
    if(sum & 1)
    cout<<1;
    else cout<< 0;

    return 0;
}