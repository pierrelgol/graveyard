/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:50:35 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/16 17:56:03 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	if (a != (void *)0 && b != (void *)0)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

