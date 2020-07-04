cin>>n;
    while(n!=1)
    {
    	cout<<n<<" ";
    	if(n%2==1) n=3*n+1;
    	else if(n%2==0) n/=2;
	}
	cout<<"1";
