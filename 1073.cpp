
	int n;
	cin>>n;
	int cnt=0;
	multiset<int>m;
	f(i,0,n)
	{
		int x;
		cin>>x;
		auto it=m.upper_bound(x);
		if(it==m.end())
		{
			cnt++;
			m.insert(x);
		    continue;
		}
		m.erase(it);
		m.insert(x);
	}
	cout<<cnt;
