#include<bits/stdc++.h>
#define MODE 1000000007
#define ll long long int
using namespace std;
int main()
{
	int n;cin>>n;
	ll ans=1;
	for(int i=1;i<=n;i++)
	{
		ans=(ans*2)%MODE;
	}
	cout<<ans;
}
