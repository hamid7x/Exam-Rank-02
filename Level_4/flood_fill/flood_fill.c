#include "flood_fill.h"

void	fill(char **tab, t_point size, char target, int r, int c)
{
	if(r < 0 || c < 0 || r >= size.y || c >= size.x)
		return ;
	if(tab[r][c] == 'F' || tab[r][c] != target)
		return ;
	tab[r][c] = 'F';
	fill(tab, size, target, r + 1, c);
	fill(tab, size, target, r - 1, c);
	fill(tab, size, target, r, c + 1);
	fill(tab, size, target, r, c - 1);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char target = tab[begin.y][begin.x];
	fill(tab, size, target, begin.y, begin.x);
}
