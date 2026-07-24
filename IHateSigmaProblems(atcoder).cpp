#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> a(N),prev(N+1,0);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    long long int sum=0,last=0;
    for(int i=N-1;i>=0;i--){
        last-=prev[a[i]];
        last+=(prev[a[i]]=N-i);
        sum+=last;
    }
    cout<<sum;
}
