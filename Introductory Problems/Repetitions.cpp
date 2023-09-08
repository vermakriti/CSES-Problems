#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin >> s;

	long long i = 0, j = 0, count = 0, n = s.size(), ans = 0;

	while(j<n){
		if(s[i] == s[j]){
			count++;
			j++;
		}
		else{
			ans = max(ans, count);
			count = 0;
			i = j;
		}
	}
	ans = max(ans, count);
	cout << ans << "\n";
}