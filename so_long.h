/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:09:37 by danielga          #+#    #+#             */
/*   Updated: 2024/06/05 19:15:43 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./libft/libft.h"
# include "./MLX42/include/MLX42/MLX42.h"
# include <unistd.h>
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
 * @param map Es el propio mapa dado.
 * @param fd Al abrir el archivo del mapa con open, el file descriptor dado.
 *  */
typedef struct s_game
{
	void		*window;
//	void		*context;
	int			width;
	int			height;
//	double		delta_time;
	int			collect;
	int			needcollec;
	int			moves;
	char		*map;
	char		**gamemap;
	int			fd;
}				t_game;

//funciones
//main.c
int			main(int argc, char **argv);
void		ft_free_game(t_game game);
void		ft_error(int flag);
void		ft_initstruct(t_game *game);

//make_game.c
void		ft_startgame(char *map, t_game *game);

//check_map.c
void		ft_checkmap(char *map, t_game *game);
void		ft_checkname(char *map);

//f_map.c
void		ft_read(t_game *game);
void		ft_controlmap(t_game *game);
#endif
