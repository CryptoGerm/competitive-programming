#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin >> t;
	
	while (t--) {
	    ll n, k;
	    cin >> n >> k;
	    
	    ll maxm = -1;
	    ll A[n];
	    for (ll i=0; i<n; i++) {
	        cin >> A[i];
	        maxm = max(maxm, A[i]);
	    }
	    
	    ll ans = 0;
	    
	    for (int i=k-1; i<n; i++) {
	        if (A[i] == maxm) {
	            ans += (n-i);
	        }
	    }
	    
	    cout << ans << endl;
	}
	
	return 0;
}
