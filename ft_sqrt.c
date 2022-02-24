/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:15:12 by qdufour           #+#    #+#             */
/*   Updated: 2022/02/15 15:15:14 by qdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	sqrt;

	sqrt = 1;
	if (nb < 1)
		return (0);
	while (sqrt * sqrt < (unsigned)nb)
		sqrt++;
	if (sqrt * sqrt == (unsigned)nb)
		return (sqrt);
	else
		return (0);
}
