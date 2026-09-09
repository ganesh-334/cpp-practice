#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n; cin>>n;
    int st=1,en=10;
    for(int i=1;i<=n;i++){
        int curr;cin>>curr;
        if(!(curr>=st && curr<=en)){
            cout<<"NO";
            return;
        }
        if(i%10==0){
            st+=10;
            en+=10;
        }
    }
    cout<<"YES";
}
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}
