#include<bits/stdc++.h>
using namespace std;

// declarsation

int main()
{
    int sum=0;
    //int temp=0;
int n;   // variable 
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
{
    cin>>arr[i];
    if(i>0)
    if(arr[i]%i==0)
    sum=sum+arr[i];
    //else
    //temp=temp+arr[i];
}
    
cout<<sum<<endl;
return 0;

  

} 