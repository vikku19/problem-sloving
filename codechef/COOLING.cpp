#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int phi (int n) {
	int result = n;
	for (int i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}
int main(){
    int t,n;cin>>t;while(t--){
        cin>>n;
        cout<<phi(n);
    }
}