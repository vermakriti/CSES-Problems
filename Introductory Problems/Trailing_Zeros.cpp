#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    long long n,zero=0; cin >> n;
 
    for(long long i=5;i<=n;i*=5){
        zero += n/i;
    }
    cout << zero << "\n";
    return 0;
}