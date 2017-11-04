/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckanoa  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 15:01:23 by ckanoa            #+#    #+#             */
/*   Updated: 2015/12/14 15:12:48 by ckanoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	return (c == ' ' || c == '\n' || c == '\f' || c == '\r' || c == '\t' \
			|| c == '\v' || c == '	');
}