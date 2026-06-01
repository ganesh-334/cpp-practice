#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    for(int c=1;c<(1<<l);c++)
    {
        string comb="";
        for(int ch=0;ch<l;ch++)
        {
            if((c&(1<<ch))>0)
            {
                comb+=s[ch];
            }
        }
        cout<<comb<<endl;
    }
}
