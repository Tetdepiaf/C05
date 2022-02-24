/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:03:08 by qdufour           #+#    #+#             */
/*   Updated: 2022/02/15 15:03:09 by qdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	nb;

	nb = index;
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	if (index > 1)
		nb = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (nb);
}
