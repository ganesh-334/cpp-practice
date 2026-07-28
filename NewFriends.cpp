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
    A[ldrr]=ldrl;
}
int main(){
    int N;cin>>N;
    vector<int> A(N+1);
    for(int i=1;i<=N;i++) A[i]=i;
    int M;cin>>M;
    vector<int> q(M+1);
    for(int i=1;i<=M;i++){
        int l,r;
        cin>>l>>r;
        q[i]=l;
        join(A,l,r);
    }
    vector<int> gcnt(N+1,0),ecnt(N+1,0);
    for(int i=1;i<=N;i++){
        int t=findm(A,i);
        gcnt[t]++;
    }
    for(int i=1;i<=M;i++){
        ecnt[A[q[i]]]++;
    }
    long long int ans=0,p=1;
    for(int i=1;i<=N;i++){
        int ncnt=gcnt[i];
        ans+=((p*ncnt*(ncnt-1))/2)-ecnt[i];
    }

    cout<<ans;
}

