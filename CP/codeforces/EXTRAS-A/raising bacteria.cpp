#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main()
{
long long int n,i=1;
cin>>n;
while(true)
{
    i=i*2;
    if(i==n)
    {
        cout<<1;
        return 0;
    }
    if(i>n)
        break;
}
    i=i/2;
    cout<<n-i;
}
