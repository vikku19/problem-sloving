#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define REPJ(j,n) for(int j=0;j<n;j++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define REPJ1(j,n) for(int j=1;j<=n;j++)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb() push_back()
#define eb() emplace_back()
#define vll vector<ll>
#define v  vector<int>
int main()
{
	IOS;
	test{
		ll n,z;
		cin>>n>>z;
        vll vec;
		int a[n];
		REP(i,n){
			cin>>a[i];
            vll.eb(a[i]);
		}
        sort(vec.begin(),vec.end(),greater<int>());
        for(int i=0;i<n;i++){
            if(a[i]>=z){
                cout<<"1"<<"\n";
                break;
            }else if(a[i]<z){
                z=z-a[i];
                a[i]=a[i]/2;
                ll mx=max_element(vec.begin(0,vec.end()));
                
            }
        }
	}
	re;
}
