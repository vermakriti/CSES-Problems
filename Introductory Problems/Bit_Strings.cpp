#include<bits/stdc++.h>
using namespace std;

int main(){

	long long n, ans = 1, mod = 1e9+7;
	cin >> n;

	while(n--){
		ans = (2*ans)%mod;
	}
	cout << ans << "\n";

}