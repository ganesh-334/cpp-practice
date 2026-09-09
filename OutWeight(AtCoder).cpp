#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
        int n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    long long int am=0,bm=0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]) am+=(a[i]-b[i]);
        else if(a[i]<b[i]) bm+=(b[i]-a[i]);
    }
    if(am==0){
        cout<<"No"<<endl;return;
    }
    long long int amw=(bm/am)+2;
    vector<long long int> ans;
    for(int i=0;i<n;i++){
        if(a[i]<=b[i]) ans.push_back(1);
        else ans.push_back(amw);
    }
    cout<<"Yes" <<endl;
    for(long long int wt:ans) cout<<wt<<" ";
    cout<<endl;
}
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}
