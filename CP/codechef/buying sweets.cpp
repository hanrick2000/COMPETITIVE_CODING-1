#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,x,sum=0,input,min_=INT_MAX,can_buy;
        cin>>n>>x;
        FORS(i,0,n)
        {
            cin>>input;
            sum+=input;
            if(input<min_)
                min_=input;
        }
        can_buy=sum/x;
        if(((sum-min_)/x)==can_buy)
            cout<<-1<<endl;
        else
            cout<<can_buy<<endl;




    }

}
