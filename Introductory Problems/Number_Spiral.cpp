#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

	int tc; cin >> tc;

	while(tc--){
		ll x, y;
		cin >> x >> y;

		if(x ==1 && y == 1){
			cout<<"1\n";
			continue;
		}

		ll yvalue, xvalue, i = 1,xstep, ystep;

		if(y%2 == 0) {
			yvalue =  (y-1)*(y-1)+1;
			ystep = 1;
		}
		else {
			yvalue = y*y;
			ystep = -1;
		}

		if(x%2 == 0) {
			xvalue = x*x;
			xstep = -1;
		}
		else {
			xvalue = (x-1)*(x-1)+1;
			xstep = 1;
		}

		if(x < y){
			while (i < x){
				yvalue += ystep;
				i++;
			}
			cout << yvalue << "\n";
		}
		else{
			while (i < y){
				xvalue += xstep;
				i++;
			}
			cout << xvalue << "\n";
		}
	}
}