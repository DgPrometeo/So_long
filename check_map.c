/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:08:22 by danielga          #+#    #+#             */
/*   Updated: 2024/07/03 19:14:45 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * @brief Función que comprueba si el archivo es *.ber
 */
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

/**
 * @brief Función que comprueba si el mapa es simétrico.
 */
void	ft_symmetric(t_game *game)
{
	int	x;
	int	y;
	int	total_x;

	x = 0;
	y = 0;
	while (game->gamemap[x][y] != '\0')
		x++;
	total_x = x;
	x = 0;
	while (game->gamemap[x][y] != '\0')
	{
		while (game->gamemap[x][y] != '\0')
		{
			x++;
		}
		if (total_x != x)
			ft_error(3);
		x = 0;
		y++;
	}
	game->height = y;
	game->width = total_x;
}

/**
 * @brief Función que comprueba si el archivo y el mapa es correcto.
 * A su vez, inicia la estructura y lee el archivo.
 */
void	ft_checkmap(char *map, t_game *game)
{
	game->map = ft_checkname(map);
	game->fd = open(game->map, O_RDONLY);
	ft_read(game);
	ft_initstruct(game);
	ft_controlmap(game);
}

/**
 * @brief Función que comprueba si el mapa está cerrado.
 */
void	ft_bordermap(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < game->width)
	{
		if (game->gamemap[x][y] != '1' || game->gamemap[x][game->height - 1] != '1')
			ft_error(4);
		x++;
	}
	x = 0;
	y = 1;
	while (y < game->height - 1)
	{
		if (game->gamemap[x][y] != '1' || game->gamemap[game->width - 1][y] != '1')
			ft_error(4);
		y++;
	}
}

/**
 * Hay que:
 * - revisar si el nombre es .ber - x
 * - que pueda abrirlo correctamente con open y tenga permisos para ello. - x
 * - que se pueda leer. - x
 * - iniciamos toda la estructura. - x
 * - validamos que el mapa sea correcto con coleccionables tomables y salida y 
 * cerrado. - x
 * 
*/
