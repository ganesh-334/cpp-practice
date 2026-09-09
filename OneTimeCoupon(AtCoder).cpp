#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    long long base = 0;
    int mini = 2e9;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
        base += arr[i].first;
        mini = min(mini, arr[i].first);
    }
    sort(arr.begin(), arr.end(), [](const pair<int, int>& a,
    const pair<int, int>& b) {
        return a.first - a.second > b.first - b.second;
    });
    long long ans = base;
    for (int i = 1; i <= n; i++) {
        base -= arr[i - 1].first;
        base += arr[i - 1].second;
        int remaining = n - i;
        long long curr = base;
        if (i > remaining) {
            curr += 1LL * (i - remaining) * mini;
        }
        ans = min(ans, curr);
    }
    cout << ans << '\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
