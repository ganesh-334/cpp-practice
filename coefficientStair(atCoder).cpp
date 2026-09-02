#include <bits/stdc++.h>
using namespace std;
using combo=array<int,10>;
vector<combo> ans;
void dfs(int slot,int bal,combo arr){
    if(slot==1){
        arr[slot-1]=bal;
        ans.push_back(arr);
        return;
    }
    arr[slot-1]=0;
    while(bal>=0){
        dfs(slot-1,bal,arr);
        arr[slot-1]++;
        bal-=slot;
    }
}
int main(){
    int n,k;cin>>n>>k;
    combo arr;
    dfs(n,k,arr);
    sort(ans.begin(),ans.end());
    for(combo c:ans){
        for(int i=0;i<n;i++){
            cout<<c[i]<<(i+1==n?"\n":" ");
        }
    }
}
