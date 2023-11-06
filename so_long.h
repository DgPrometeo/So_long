/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:09:37 by danielga          #+#    #+#             */
/*   Updated: 2023/11/06 12:39:28 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./libft/libft.h"
# include "./MLX42/include/MLX42/MLX42.h"
# define WIDTH 256
# define HEIGHT 256

/**
 * Main MLX handle, carries important data in regards to the program.
 * @param window The window itself.
 * @param context Abstracted opengl data.
 * @param width The width of the window.
 * @param height The height of the window.
 * @param delta_time The time difference between the previous frame and the
 * current frame.
 * @param collect coleccionables conseguidos.
 * @param needcollec coleccionables requeridos para abrir la salida.
 * @param moves número de movimientos realizados.
 */
typedef struct s_game
{
	void		*window;
	void		*context;
	int32_t		width;
	int32_t		height;
	double		delta_time;
	int			collect;
	int			needcollec;
	int			moves;
}				t_game;

//funciones
//main.c
int			main(int argc, char **argv);
void		ft_free_game(t_game game);
void		ft_error(t_game data);

//make_game.c
void		ft_startgame(char *map, t_game *game);

//check_map.c
void		ft_checkmap(char *map, t_game *game);
void		ft_checkname(char *map);

#endif
