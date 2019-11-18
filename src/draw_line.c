/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blomo <blomo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 20:58:01 by jleann            #+#    #+#             */
/*   Updated: 2019/09/23 19:35:29 by blomo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.h"
#include "canvas.h"
#include "params.h"

int		abs(int x)
{
	return (x < 0 ? -x : x);
}

void	draw_line_2d(t_canvas *canv, int *xy, int color, int error2)
{
	int delta[4];
	int error;

	delta[0] = abs(xy[2] - xy[0]);
	delta[1] = abs(xy[3] - xy[1]);
	delta[2] = xy[0] < xy[2] ? 1 : -1;
	delta[3] = xy[1] < xy[3] ? 1 : -1;
	error = delta[0] - delta[1];
	put_pixel(canv, xy[2], xy[3], color);
	while (xy[0] != xy[2] || xy[1] != xy[3])
	{
		put_pixel(canv, xy[0], xy[1], color);
		error2 = error * 2;
		if (error2 > -delta[1])
		{
			error -= delta[1];
			xy[0] += delta[2];
		}
		if (error2 < delta[0])
		{
			error += delta[0];
			xy[1] += delta[3];
		}
	}
}

void	draw_line(t_gparams *data, t_point *from, t_point *to)
{
	int xy[4];

	project_point(xy, xy + 1, from, data);
	project_point(xy + 2, xy + 3, to, data);
	draw_line_2d(data->canvas, xy, to->color, 0);
}
