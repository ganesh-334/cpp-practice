#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int N,Q;
    cin>>N>>Q;;
    vector<long long int> in(N+1,0);
    for(int i=1;i<=N;i++){
        long long int t;
        cin>>t;
        in[i]+=in[i-1]+t;
    }
    while(Q--){
        int lt,rt;
        cin>>lt>>rt;
        long long int ans=0;
        ans=in[rt]-in[lt-1];
        cout<<ans<<endl;
    }
}
