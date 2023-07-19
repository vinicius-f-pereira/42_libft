/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:18:58 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/19 15:08:12 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (TRUE);
	return (FALSE);
}

int	ft_atoi(const char *nptr)
{
	while (*nptr)
	{
		if ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
			nptr++;
		if (ft_isdigit(nptr) == FALSE)
			return (0);
		
	}
}
