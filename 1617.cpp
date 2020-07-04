#include<bits/stdc++.h>
#define MODE 1000000007
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin>>n;
//	x=n;
	ll ans=0,count=1;
	while(n/(pow(5,count))>0)
	{
		ans+=(n/(pow(5,count)));
		count++;
	}
	cout<<ans;
	
}
