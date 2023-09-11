#include<bits/stdc++.h>
using namespace std;

int main(){

	int n, m, k, ans = 0;
	cin >> n >> m >> k;

	vector<int> a(n), b(m);

	for(int i=0;i<n;i++)cin >> a[i];
	for(int i=0;i<m;i++)cin >> b[i];
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	int i = 0, j = 0;

	while(i < a.size() && j < b.size()){
		if((a[i] == b[j]) || (b[j] >= a[i]-k && b[j] <= a[i]+k)){
			ans++;
			i++;
			j++;
		}
		else if(b[j] > a[i]) 
			i++;
		else 
			j++;
	}	
	cout << ans << "\n";
}