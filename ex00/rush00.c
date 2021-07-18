void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	yi;
	int	xi;

	yi = 0;
	while (yi < y && y > 0 && x > 0)
	{
		xi = 0;
		while (xi < x)
		{
			if (yi == 0 || yi == y - 1)
			{
				if (xi == 0 || xi == x - 1)
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else if (xi == 0 || xi == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			xi++;
		}
		yi++;
		ft_putchar('\n');
	}
}
