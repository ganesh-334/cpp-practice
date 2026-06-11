#include <iostream>
#include <map>
using namespace std;

int main() {
    string in;
    cin>>in;
    map<int,int> m;
    int val=0,maxlength=0,l=in.size();
    m[0]=-1;
    for(int i=0;i<l;i++){
        if(in[i]=='1'){
            val+=1;
        }else{
            val-=1;
        }
        if(m.find(val)!=m.end()){
            maxlength=max(maxlength,i-m[val]);
        }else{
            m[val]=i;
        }
    }
    cout<<maxlength;
    }

