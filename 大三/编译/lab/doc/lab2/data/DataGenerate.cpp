#include <bits/stdc++.h>
using namespace std;

int cnt=1e6;
int limit=1e8;

int main()
{
       freopen("in.txt","w",stdout);
       for(int i=0;i<cnt;i++)
        cout<<(rand()*rand())%limit<<endl;
       return 0;
}
