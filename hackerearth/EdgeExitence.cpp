#include<bits/stdc++.h>
using namespace std;
int main(){
  int nodes,edges;cin>>nodes>>edges;
  vector<vector<int>>v(nodes);
  for(int i=0;i<edges;i++){
    int a,b;cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  for(int i=0;i<nodes;i++){
    for(int j=0;j<v[i].size();j++){
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
}
