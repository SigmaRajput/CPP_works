#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<int> res;
	while(n--){
        string s1,s2;
        cin>>s1;
        cin.ignore();
        cin>>s2;
        unordered_map<char, int> m;
        

        for(char& c: s1)
        m[c]++;

        for(char& c:s2)
        m[c]--;

        int sum = 0;

        for(auto& it: m){
           sum += abs(it.second); 
        }

        int max_size = max(s1.size(), s2.size());
        if(sum > max_size)
        res.push_back(0);
        else
        res.push_back(max_size - sum);
	}
	
	for(int &i: res)
	cout<<i<<endl;
	return 0;
}
