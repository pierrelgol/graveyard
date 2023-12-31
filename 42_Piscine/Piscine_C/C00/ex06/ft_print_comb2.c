/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:36:17 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/15 18:52:40 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			write(1, &"0123456789"[(i / 10) % 10], 1);
			write(1, &"0123456789"[i % 10], 1);
			write(1, &" ", 1);
			write(1, &"0123456789"[(j / 10) % 10], 1);
			write(1, &"0123456789"[j % 10], 1);
			if (i == 98 && j == 99)
				break ;
			write(1, &", ", 2);
			++j;
		}
		++i;
	}
}
