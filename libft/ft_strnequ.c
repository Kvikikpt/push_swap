/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:46:03 by cnikia            #+#    #+#             */
/*   Updated: 2019/04/13 20:48:41 by cnikia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (!(s1 && s2))
		return (0);
	while (a < n)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		a++;
	}
	return (1);
}
