int fun(int n)
{
	int f;
	
	if(n == 1 || n == 0)
	{
		f = 1;
	}
	else
	{
		f = n*fun(n-1);//Ƕ�׵����Լ� 
	}
	
	return f;
}
