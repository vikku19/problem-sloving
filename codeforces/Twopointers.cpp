
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define ld long double
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define per(i,n,a) for(ll i=n-1;i>=a;i--)
#define rep1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define all(x) (x).begin(),(x).end()
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define pi 3.1415926535897932384626433832795
#define mp(x,y) make_pair(x,y)
#define vii  vector<int>
#define pii  pair<int,int>
#define pll pair<ll,ll>
#define mpii map<int,int>
#define vll vector<ll>
#define mpll map<ll,ll>
#define vpi  vector<pii>
#define umpll unordered_map<ll,ll>
#define pqi  priority_queue<int>
#define umpii unordered_map<int,int>
#define pb push_back
#define eb emplace_back
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18;
template<class T>
T min(T x,T y){
//Min function template
    return(x<y)?x:y;
}
//Number(n) of Digits in base(b)=floor(logb(n))+1
//char to integer (char-'0')
//Integer to char (char+'0')
int n,m;
void read(){
    cin>>n>>m;
    vii a(n),b(m),c(n+m);
    rep(i,0,n){
        cin>>a[i];
    }
    rep(i,0,m){
        cin>>b[i];
    }
    //1st method
    // a.push_back(INT_MAX);
    // b.push_back(INT_MAX);
    // int i=0,j=0;
    // while(i<n || j<m){
    //     if(a[i]<b[j]){
    //         c[i+j]=a[i];
    //         i++;
    //     }else{
    //         c[i+j]=b[j];
    //         j++;
    //     }
    // }
    // rep(i,0,n+m){
    //     cout<<c[i]<<" ";
    // }

    //2nd Method
    int i=0,j=0;
    while(i<n || j<m){
        if((a[i]<b[j] && i<n) || j==m){
            c[i+j]=a[i];
            i++;
        }else{
            c[i+j]=b[j];
            j++;
        }
    }
    for(int i:c){
        cout<<i<<" ";
    } 
}
int main(){
    IOS;
    // test{
       read();
    // }
}
