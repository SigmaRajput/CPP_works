#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    // int n = arr.size
    cout<<"\n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<< " ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n]; //,prr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        //prr[n-i-1]=arr[i];
    }
    printarray(arr,n);
    for(int i=0; i<n/2; i++) for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    {
        swap(arr[i], arr[n-i-1]);
    }
    printarray(arr,n);
   
    return 0;
} 

