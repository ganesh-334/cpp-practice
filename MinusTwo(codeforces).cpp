#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int odd=0,codd=0,ceven=0;
    for(int i=0;i<n;i++){
        int curr; cin>>curr;
        if(curr%2!=0){
            odd++;
        }
        else{
            if((curr/2)%2==0){
                ceven++;
            }
            else{
                codd++;
            }
        }
    }
    cout<<max(odd,max(codd,ceven))<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
