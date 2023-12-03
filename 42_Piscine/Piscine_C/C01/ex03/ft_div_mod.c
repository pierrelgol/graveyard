/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:58:17 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/16 18:06:59 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (div != (void *)0 && mod != (void *)0 && b != 0)
	{
		if (b < 0)
		{
			*div = -1;
			b *= *div;
		}
		else
			*div = 1;
		*div *= (a / b);
		*mod = a - (*div * b);
	}
}
