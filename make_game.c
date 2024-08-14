/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:08:59 by danielga          #+#    #+#             */
/*   Updated: 2024/08/14 18:24:44 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * @brief Función que:
 * - chequea el mapa
 * - abre la ventana
 * - dibuja el mapa
 * - permite jugar
 * - revisa la condición de victoria?
 */
void	ft_startgame(char *map, t_game *game)
{
	ft_checkmap(map, game);
	ft_openwindow(game);
	ft_drawmap(game);
	//arrancar juego con mlx_hook?
	//que funcione con mlx_loop
	//que revise la condición de victoria?
}

void	ft_openwindow(t_game *game)
{
	game->window = mlx_init(game->width, game->height, "so_long", game->mlx);
}

/**
 * Tendrá que: 
 * revisar el mapa entero incluido el nombre del archivo
 * Abrir la ventana
 * Dibujar el mapa en la ventana
 * llamar a mlx hook
 * llamar a mlx_loop
*/