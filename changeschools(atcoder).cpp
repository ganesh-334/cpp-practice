#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    vector<int> clscnt(k+1,0);
    for(int i=0;i<n;i++){
        int cl;cin>>cl;
        clscnt[cl]++;
    }
    int maxi=*max_element(clscnt.begin(),clscnt.end());
    int canjoin=0;
    for(int cl=1;cl<=k;cl++){
        if(clscnt[cl]>=(maxi-1)){
            canjoin++;
        }
    }
    cout<<canjoin;
}
