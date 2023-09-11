#include<bits/stdc++.h>
using namespace std;

int main(){

	int odd = 0;
	map<char,int> count;
	string str, f, s, ans, o;

	cin >> str;
	for(auto e : str)count[e]++;

	for(auto e : count){
		if(e.second&1)odd++;
	}	

	if(1 < odd) 
		ans = "NO SOLUTION";
	else if(count.size() == 1)
		ans = str;
	else{
		for(auto e : count){
			if(e.second%2 == 0){
				string t(e.second/2, e.first);
				f += t;
			}
			else{
				string t(e.second/2, e.first);
				f += t;
				o = e.first;
			}
		}
		s = f;
		reverse(s.begin(),s.end());
		if(odd) ans = f + o + s;
		else ans = f + s;
	}
	cout << ans << "\n";
}