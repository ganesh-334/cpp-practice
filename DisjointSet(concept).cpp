#include <bits/stdc++.h>
using namespace std;
int findm(vector<int>& A,int node){
    if(A[node]!=node){
        A[node]=findm(A,A[node]);
    }
    return A[node];
}
void join(vector<int>& A,int l,int r){
    int ldrl=findm(A,l);
    int ldrr=findm(A,r);
    A[ldrl]=ldrr;
}
int main(){
    int N;cin>>N;
    vector<int> A(N+1);
    for(int i=1;i<=N;i++) A[i]=i;
    int M;cin>>M;
    for(int i=0;i<M;i++){
        int l,r;
        cin>>l>>r;
        join(A,l,r);
    }
    set<int> S;
    for(int i=1;i<=N;i++){
        S.insert(findm(A,i));
    }
    cout<<S.size();
}

