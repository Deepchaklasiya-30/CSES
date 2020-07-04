ll n,ans=0,x,max;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(i==0) max=x;
		else
		{
			if(max>x)
			{
				ans+=(max-x);
			}
			else
			{
				max=x;
			}
		}
	}
	cout<<ans;
