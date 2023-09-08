#include<bits/stdc++.h>
using namespace std;

int main(){

	long long n, mx, count = 0;
	cin >> n;

	vector<int> a(n);
	for(int i=0;i<n;i++) cin >> a[i];

	mx = a[0];
	for(int i=1;i<n;i++){
		if(a[i] < mx) count += mx-a[i];
		else mx = a[i];
	}
	cout << count << "\n";
}