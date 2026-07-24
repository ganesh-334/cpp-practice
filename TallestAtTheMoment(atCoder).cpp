#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        int h,t;cin>>h>>t;
        a[i]=make_pair(h,t);
    }
    sort(a.begin(),a.end(),greater<>());
    int till=0;
    vector<int> tarr,harr;
    for(auto[h,l]:a){
        if(l<=till)continue;
        till=l;
        tarr.push_back(l);
        harr.push_back(h);
    }
    int q;cin>>q;
    while(q--){
        int qt;cin>>qt;
        auto it=upper_bound(tarr.begin(),tarr.end(),qt);
        int i=it-tarr.begin();
        cout<<harr[i]<<endl;
    }
}

