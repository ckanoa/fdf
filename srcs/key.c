/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckanoa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 15:05:30 by ckanoa            #+#    #+#             */
/*   Updated: 2017/09/12 20:31:03 by ckanoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			ft_expose_hook(t_var *f)
{
	int	x;
	int	y;

	x = 27;
	y = 34;
	while (x <= 180)
		mlx_pixel_put(f->mlx, f->win, x++, y, OP_COLOR);
	while (y <= 117)
		mlx_pixel_put(f->mlx, f->win, x, y++, OP_COLOR);
	while (x >= 27)
		mlx_pixel_put(f->mlx, f->win, x--, y, OP_COLOR);
	while (y >= 34)
		mlx_pixel_put(f->mlx, f->win, x, y--, OP_COLOR);
	mlx_string_put(f->mlx, f->win, 35, 35, OP_COLOR, "Quit = ESC");
	mlx_string_put(f->mlx, f->win, 35, 55, OP_COLOR, "Move = ^ v < >");
	mlx_string_put(f->mlx, f->win, 35, 75, OP_COLOR, "Zoom = + -");
	mlx_string_put(f->mlx, f->win, 35, 95, OP_COLOR, "Depth = w s");
	ft_call(f);
	return (0);
}

static int	ft_key3(int keycode, t_var *f)
{
	if (keycode == 13)
	{
		if (f->z <= 30.)
			f->z += 0.4;
		mlx_clear_window(f->mlx, f->win);
		ft_expose_hook(f);
	}
	if (keycode == 1)
	{
		if (f->z >= -30.)
			f->z -= 0.4;
		mlx_clear_window(f->mlx, f->win);
		ft_expose_hook(f);
	}
	return (0);
}

static int	ft_key2(int keycode, t_var *f)
{
	if (keycode == 126)
	{
		f->ymove += 30;
		mlx_clear_window(f->mlx, f->win);
		ft_expose_hook(f);
	}
	if (keycode == 69)
	{
		if (f->zoom <= 95)
			f->zoom += 1;
		mlx_clear_window(f->mlx, f->win);
		ft_expose_hook(f);
	}
	if (keycode == 78)
	{
		if (f->zoom >= -35)
			f->zoom -= 1;
		mlx_clear_window(f->mlx, f->win);
		ft_expose_hook(f);
	}
	ft_key3(keycode, f);
	return (0);
}

int			ft_key_hook(int keycode, t_var *f)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 123)
	{
		f->xmove += 30;
		mlx_clear_window(f->mlx, f->win);
		ft_expose_hook(f);
	}
	if (keycode == 124)
	{
		f->xmove -= 30;
		mlx_clear_window(f->mlx, f->win);
		ft_expose_hook(f);
	}
	if (keycode == 125)
	{
		f->ymove -= 30;
		mlx_clear_window(f->mlx, f->win);
		ft_expose_hook(f);
	}
	ft_key2(keycode, f);
	return (0);
}
