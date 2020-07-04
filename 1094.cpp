int i,j,x,n,m,k,t;
    cin>>n;
    int ar[n+1],count=0;
    for(int i=2;i<=n;i+=2)
    {
    	ar[count++]=i;
	}
    for(int i=1;i<=n;i+=2)
    {
    	ar[count++]=i;
	}
     int flag=1;
	for(int i=0;i<count-1;i++)
	{
		if(abs(ar[i]-ar[i+1])==1) 
		{
			flag=0;
			break;
		}
	}
	if(flag==1) 
	{
		for(int i=0;i<count;i++) cout<<ar[i]<<" ";
	}
	else cout<<"NO SOLUTION";
