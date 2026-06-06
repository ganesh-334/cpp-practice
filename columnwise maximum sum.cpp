#include <iostream>

using namespace std;
int main()
{
    int c,r;
    cin>>r>>c;
    int mat[r][c],dp[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>mat[i][j];
            if(j==0)
            {
            dp[i][j]=mat[i][j];
            }
        }
    }
    for(int i=1;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            int m=0;
            for(int l=0;l<c;l++){
                if(dp[l][i-1]>m && l!=j)
                {
                    m=dp[l][i-1];
                }
            }
            dp[j][i]=mat[j][i]+m;
        }
    }
    int maxval=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
            if(dp[i][j]>maxval)
            {
                maxval=dp[i][j];
            }
        }
    }
    cout<<maxval;
}
