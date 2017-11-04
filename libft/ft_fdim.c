/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckanoa  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 17:16:09 by ckanoa            #+#    #+#             */
/*   Updated: 2015/12/18 17:17:25 by ckanoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double		ft_fdim(double n1, double n2)
{
	if (n1 - n2 >= 0)
		return (n1 - n2);
	return (0);
}
