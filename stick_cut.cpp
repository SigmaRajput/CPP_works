#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    if(n == 0 || n & 1){
    cout<< 0;
    return 0;
    }

    n >>= 1;

    if(n&1)
    cout<<(n>>1);
    else
    cout<< (n>>1) -1;
    return 0;
}
