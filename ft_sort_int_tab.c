int	ft_check_order(int *tab, int size)
{
	int n;
	int j;
	n = 0;
	if (arr[0] < arr[1])		
	{		
		j = 0;
		while(arr[n] < arr[n + 1] && n < (size - 1))
		{
			j++;
			n++;
		}
		if ( n == size - 1)
		{
			return 1;
		}
	}
	return 0;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int n;
	while(check(tab, size) == 0)
	{
		n = 0;
		while (n < size - 1)
		{
			if (tab[n] > tab[n + 1])
			{
				buff = tab[n];
				tab[n] = tab[n + 1];
				tab[n + 1] = buff;
			}
			n++;
		}
	}
}
