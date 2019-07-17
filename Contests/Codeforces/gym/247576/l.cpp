#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod(string a, int b) 
{ 
    ll ans = 0; 
  
    for (int i = 0; i < a.length(); i++) 
         ans = (ans*10 + (ll)a[i] - '0') % b; 
  
    return ans; 
} 

int main(){
	ll b, ans;
	string a;

	cin >> a;

	scanf(" %lld", &b);

	ans = mod(a, b);

	printf("%lld\n", ans);
	
	return 0;
}