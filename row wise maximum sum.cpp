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
            if(i==0)
            {
            dp[i][j]=mat[i][j];
            }
        }
    }
    for(int i=1;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int m=0;
            for(int l=0;l<c;l++){
                if(dp[i-1][l]>m && l!=j)
                {
                    m=dp[i-1][l];
                }
            }
            dp[i][j]=mat[i][j]+m;
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
