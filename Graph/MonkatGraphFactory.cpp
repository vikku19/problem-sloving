#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int a[n],sum=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }
  if(sum==2*(n-1)){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }
}
