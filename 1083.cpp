    int i,j,x,n,m,k,t;
    string s;
    cin>>s;
    int count=1,max=1;
    fo(i,1,s.length())
    {
    	if(s[i]==s[i-1])
    	{
    		count++;
    		if(max<count) max=count;
    		
		}
		else count=1;
	}
	cout<<max;

