
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,a,n) for(ll i=a;i<n;i++)
#define PER(i,n,a) for(ll i=n;i>a;i--)
#define REP1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define PI 3.1415926535897932384626
#define MOD (ll)1000000007
#define fi first
#define se second
#define eb emplace_back
#define vll vector<ll>
#define vi  vector<int>
#define mpll map<ll,ll>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll MAXI = (ll)1e9+7;
int main(){
    IOS;
//    test{
        int n,m;
        cin>>n>>m;
/*        int ar[n];
        REP(i,a,n){
           cin>>ar[i];
        }
        */
        int p=0;
        int vec[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
        REP(i,0,15){
            if(vec[i]==n && vec[i+1]==m){
                p++;
                break;
            }
        }
        if(p!=0){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
//    }
re;
}
