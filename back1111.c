main()
{
	int a;
	int b;
	//b=1;
	int c;
	printf("enter the value for table:");
	scanf("%d",& a);
	printf("enter any starting point:");
	scanf("%d",& b);
	printf("enter the limit:");
	scanf("%d",& c);
	while (b<=c)
	{		
	printf("%d*%d=%d\n",a,b,a*b);
	b++;	
	} 
	}
	 
