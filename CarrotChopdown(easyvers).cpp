#include <bits/stdc++.h>
int hcf(int a,int b){
    return (b==0)?a:hcf(b,a%b);
}
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    vector<int> cnt(m+1,0);
    for(int i=0;i<n;i++){
        int curr;cin>>curr;
        cnt[curr]++;
    }
    vector<int> psum(m+1,0);
    for(int i=1;i<=m;i++){
        psum[i]=psum[i-1]+cnt[i];
    }
    int ans=0;
    for(int x=1;x<=m;x++){
        int crtcnt=psum[m]-psum[x-1];
        if(2*x<=m){
            crtcnt+=cnt[2*x];
        }
        ans=max(ans,crtcnt);
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
