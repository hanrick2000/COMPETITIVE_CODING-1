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
long int t;
cin>>t;
while(t--)
{
    long long int n,input,sum=0;
    cin>>n;
    vector<long long int>Ai;
    set<long long int> unique_;
    set<long long int>::iterator it;
    FORS(i,0,n)
    {
    cin>>input;
    Ai.push_back(input);
    unique_.insert(input);
    }
    for(auto x:unique_)
        sum+=x;
    //    cout<<sum<<" ";
    it=--unique_.end();
    sum-=*it;
//cout<<sum<<" ";
    cout<<max(sum,*it)<<endl;
}

}
