#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    vector<int> dp(n+1,0);
    int rem=0;
    map<int,int> m;
    m[0]=0;
    for(int i=1;i<=n;i++){
        int curr;cin>>curr;
        rem=(rem+curr)%k;
        if(m.find(rem)!=m.end()){
            dp[i]=max(dp[i-1],1+m[rem]);
        }else{
            dp[i]=dp[i-1];
        }m[rem] = max(m[rem], dp[i]);
    }
    //for(int i=1;i<=n;i++) cout<<dp[i]<<" ";
    cout<<dp[n];
}
