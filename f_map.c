/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_map.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:45:24 by danielga          #+#    #+#             */
/*   Updated: 2024/06/05 18:52:15 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_controlmap(t_game *game)
{
	ft_symmetric(game);
	ft_bordermap(game);
	ft_elementsmap(game);
}

void	ft_read(t_game *game)
{
	char	*line;
	char	*total;

	total = 0;
	line = 1;
	while (line != 0)
	{
		line = get_next_line(game->fd);
		if (line != 0)
		{
			total = ft_strjoin(total, line);
			free(line);
		}
	}
	if (total[0] == '\n' || total == 0)
		ft_error(2);
	game->gamemap = ft_split(total, '\n');
	free(total);
	close(game->fd);
}


