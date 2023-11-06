/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:08:59 by danielga          #+#    #+#             */
/*   Updated: 2023/11/06 11:28:38 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_startgame(char *map, t_game *game)
{
	ft_checkmap(map, game);
}

/**
 * Tendrá que: 
 * revisar el mapa entero incluido el nombre del archivo
 * Abrir la ventana
 * Dibujar el mapa en la ventana
 * llamar a mlx hook
 * llamar a mlx_loop
*/