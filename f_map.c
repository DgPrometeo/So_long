/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_map.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:45:24 by danielga          #+#    #+#             */
/*   Updated: 2024/07/04 11:09:43 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * @brief Función que
 * - Comprueba si el mapa es simétrico
 * - Comprueba si el mapa está cerrado
 * - Comprueba si el mapa tiene elementos correctos
 * si no encuentra todos los elementos mínimos lo indicará con un error.
 */
void	ft_controlmap(t_game *game)
{
	ft_symmetric(game);
	ft_bordermap(game);
	ft_elementsmap(game);
	if (game->player != 1 || game->door != 1 || game->coins < 1)
		ft_error(6);
}

/**
 * @brief Función que leerá todo el archivo y lo guardará en la estructura.
 */
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
