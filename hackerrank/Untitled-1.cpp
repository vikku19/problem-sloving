#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll BinaryExpo(ll a,ll b) { ll result=1; while(b>0){ if(b%2==1){ result *=a; } a*=a;b/=2; } return result; }
int main(){
    int a,b;cin>>a>>b;
    cout<<BinaryExpo(a,b);
}