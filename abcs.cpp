#include<bits/stdc++.h>
using namespace std;


int minDeletions(string s) {
        vector<int> al_ct(26);
        int s_size = s.size();
        for(int i = 0; i < s_size; i++){
            al_ct[s[i] - 97]++;
        }
        sort(al_ct.begin(), al_ct.end(), greater<int>());
        int ct = 0;
        vector<int> cp = al_ct;
        for(int i : al_ct)
        cout<<i<<"\n";
        for(int i = 0; i < 25; i++){
            if(al_ct[i] == 0)
                break;
            if(al_ct[i] == al_ct[i+1])
            {
                int v = al_ct[i];
                for(int j = 0; j < 26; ++j){
                    if(v == cp[j] && v!=0){
                        v--;
                        continue;
                    }
                    else if(v > cp[j] || v == 0){
                        ct += (al_ct[i] - v);
                        cp[i] = v;
                        for(int i : cp)
                        cout<<i<<"\t";
                        sort(cp.begin(),cp.end(), greater<int>());
                        break;

                    }
                    else
                        continue;
                }
                
                cout<<"\n";

            }
        }
        return ct;
    }
    int main(){
        cout<<minDeletions("abcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwz");
        return 0;
    }