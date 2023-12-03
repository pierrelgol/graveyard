/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:58:04 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/18 14:03:50 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	is_prime;
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	is_prime = 1;
	while ((i * i) <= nb && is_prime)
	{
		if (nb % i == 0)
			is_prime = 0;
		++i;
	}
	return (is_prime);
}