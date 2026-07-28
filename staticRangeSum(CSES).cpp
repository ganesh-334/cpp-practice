#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<int> X(N),P(N+1,0);
    for(int i=0;i<N;i++){
        cin>>X[i];
    }
    for(int i=1;i<=N;i++){
        cin>>P[i];
        P[i]=P[i]+P[i-1];
    }
    int Q;cin>>Q;
    while(Q--){
        int lt,rt; cin>>lt>>rt;
        long long int ans=0;
        auto lb=lower_bound(X.begin(),X.end(),lt);
        auto ub=upper_bound(X.begin(),X.end(),rt);
        lt=lb-X.begin();
        rt=ub-X.begin();
        ans=P[rt]-P[lt];
        cout<<ans<<endl;
    }
}
