/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:05:16 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/18 18:25:29 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int	c)
{
	if (c >= 0 && c <= 127)
		return (TRUE);
	return (FALSE); 	
}
