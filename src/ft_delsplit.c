/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blomo <blomo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:08:17 by blomo             #+#    #+#             */
/*   Updated: 2019/09/23 19:27:40 by blomo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.h"
#include "params.h"
#include <stdlib.h>

void	del_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	if (str)
		free(str);
}

void	del_error(t_map *res, char **tmp)
{
	if (res)
		free(res);
	del_split(tmp);
}
