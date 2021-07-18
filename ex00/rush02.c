void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	yi;
	int	xi;

	yi = 0;
	while (yi < y && y > 0 && x > 0)
	{
		xi = 0;
		while (xi < x && x >= 0)
		{
			if (yi == 0 && (xi == 0 || xi == x - 1))
				ft_putchar('A');
			else if (yi == y - 1 && (xi == 0 || xi == x - 1))
				ft_putchar('C');
			else if (yi == 0 || yi == y - 1 || xi == 0 || xi == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			xi++;
		}
		yi++;
		ft_putchar('\n');
	}
}
