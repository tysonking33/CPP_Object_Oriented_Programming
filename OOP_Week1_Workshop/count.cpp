int count(int array[], int n)
{
	int even_ctr= 0;
	for(int i = 0; i< n; i++)
	{
		if (array[i] % 2 == 0)
		{
			even_ctr = even_ctr + 1;
		}
	}
	return (even_ctr);
}
		
