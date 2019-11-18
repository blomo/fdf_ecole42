/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_drawer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blomo <blomo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 20:05:34 by blomo             #+#    #+#             */
/*   Updated: 2019/09/23 20:09:27 by blomo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "params.h"
#include "matrices.h"

void		update_matrix(t_gparams *data)
{
	drop_matrix(data->tf_matrix);
	add_scaling(data->tf_matrix, data->xy_scale, data->xy_scale, data->z_scale);
	add_xrotation(data->tf_matrix, data->x_angle);
	add_yrotation(data->tf_matrix, data->y_angle);
}

void		draw_map(t_gparams *data)
{
	int		row;
	int		coll;
	t_point	**map;

	map = data->map->map;
	row = -1;
	while (++row < data->map->rows)
	{
		coll = 0;
		while (coll < data->map->colls - 1)
		{
			draw_line(data, map[row] + coll, map[row] + coll + 1);
			coll++;
		}
	}
	coll = -1;
	while (++coll < data->map->colls)
	{
		row = 0;
		while (row < data->map->rows - 1)
		{
			draw_line(data, map[row] + coll, map[row + 1] + coll);
			row++;
		}
	}
}
