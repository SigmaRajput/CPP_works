#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n , k;
    cin>>n >>k;
    vector<int> A(n);
    for(int i = 0; i < n; ++i){
    cin>>A[i];
    }

    int start,end = -1;
    for(int i = 0; i < n; ++i){
        long sum = 0;
        start = i + 1;
        for(int j = i; j < n; ++j){
            sum += A[j];
            if(sum == k)
            {
                end =  j + 1;
                break;
            }
            else if(sum > k)
            break;
        }
        if(end != -1)
        break;
    }
    cout<< start<<" "<<end;
    return 0;
}