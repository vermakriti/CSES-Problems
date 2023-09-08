#include<bits/stdc++.h>
using namespace std;

int main(){

	long long n;
	cin >> n;

	if(n == 2 || n == 3) cout <<"NO SOLUTION";
	else{
		vector<int> ans;
		for(int i=2;i<=n; i+=2)ans.push_back(i);	
		for(int i=1;i<=n; i+=2) ans.push_back(i);	
		for(auto e : ans)cout << e << " ";	
	}
}