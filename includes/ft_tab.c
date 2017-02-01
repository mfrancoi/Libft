/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 16:56:26 by mfrancoi          #+#    #+#             */
/*   Updated: 2017/02/01 04:16:14 by mfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_tab(int lenx, int leny, char c)
{
	char	**res;
	int		x;
	int		y;

	y = 0;
	if (!(res = (char **)malloc(sizeof(char*) * leny)))
		return (NULL);
	while (y < leny)
	{
		if (!(res[y] = (char*)malloc(sizeof(char) * lenx)))
			return (NULL);
		x = 0;
		while (x < lenx)
		{
			res[y][x] = c;
			x++;
		}
		res[y][x] = 0;
		y++;
	}
	return (res);
}
