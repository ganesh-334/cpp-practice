#include <bits/stdc++.h>
int hcf(int a,int b){
    return (b==0)?a:hcf(b,a%b);
}
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<hcf(arr[0],arr[n-1])<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
