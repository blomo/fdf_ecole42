/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blomo <blomo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:36:44 by blomo             #+#    #+#             */
/*   Updated: 2019/09/23 19:40:22 by blomo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_EVENTS_H
# define FDF_EVENTS_H
# include "params.h"

int draw_tick(t_gparams *param);
int	close_event(t_gparams *param);
int	key_release(int keycode, t_gparams *param);
int	key_press(int keycode, t_gparams *param);

#endif
