int n;
	cin>>n;
	vi v(n);
	for(int &x:v) cin>>x;
	set<int>s;
	int cnt=0,ans=0;
	f(i,0,n)
	{
		while(s.count(v[i])>0)
		{
			s.erase(v[cnt]);
			cnt++;
		}
		s.insert(v[i]);
		ans=max(ans,i-cnt);
	}
	cout<<ans+1;
