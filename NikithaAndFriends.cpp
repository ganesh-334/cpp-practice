#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int N;cin>>N;
        vector<int> book(N+1,0);
        for(int i=1;i<=N;i++){
            cin>>book[i];
        }
        int bal=0;
        bool res=true;
        for(int i=1;i<=N;i++){
            if(book[i]>=i){
                bal+=(book[i]-i);
            }else if(book[i]<i){
                bal-=(i-book[i]);
            }
            if(bal<0){
                res=false;
                break;
                }
        }
        (res)?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
}
