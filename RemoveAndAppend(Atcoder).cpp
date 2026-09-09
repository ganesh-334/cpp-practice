#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n,q; cin>>n>>q;
    vector<int> pos(n+1,0);
    for(int i=1;i<=n;i++){
        int curr; cin>>curr;
        pos[curr]=i;
    }
    int nxtidx=n+1;
    while(q--){
        int val; cin>>val;
        pos[val]=nxtidx++;
    }
    vector<pair<int,int>> arr;
    for(int val=1;val<=n;val++){
        arr.push_back(make_pair(pos[val],val));
    }
    sort(arr.begin(),arr.end());
    for(auto [i,j]:arr){
        cout<<j<<" ";
    }
    cout<<endl;
}
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}
