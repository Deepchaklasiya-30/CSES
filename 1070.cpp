int t;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		ll max1=max({x,y});
	    ll ans=max1*max1-~(max1%2?y-x:x-y)-max1;
		cout<<ans<<endl;
	}
