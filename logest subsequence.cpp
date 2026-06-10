#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   string s1,s2;
   cin>>s1>>s2;
   int r=s2.length(),c=s1.length();
   int dp[r][c];
   for(int i=0;i<=r;i++){
    for(int j=0;j<=c;j++){
        dp[i][j]=0;
    }
   }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            int adjm=max(dp[i][j-1],dp[i-1][j]);
            if(s2[i-1]==s1[j-1]){
                dp[i][j]=1+adjm;
            }else{
                dp[i][j]=adjm;
            }
        }
    }
    int m=0;
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c;j++){
                cout<<dp[i][j]<<" ";
            if(dp[i][j]>m){
                m=dp[i][j];
            }
        }cout<<endl;
    }
    cout<<m;
}
