#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k;
	ll sum=0;
	cin>>n>>k;
	multiset<ll> s;
		for(int i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			s.insert(a);
		}
		for(int i=0;i<k;i++)
		{
			sum=sum+*(--s.end());
			ll a;
			a=*(--s.end());
			s.erase(--s.end());
			s.insert(a/2);
		}
		cout<<sum<<endl;
	}
	return 0;
}
