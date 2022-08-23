#include<bits/stdc++.h>
using namespace std;

int main(){
     string in;
     cin>> in;
     stringstream oo;

     oo << in;
     int num;
     oo >> num;
     int ct = 0;

     while(num){
        cout<<num<<endl;
       if(num&1)
       num -= 1;
       else
       num >>= 1;
       ct++;
     }

     cout<< ct;
     return 0;
}