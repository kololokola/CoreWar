/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stralldel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opavliuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:06:02 by opavliuk          #+#    #+#             */
/*   Updated: 2018/03/28 17:40:13 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stralldel(char **str, size_t n)
{
	size_t i;

	i = 0;
	if (str)
	{
		while (i < n)
		{
			free(str[i]);
			str[i] = NULL;
			i++;
		}
	}
}
