/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:08:22 by danielga          #+#    #+#             */
/*   Updated: 2023/11/07 11:52:46 by danielga         ###   ########.fr       */
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

void	ft_checkmap(char *map, t_game *game)
{
	game->map = ft_checkname(map);
	game->fd = open(game->map, O_RDONLY);
	ft_read(game);
	ft_initstruct(game);
	ft_controlmap(game);
}

/**
 * Hay que:
 * - revisar si el nombre es .ber
 * - que pueda abrirlo correctamente con open y tenga permisos para ello.
 * - que se pueda leer.
 * - iniciamos toda la estructura.
 * - validamos que el mapa sea correcto con coleccionables tomables y salida y 
 * cerrado.
 * 
*/
