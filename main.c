/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:07:37 by danielga          #+#    #+#             */
/*   Updated: 2023/11/06 12:33:29 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(int flag)
{
	if (flag == 0)
		ft_printf("Error! You write: ./so_long <archive.ber>\n");
	else if (flag == 1)
		ft_printf("Error! You need an archive *.ber\n");
	exit(EXIT_FAILURE);
}

void	ft_free_game(t_game game)
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
 * la estructura inicial
 * verificar que haya solo un archivo del mapa. 
 * 
*/
