/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:01:17 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/19 14:26:44 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (TRUE);
	if (c >= 'a' && c <= 'z')
		return (TRUE);
	if (c >= '0' && c <= '9')
		return (TRUE);
	return (FALSE);
}
