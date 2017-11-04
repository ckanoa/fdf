/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckanoa  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 18:48:44 by ckanoa            #+#    #+#             */
/*   Updated: 2015/12/21 18:48:46 by ckanoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned long	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}