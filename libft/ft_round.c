/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckanoa  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 16:56:49 by ckanoa            #+#    #+#             */
/*   Updated: 2015/12/21 17:09:19 by ckanoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double		ft_round(double x)
{
	if (x > 0 && (long)x < (long)(x + 0.5))
		return ((double)(long)(x + 1));
	if (x < 0 && (long)x > (long)(x - 0.5))
		return ((double)(long)(x - 1));
	return ((double)(long)x);
}
