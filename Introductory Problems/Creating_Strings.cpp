#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> taken;
set<string> st;

void solve(string s,string &a){

    if(a.size() == s.size()){
        st.insert(a);
        return;
    }
    for(int i=0;i<s.size();i++){
        if(taken.find(i) == taken.end()){
            taken[i]++;
            a.push_back(s[i]);
            solve(s,a);
            a.pop_back();
            taken.erase(i);
        }
    }
}

int main(){

	string s,a;
	cin >> s;
	solve(s,a);
	cout<< st.size() <<"\n";
	for(auto e : st){
		cout << e << "\n";
	}

}