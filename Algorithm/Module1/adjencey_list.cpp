#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cin>>n>>e;
    vector<int> mat[n];
    while(e--){
        int a,b;
        cin>>a>>b;

        mat[a].push_back(b);
        mat[b].push_back(a);

    }



  for(int i=0;i<n;i++){
    cout<<i<<"-is connected with: ";
    for(int j=0;j<mat[i].size();j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
    return 0;
}