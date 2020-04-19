int cd(int a, int b)
{
	while(a%b != 0)
	{
		int tmp = a%b;
		a = b;
		b = tmp;
	}
	
	return b;
}
