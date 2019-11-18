/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blomo <blomo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:37:50 by blomo             #+#    #+#             */
/*   Updated: 2019/09/23 19:44:59 by blomo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H
# define PI 3.14159265

typedef struct	s_point
{
	double		x;
	double		y;
	double		z;
	int			color;
}				t_point;

t_point			*point_create(double x, double y, double z);
void			translate_point(t_point *point, double x, double y, double z);

#endif
