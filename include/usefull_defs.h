/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull_defs.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blomo <blomo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:38:07 by blomo             #+#    #+#             */
/*   Updated: 2019/09/23 20:32:32 by blomo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_USEFULL_DEFS_H
# define FDF_USEFULL_DEFS_H
# define MOUSE_MOVE_HOOK 6
# define MOUSE_PRESS_HOOK 4
# define MOUSE_RELEASE_HOOK 5
# define KEY_PRESS_HOOK 2
# define KEY_RELEASE_HOOK 3
# define EXIT_HOOK 17
# define ISO_PROJECTION 0
# define XY_PROJECTION 1
# define YZ_PROJECTION 2
# define XZ_PROJECTION 3
# include "params.h"

int		mlx_hook(void *win_ptr, int x_event,
		int x_mask, int (*funct)(), void *param);
t_map	*read_map(char *fname);

#endif
