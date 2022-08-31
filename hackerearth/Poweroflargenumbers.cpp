// CPP program to find (a^b) % MOD where a and 
// b may be very large and represented as strings. 
#include <bits/stdc++.h> 
using namespace std; 

#define ll long long int 
const ll MOD = 1e9 + 7; 

// Returns modulo exponentiation for two numbers 
// represented as long long int. It is used by 
// powerStrings(). Its complexity is log(n) 

ll powerLL(ll x, ll n) 
{ 
	ll result = 1; 
	while (n) { 
		if (n & 1) 
			result = (result%MOD*x%MOD)%MOD; 
		n = n / 2; 
		x = (x%MOD * x % MOD)%MOD; 
	} 
	return result; 
} 

// Returns modulo exponentiation for two numbers 
// represented as strings. It is used by 
// powerStrings() 
ll powerStrings(string sa, string sb) 
{ 
	// We convert strings to number 

	ll a = 0, b = 0; 

	// calculating a % MOD 
	for (int i = 0; i < sa.length(); i++) 
		a = (a * 10 + (sa[i] - '0')) % MOD; 

	// calculating b % (MOD - 1) 
	for (int i = 0; i < sb.length(); i++) 
		b = (b * 10 + (sb[i] - '0')) % (MOD - 1); 

	// Now a and b are long long int. We 
	// calculate a^b using modulo exponentiation 
	return powerLL(a, b); 
} 

int main() 
{ 
    int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		string sa,sb;
		sa=to_string(a);
		sb=to_string(b);
		cout << powerStrings(sa, sb) << endl; 
	}
	// As numbers are very large 
	// that is it may contains upto 
	// 10^6 digits. So, we use string.  
//    string sa=to_string(str);
//    string sb=to_string(str1);
	
	return 0; 
} 
