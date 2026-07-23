#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main(){
    int N,T; cin>>N>>T;
    int ans=T;
    vector<int> wall(N+2,0);
    while(T--){
        int lt,rt;
        cin>>lt>>rt;
        wall[lt]++;
        wall[rt+1]--;
    }
    for(int i=1;i<=N;i++){
        wall[i]+=wall[i-1];
        ans=min(ans,wall[i]);
    }
    cout<<ans;

}
