#include <bits/stdc++.h>
#define M 1000000007

using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	long p = 1;
	for(int i = 0; i < num; ++i){
		int temp;
		cin>>temp;
		p = ((p%M) * (temp%M))% M;
	}
	cout<<p;
	return 0;
}