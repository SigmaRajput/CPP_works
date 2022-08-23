#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d", &t);
	vector<basic_string<char> > ans(t);
	while(t--){
		int n;
		cin>>n;
		int A[n][n];
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j)
			cin>>A[i][j];
		}
		int flag = 0;
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n ; ++j){
				if((A[i][j] == A[i][n-j-1]) && (A[i][j] == A[n-i-1][j]))
					continue;
					else{
                        // cout<<"NO";
					flag  += 1;
					break;
				}
			}
			if(flag == 1)
			break;
		}
		if(flag == 1){
			ans.push_back("NO");
			continue;
		}
        ans.push_back("YES");

	}

	for(string s:ans){
		cout<<s<<"\n";
	}
	return 0;
}