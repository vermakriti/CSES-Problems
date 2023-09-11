#include<bits/stdc++.h>
using namespace std;
// sorting + two pointer 
int main(){

	long long n, ans = 0; cin >> n;
	vector<long long> a(n);

	for(long long i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());

	long long i = 0, j = 0;
	while(j < n){
		if(a[i] == a[j])j++;
		else{
			ans++;
			i = j;
		}
	}
	ans++;
	cout << ans << "\n";
}