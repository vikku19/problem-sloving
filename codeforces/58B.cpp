#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<n/i<<" ";
			n/=i;
		}
	}
	return 0;
}