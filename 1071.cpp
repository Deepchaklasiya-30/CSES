#include<bits/stdc++.h>
#define mul(a) ((a)*(a))
using namespace std;
#define ll long long 
int main(){
	ll n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
			cout<<((mul(i)*(mul(i)-1)/2)-(8*(i-2)*(i-1)/2))<<endl;
	}
}
