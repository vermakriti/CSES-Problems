#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    long long n, tot = 0, sum;
    cin >> n;
 
    vector<long long> s1,s2;
 
    tot = (n*(n+1))/2;
    if(tot&1) cout << "NO\n";
    else{
        sum = tot/2;
        long long i = 1, j = n;
        bool flag = true,feasible = false;
        while(i<=j){
            if(flag){
                sum -= j;
                s1.push_back(j--);
                if(sum == 0){
                    feasible = true;
                    break;
                }
                flag = false;
            }
            else{
                sum -= i;
                s1.push_back(i++);
                if(sum == 0){
                    feasible = true;
                    break;
                }
                flag = true;
            }
        }
        if(feasible){
            while(i<=j) s2.push_back(i++);
            cout<<"YES\n";
            cout<<s1.size() << "\n";
            for(auto e : s1)cout << e <<" ";
            cout << "\n";
            cout<<s2.size() << "\n";
            for(auto e : s2)cout << e <<" ";
        }
        else cout << "NO\n";
    }
    return 0;
}