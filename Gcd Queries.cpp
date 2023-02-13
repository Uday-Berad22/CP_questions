//https://www.codechef.com/problems/GCDQ
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n+10];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int forw[n+10];
        int backw[n+10];
        forw[0]=backw[n+1]=0;
       
        for(int i=1;i<=n;i++)
        {
           forw[i]=__gcd(forw[i-1],a[i]);
        }
        for(int i=n;i>=1;i--)
        {
            backw[i]=__gcd(backw[i+1],a[i]);
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int gc=0;
            gc=__gcd(forw[l-1],backw[r+1]);
            cout<<gc<<endl;
        }
    }

    return 0;
}
