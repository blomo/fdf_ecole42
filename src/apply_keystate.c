/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_keystate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blomo <blomo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:59:56 by blomo             #+#    #+#             */
/*   Updated: 2019/09/23 18:52:30 by blomo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "params.h"
#include <stdlib.h>

void	apply_rotations(t_gparams *data)
{
	if (data->kstate[1])
		data->x_angle += 2;
	else if (data->kstate[13])
		data->x_angle -= 2;
	if (data->kstate[0])
		data->y_angle -= 2;
	else if (data->kstate[2])
		data->y_angle += 2;
	if (data->kstate[12])
		data->z_angle -= 2;
	else if (data->kstate[14])
		data->z_angle += 2;
}

void	apply_scale(t_gparams *data)
{
	if (data->kstate[24])
		data->z_scale *= 1.1;
	else if (data->kstate[27])
		data->z_scale *= 0.9;
	if (data->kstate[33])
		data->xy_scale *= 1.1;
	else if (data->kstate[30])
		data->xy_scale *= 0.9;
}

void	apply_keystate(t_gparams *data)
{
	if (data->kstate[53])
		exit(0);
	if (data->kstate[18])
		drop_params(data);
	if (data->kstate[19])
		data->proj_type = XY_PROJECTION;
	else if (data->kstate[20])
		data->proj_type = ISO_PROJECTION;
	apply_rotations(data);
	apply_scale(data);
}
