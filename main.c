/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:07:37 by danielga          #+#    #+#             */
/*   Updated: 2024/07/03 17:07:07 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/**
 * @brief Función que inicializa la estructura del juego.
 * @param game Estructura del juego.
 */
void	ft_initstruct(t_game *game)
{
	game->coins = 0;
	game->needcoin = 0;
	game->moves = 0;
	game->player = 0;
	game->door = 0;
	game->wall = 0;
	game->floor = 0;
}

/**
 * @brief Función que muestra el error se ha producido y termina el programa.
 */
void	ft_error(int flag)
{
	if (flag == 0)
		ft_printf("Error! You must write: ./so_long <archive.ber>\n");
	else if (flag == 1)
		ft_printf("Error! You need an archive *.ber\n");
	else if (flag == 2)
		ft_printf("Error! The map is empty\n");
	else if (flag == 3)
		ft_printf("Error! The map is not symmetric\n");
	else if (flag == 4)
		ft_printf("Error! The map is not closed\n");
	else if (flag == 5)
		ft_printf("Error! The map is have a element incorrect\n");
	else if (flag == 6)
		ft_printf("Error! This map need 1 player, 1 exit, and 1/+ coin\n");
	exit(EXIT_FAILURE);
}

/**
 * @brief Función que libera toda la información del programa.
 * @param game Estructura del juego.
 */
void	ft_free_game(t_game *game)
{
	free(game);
}

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		ft_error(0);
	ft_startgame(argv[1], &game);
	ft_free_game(&game);
	return (0);
}

/**
 * El main tiene:
 * la estructura inicial - x
 * verificar que haya solo un archivo del mapa. - x
 * 
*/
