#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=0;
    for(int i=0;i<n;i++){
        if(a[i]!=i){
            p++;
        }
    }
    cout<<p<<"\n";
    return 0;
}