#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin >> n;

    vector<int> arr(n + 1);
    vector<int> pre(n + 1, 0);
    string ans = "";

    for(int i = 1; i <= n; i++) {
    cin >> arr[i];

    if(arr[i] > 0) {
    pre[max(1, i - arr[i] + 1)]++;

    if(i + arr[i] <= n) {
        pre[i + arr[i]]--;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        pre[i] += pre[i - 1];
    }

    bool possible = true;

    for(int i = 1; i <= n; i++) {
        if(arr[i] != -1) {
            bool val = false;
            if(i - arr[i] >= 1 && pre[i - arr[i]] == 0)
                val = true;
            if(i + arr[i] <= n && pre[i + arr[i]] == 0)
                val = true;

            if(!val) {
                possible = false;
                break;
            }
        }
        char ch=(pre[i] == 0 ? '1' : '0');
            ans+=ch;
        }

        if(!possible) cout << -1 << endl;
        else cout << ans << endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
