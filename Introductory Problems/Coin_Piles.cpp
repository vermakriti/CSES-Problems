#include<bits/stdc++.h>
using namespace std;

int main(){

	long long tc; cin >> tc;

	while(tc--){
		long long a, b;
		cin >> a >> b;

		int mn = min(a,b);
		int mx = max(a,b);

		if(mx > 2*mn)
			cout<<"NO\n";
		else if((a+b)%3 == 0)
			cout << "YES\n";
		else
			cout <<"NO\n";
	}

}