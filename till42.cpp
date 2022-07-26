#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int n;
	vector<int> store, out;
	while(cin>>n)
	store.push_back(n);
	
	for(int &i: store){
		if(i == 42) break;
		cout<<i<<"\n";
	}
	
	return 0;
}