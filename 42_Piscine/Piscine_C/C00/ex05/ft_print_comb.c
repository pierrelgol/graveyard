/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:47:07 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/15 18:53:12 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				write(1, &"0123456789"[i], 1);
				write(1, &"0123456789"[j], 1);
				write(1, &"0123456789"[k++], 1);
				if (!(i == 7 && j == 8 && k == 10))
					write(1, &", ", 2);
			}
			++j;
		}
		++i;
	}
}