#include<iostream>
#include<numeric>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int N;cin>>N;
    vector<int> a(N),ans;
    for(int i=0;i<N;i++) cin>>a[i];
    sort(a.begin(),a.end());
    long long int car=0;
    for(int i=1;i<=a[N-1];i++){
        auto it=lower_bound(a.begin(),a.end(),i);
        int cnt=a.end()-it;
        car+=cnt;
        ans.push_back(car%10);
        car/=10;
    }
    while(car>0){
        ans.push_back(car%10);
        car/=10;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}
