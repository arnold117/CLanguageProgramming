int prime(int a)
{
	int i =2;
	
	if(a<2)
	{
		return 0;
	}
	
	while(i<a)
	{
		if(a%i == 0)
		{
			break;
		}
		
		i++;
	}
	
	if(a==i)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
