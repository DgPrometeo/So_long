/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:08:22 by danielga          #+#    #+#             */
/*   Updated: 2024/06/05 20:36:56 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_checkname(char *map)
{
	char	*arch;
	char	*name;
	int		i;

	arch = "ber";
	name = ft_strrchr(map, ".");
	name++;
	i = 0;
	while (arch[i] != NULL)
	{
		if (name != arch[i])
		{
			ft_error(1);
		}
		name++;
		i++;
	}
}

void	ft_symmetric(t_game game)
{
	int	x;
	int	y;
	int	total_x;

	x = 0;
	y = 0;
	while (game.gamemap[x][y] != '\0')
		x++;
	total_x = x;
	x = 0;
	while (game.gamemap[x][y] != '\0')
	{
		while (game.gamemap[x][y] != '\0')
		{
			x++;
		}
		if (total_x != x)
			ft_error(3);
		x = 0;
		y++;
	}
	game.height = y;
	game.width = total_x;
}

void	ft_checkmap(char *map, t_game *game)
{
	game->map = ft_checkname(map);
	#include <fcntl.h>

	game->fd = open(game->map, O_RDONLY);
	ft_read(game);
	ft_initstruct(game);
	ft_controlmap(game);
}

//TERMINAR DE HACER ESTA FUNCION
void	ft_bordermap(t_game game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	// Check top and bottom borders
	while (x < game.width)
	{
		if (game.gamemap[x][y] != '1' || game.gamemap[x][game.height - 1] != '1')
		{
			ft_error(4);
		}
		x++;
	}
	// Check left and right borders
	x = 0;
	y = 1;
	while (y < game.height - 1)
	{
		if (game.gamemap[x][y] != '1' || game.gamemap[game.width - 1][y] != '1')
		{
			ft_error(4);
		}
		y++;
	}
}
//prueba 2
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (game.gamemap[x][y] != '\0')
	{
		while (y = 0)
		{
			if (game.gamemap[x][y] != '1')
				ft_error(4);
			x++;
			if (game.gamemap[x][y] == '\0')
				y++;
		}
		while (x != game.width && y != game.height)
		{
			if (game.gamemap[0][y] != '1' || game.gamemap[game.height - 1][y] != '1')
				ft_error(4);
			if (game.gamemap[x][y] != '\0')
				{
					y++;
					x = 0;
				}
			x++;
		}
	}
}



/**
 * Hay que:
 * - revisar si el nombre es .ber - listo
 * - que pueda abrirlo correctamente con open y tenga permisos para ello. - listo?
 * - que se pueda leer. - listo
 * - iniciamos toda la estructura. - listo
 * - validamos que el mapa sea correcto con coleccionables tomables y salida y 
 * cerrado.
 * 
*/
