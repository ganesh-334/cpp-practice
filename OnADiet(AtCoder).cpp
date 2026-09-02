#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    long long int k;cin>>k;
    vector<int> arr(n);
    vector<bool> eaten(n,false);
    long long int curr=0;
    for(int i=0;i<n;i++) cin>>arr[i];;
    for(int i=0;i<n;i++){
        if(i>=m && eaten[i-m]){
            curr-=arr[i-m];
        }
        if(arr[i]+curr<=k){
            cout<<"Yes"<<endl;
            eaten[i]=true;
            curr+=arr[i];
        }
        else{
            cout<<"No"<<endl;
            eaten[i]=false;
        }
    }
}
