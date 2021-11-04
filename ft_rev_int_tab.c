
void	ft_rev_int_tab(int *tab, int size)
{
	int *buff_tab[size];
	int n;
	int rev;
	rev = 0;
	n = size - 1;
	while (n >= 0)
	{
		buff_tab[rev] = tab[n];
		n--;
		rev++;
	}
	n = 0;
	while (n < size)
	{
		tab[n] = buff_tab[n];
		n++;
	}
}
