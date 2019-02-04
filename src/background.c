/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 21:28:30 by aroblin           #+#    #+#             */
/*   Updated: 2018/06/18 12:20:54 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void		background(t_env *e)
{
	int y;
	int x;

	y = 0;
	x = 0;
	while (y < e->win_y)
	{
		while (x < BACK)
		{
			e->img_data[y * e->win_x + x] = BLUE;
			x++;
		}
		x = 0;
		y++;
	}
}