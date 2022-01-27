/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslotova <kslotova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:32:09 by kslotova          #+#    #+#             */
/*   Updated: 2022/01/27 13:49:56 by kslotova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**create_grid(int pieces)
{	
	t_etris	ts;
	int		temp;

	ts.r = 0;
	ts.c = 0;
	ts.size = pieces * 4;
	ts.grid = (char **)malloc(sizeof(char *) * (ts.size + 1));
	ft_bzero(ts.grid, sizeof(char *) * (ts.size + 1));
	if (!ts.grid)
		return (NULL);
	while (ts.r <= ts.size)
	{
		temp = ts.c;
		ts.grid[ts.r] = (char *)malloc(sizeof(char) * (ts.size + 1));
		ft_bzero(ts.grid[ts.r], sizeof(char) * (ts.size + 1));
		while (temp <= ts.size)
		{
			ts.grid[ts.r][temp] = '.';
			temp++;
		}
		ts.grid[ts.r][temp] = '\0';
		ts.r++;
	}
	ts.grid[ts.r] = NULL;
	return (ts.grid);
}
