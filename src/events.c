/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blomo <blomo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:54:00 by blomo             #+#    #+#             */
/*   Updated: 2019/09/23 18:56:58 by blomo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "params.h"
#include "usefull_defs.h"
#include <stdlib.h>

int		key_press(int keycode, t_gparams *param)
{
	if (keycode < 54)
		param->kstate[keycode] = 1;
	return (0);
}

int		key_release(int keycode, t_gparams *param)
{
	if (keycode < 54)
		param->kstate[keycode] = 0;
	return (0);
}

int		draw_tick(t_gparams *param)
{
	apply_keystate(param);
	draw_map(param);
	draw_canvas(param->canvas, 0, 0);
	return (0);
}

int		close_event(t_gparams *param)
{
	(void)param;
	exit(0);
}
